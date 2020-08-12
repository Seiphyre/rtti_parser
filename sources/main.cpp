// https://eli.thegreenplace.net/2014/05/21/compilation-databases-for-clang-based-tools

#include "clang/Driver/Options.h"
#include "clang/AST/AST.h"
#include "clang/AST/ASTContext.h"
#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Frontend/ASTConsumers.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
//#include "clang/Rewrite/Core/Rewriter.h"

#include <iostream>
#include <fstream>
#include <memory>
#include <string>
#include <vector>
//#include <stdexcept>

#include "InfoStructs.h"
#include "Utils.hpp"

using namespace std;
using namespace clang;
using namespace clang::driver; // useless ?
using namespace clang::tooling;
using namespace llvm;

static cl::OptionCategory MyToolCategory("Custom options");
static cl::opt<string>    GenInclPath("gen-incl-path", cl::cat(MyToolCategory),
                                   cl::desc("Path to generated include directory."), cl::value_desc("string"));
static cl::extrahelp      CommonHelp(CommonOptionsParser::HelpMessage);
// static cl::extrahelp      MoreHelp("\nMore help text...\n");
// static cl::opt<bool> YourOwnOption(...);

// Rewriter rewriter;

int                     data_index = 0;
std::map<int, FileInfo> g_data;

// 1: INCLUDE_GUARD_NAME
// 2: INCLUDE_GUARD_NAME
// 3: SPECIALISATION_TEMPLATE
const std::string FileTemplate =
    R"(#ifndef %s
#define %s

#include <Meta.h>

namespace meta 
{

%s

} // end namespace

#endif
)";

// 1: TYPE
// 2: MEMBER_TEMPLATE
const std::string SpecializationTemplate =
    R"(template <>
inline auto registerMembers< %s >() 
{
    return members( 
%s 
    );
})";

// 1: SHORT_MEMBER_NAME
// 2: MEMBER_NAME
const std::string MemberTemplate = R"(member("%s", &%s))";

// -------------------------------------

class MyVisitor : public RecursiveASTVisitor<MyVisitor> // << template nouveau ?
{
  private:
    ASTContext *    ast_context; // used for getting additional AST info
    SourceManager * source_manager;

  public:
    explicit MyVisitor(
        CompilerInstance * compiler_instance) //: astContext(&(CI->getASTContext())) // initialize private members
    {
        ast_context    = &(compiler_instance->getASTContext());
        source_manager = &(compiler_instance->getSourceManager());

        // rewriter.setSourceMgr(astContext->getSourceManager(), astContext->getLangOpts());
    }

    bool VisitCXXRecordDecl(clang::CXXRecordDecl * decl)
    {
        if (source_manager->isWrittenInMainFile(decl->getSourceRange().getBegin()))
        {
            // FullSourceLoc full_location = ast_context->getFullLoc(decl->getBeginLoc());
            // FileID file_id = full_location.getFileID();

            // class infos -------------------------
            ClassInfo * class_info = new ClassInfo();

            class_info->type = decl->getQualifiedNameAsString();

            // std::cout << decl->getQualifier()->getAsType()->isBuiltinType() << std::endl;

            // std::cout << " Class type: " << decl->getQualifiedNameAsString() << std::endl;

            const auto bases = decl->bases();

            std::for_each(std::begin(bases), std::end(bases), [&class_info, this](const auto & b) {
                CXXBaseSpecifier base = (CXXBaseSpecifier)b;

                PrintingPolicy pp(ast_context->getLangOpts());
                std::string    base_type = base.getType().getAsString(pp);

                // std::cout << base.getType().getAsString(pp) << std::endl;

                class_info->bases_type.push_back(base_type);
            });

            const auto fields = decl->fields();

            std::for_each(std::begin(fields), std::end(fields), [&class_info, this](const auto & f) {
                ClassAttribute * class_attribute = new ClassAttribute();
                FieldDecl *      field           = dynamic_cast<FieldDecl *>(f);
                TypedefType *    typedef_type    = (TypedefType *)f;

                class_attribute->name      = field->getNameAsString();
                class_attribute->full_name = field->getQualifiedNameAsString();
                // std::cout << std::endl << field->getQualifiedNameAsString() << std::endl;
                // PrintingPolicy pp(ast_context->getLangOpts());
                // field->getType()->dump();
                // std::cout << QualType::getAsString(field->getType().split(), pp) << std::endl;

                // f->getType()->getAsCXXRecordDecl();

                // std::cout << " Attribut " << attribut_name << " of type " << attribut_type << std::endl;
                class_info->attributes.push_back(class_attribute);
            });

            g_data[data_index].classes.push_back(class_info);
            // class_data.push_back(class_info);
        }

        return true;
    }

    // virtual bool VisitFunctionDecl(FunctionDecl * func)
    // {
    //     numFunctions++;
    //     string funcName = func->getNameInfo().getName().getAsString();
    //     if (funcName == "do_math")
    //     {
    //         rewriter.ReplaceText(func->getLocation(), funcName.length(), "add5");
    //         errs() << "** Rewrote function def: " << funcName << "\n";
    //     }
    //     return true;
    // }

    // // this replaces the VisitStmt function above
    // virtual bool VisitReturnStmt(ReturnStmt * ret)
    // {
    //     rewriter.ReplaceText(ret->getBeginLoc(), 6, "val");
    //     errs() << "** Rewrote ReturnStmt\n";
    //     return true;
    // }
    // virtual bool VisitCallExpr(CallExpr * call)
    // {
    //     rewriter.ReplaceText(call->getBeginLoc(), 7, "add5"); // call->getBeginLoc() remplace :
    //     call->getLocStart() ? errs() << "** Rewrote function call\n"; return true;
    // }
};

// -------------------------------------

class MyASTConsumer : public ASTConsumer
{
  private:
    MyVisitor * visitor; // doesn't have to be private

  public:
    // override the constructor in order to pass CI
    explicit MyASTConsumer(CompilerInstance * CI) : visitor(new MyVisitor(CI)) // initialize the visitor
    {
    }

    // // override this to call our ExampleVisitor on each top-level Decl
    // virtual bool HandleTopLevelDecl(DeclGroupRef DG)
    // {
    //     // a DeclGroupRef may have multiple Decls, so we iterate through each one
    //     for (DeclGroupRef::iterator i = DG.begin(), e = DG.end(); i != e; i++)
    //     {
    //         Decl *D = *i;
    //         visitor->TraverseDecl(D); // recursively visit each AST node in Decl "D"
    //     }
    //     return true;
    // }

    virtual void HandleTranslationUnit(ASTContext & ast_context)
    {
        visitor->TraverseDecl(ast_context.getTranslationUnitDecl());
    }
};

// -------------------------------------

// cf clang-tidy check (sorting header): https://clang.llvm.org/extra/doxygen/IncludeOrderCheck_8cpp_source.html
class MyPPCallbacks : public PPCallbacks
{
    SourceManager * m_source_manager;

  public:
    explicit MyPPCallbacks(CompilerInstance * compiler_instance)
    {
        m_source_manager = &(compiler_instance->getSourceManager());
    }

    virtual void InclusionDirective(SourceLocation HashLoc, const Token & IncludeTok, StringRef FileName, bool IsAngled,
                                    CharSourceRange FilenameRange, const FileEntry * File, StringRef SearchPath,
                                    StringRef RelativePath, const clang::Module * Imported,
                                    SrcMgr::CharacteristicKind FileType)
    {
        if (m_source_manager->getFileID(HashLoc) == m_source_manager->getMainFileID())
        {
            HeaderInfo * header_info = new HeaderInfo();

            header_info->name     = FileName.str();
            header_info->isAngled = IsAngled;

            g_data[data_index].headers.push_back(header_info);

            // if (IsAngled)
            //     std::cout << "<" << FileName.str() << ">" << std::endl;
            // else
            //     std::cout << "\"" << FileName.str() << "\"" << std::endl;
        }
    }
};

// -------------------------------------

class MyFrontendAction : public ASTFrontendAction
{
  public:
    virtual std::unique_ptr<ASTConsumer> CreateASTConsumer(CompilerInstance & CI, StringRef file)
    {
        // processor callbacks: includes, pragma, ...
        CI.getPreprocessor().addPPCallbacks(make_unique<MyPPCallbacks>(&CI));

        // add file to data
        // FileID main_file_id  = CI.getSourceManager().getMainFileID();
        g_data[data_index] = FileInfo();

        std::string main_file_name;
        std::string main_file_dir_path;

        split_path(file.str(), main_file_dir_path, main_file_name);

        g_data[data_index].main_file_name     = main_file_name;
        g_data[data_index].main_file_dir_path = main_file_dir_path;

        // std::cout << "file_id: " << g_data[main_file_id].main_file_id.getHashValue() << std::endl;
        // std::cout << "file_name: " << g_data[main_file_id].main_file_name << std::endl;
        // std::cout << "file_dir: " << g_data[main_file_id].main_file_dir_path << std::endl;

        return make_unique<MyASTConsumer>(&CI); // pass CI pointer to ASTConsumer
    }

    virtual void EndSourceFileAction()
    {
        data_index++;
    }
};

// -------------------------------------

std::string CreateIncludeGuardName(std::string class_type)
{
    // class_name format namespace::type
    std::string              out;
    std::vector<std::string> type_split;
    std::string              delimiter = "::";

    size_t      pos = 0;
    std::string token;
    while ((pos = class_type.find(delimiter)) != std::string::npos)
    {
        token = class_type.substr(0, pos);
        type_split.push_back(token);
        class_type.erase(0, pos + delimiter.length());

        out += token + "_";
    }
    type_split.push_back(class_type);
    out += class_type;

    std::transform(out.begin(), out.end(), out.begin(), [](unsigned char c) { return std::toupper(c); });

    out += +"_GENERATED_HPP_";

    return out;
}

std::string CreateFileContent(const FileInfo & file_info)
{
    std::string out = "";

    for (auto class_info = file_info.classes.begin(); class_info != file_info.classes.end(); class_info++)
    {
        std::string class_type = (*class_info)->type;
        // std::cout << " Class type: " << class_type << std::endl;

        std::string member_final = "";

        for (int j = 0; j < (*class_info)->attributes.size(); j++)
        {
            std::string name = (*class_info)->attributes[j]->name;
            std::string type = (*class_info)->attributes[j]->full_name;

            // std::cout << " Attribut " << name << " of type " << type << std::endl;

            member_final += "        ";
            member_final += string_format(MemberTemplate, name.c_str(), type.c_str());

            if (j + 1 < (*class_info)->attributes.size())
                member_final += "\n";
        }

        std::string register_member_final =
            string_format(SpecializationTemplate, class_type.c_str(), member_final.c_str());
        std::string include_guard_name = CreateIncludeGuardName(class_type);

        out = string_format(FileTemplate, include_guard_name.c_str(), include_guard_name.c_str(),
                            register_member_final.c_str());
    }

    return out;
}

// -------------------------------------

int main(int argc, const char ** argv)
{
    // parse the command-line args passed to your code
    CommonOptionsParser op(argc, argv, MyToolCategory);

    // create a new Clang Tool instance (a LibTooling environment)
    ClangTool Tool(op.getCompilations(), op.getSourcePathList());

    std::string clang_path   = "-I./libs/llvm10/lib/clang/10.0.0/include/";
    std::string libcpp_path1 = "-I/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/";
    std::string libcpp_path2 = "-I/Library/Developer/CommandLineTools/usr/include/c++/v1/";

    Tool.appendArgumentsAdjuster(getInsertArgumentAdjuster(clang_path.c_str(), ArgumentInsertPosition::BEGIN));
    // order matters. Error might append otherwise (cmath.h)
    Tool.appendArgumentsAdjuster(getInsertArgumentAdjuster(libcpp_path1.c_str(), ArgumentInsertPosition::BEGIN));
    Tool.appendArgumentsAdjuster(getInsertArgumentAdjuster(libcpp_path2.c_str(), ArgumentInsertPosition::BEGIN));
    // force c++ (So that .h are not considered as C header)
    Tool.appendArgumentsAdjuster(getInsertArgumentAdjuster("-xc++", ArgumentInsertPosition::BEGIN));

    // Disable Diagnotic tool.
    Tool.setDiagnosticConsumer(new IgnoringDiagConsumer());

    // run the Clang Tool, creating a new FrontendAction (explained below)
    int result = Tool.run(newFrontendActionFactory<MyFrontendAction>().get());

    if (result != 0)
        llvm::errs() << "\n";

    // std::cout << " Class trouvé: " << class_data.size() << std::endl;

    // for (const auto & f : op.getSourcePathList())
    // {
    //     std::cout << f << std::endl;
    // }

    for (auto file_info = g_data.begin(); file_info != g_data.end(); file_info++)
    {
        // file_info->second.dump();

        // Find generated file path -------------------------
        std::string generated_file_path = GenInclPath.getValue();

        if (generated_file_path.empty())
        {
            // std::cout << "empty file path" << std::endl;
            generated_file_path = file_info->second.main_file_dir_path;
        }
        else
        {
            if (generated_file_path.back() != '/')
                generated_file_path += "/";
        }

        // std::cout << generated_file_path << std::endl;

        // Find generated file name -------------------------
        std::string generated_file_name = file_info->second.main_file_name;

        const size_t period_idx = generated_file_name.rfind('.');
        if (std::string::npos != period_idx)
        {
            generated_file_name.erase(period_idx);
        }

        generated_file_name += ".generated.hpp";

        // std::cout << generated_file_name << std::endl;

        // Create the generated file content -----------------
        std::string generated_content = CreateFileContent(file_info->second);

        // std::cout << generated_content << std::endl;

        // Create / Open generated file ----------------------
        std::ofstream myfile;

        myfile.open(generated_file_path + generated_file_name, std::ofstream::out | std::ofstream::trunc);
        myfile << generated_content;
        myfile.close();

        std::cout << "file generated at " << (generated_file_path + generated_file_name) << std::endl;
    }

    return result;
}