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
// int      numFunctions = 0;

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

// --------------------------------------
// https://stackoverflow.com/questions/2342162/stdstring-formatting-like-sprintf

template <typename... Args> std::string string_format(const std::string & format, Args... args)
{
    size_t size = snprintf(nullptr, 0, format.c_str(), args...) + 1; // Extra space for '\0'

    if (size <= 0)
    {
        std::cout << "[Warning] [string_format] Error while formatting." << std::endl;
        // throw std::runtime_error("Error during formatting.");
    }

    std::unique_ptr<char[]> buf(new char[size]);
    snprintf(buf.get(), size, format.c_str(), args...);

    return std::string(buf.get(), buf.get() + size - 1); // We don't want the '\0' inside
}

struct ClassAttribute
{
    std::string name;
    std::string type;
};

struct ClassInfo
{
    std::string                   file_name;
    std::string                   file_dir_path;
    std::string                   type;
    std::vector<ClassAttribute *> attributes;
};

std::vector<ClassInfo *> class_data;

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
            FullSourceLoc full_location = ast_context->getFullLoc(decl->getBeginLoc());

            // filename ----------------------------
            std::string file_name = full_location.getFileEntry()->getName().str();

            const size_t last_slash_idx = file_name.find_last_of("\\/");
            if (std::string::npos != last_slash_idx)
            {
                file_name.erase(0, last_slash_idx + 1);
            }
            // std::cout << file_name << std::endl;
            // end filename

            // directory -------------------------
            std::string file_dir_name = full_location.getFileEntry()->getDir()->getName().str();

            if (file_dir_name.back() != '/')
                file_dir_name += "/";

            // std::cout << file_dir_name << std::endl;
            // end directory

            // class infos -------------------------
            ClassInfo * class_info = new ClassInfo();

            class_info->type          = decl->getQualifiedNameAsString();
            class_info->file_name     = file_name;
            class_info->file_dir_path = file_dir_name;

            // std::cout << " Class type: " << decl->getQualifiedNameAsString() << std::endl;

            const RecordDecl::field_range fields = decl->fields();

            std::for_each(std::begin(fields), std::end(fields), [&class_info](const auto & f) {
                ClassAttribute * class_attribute = new ClassAttribute();

                class_attribute->name = f->getNameAsString();
                class_attribute->type = f->getQualifiedNameAsString();

                // std::cout << " Attribut " << attribut_name << " of type " << attribut_type << std::endl;
                class_info->attributes.push_back(class_attribute);
            });

            class_data.push_back(class_info);
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
    //     rewriter.ReplaceText(call->getBeginLoc(), 7, "add5"); // call->getBeginLoc() remplace : call->getLocStart() ?
    //     errs() << "** Rewrote function call\n";
    //     return true;
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

    // this replaces "HandleTopLevelDecl"
    // override this to call our ExampleVisitor on the entire source file
    virtual void HandleTranslationUnit(ASTContext & Context)
    {
        /* we can use ASTContext to get the TranslationUnitDecl, which is
       a single Decl that collectively represents the entire source file */
        visitor->TraverseDecl(Context.getTranslationUnitDecl());
    }
};

// -------------------------------------

class MyPPCallbacks : public PPCallbacks
{
  public:
    virtual void InclusionDirective(SourceLocation HashLoc, const Token & IncludeTok, StringRef FileName, bool IsAngled,
                                    CharSourceRange FilenameRange, const FileEntry * File, StringRef SearchPath,
                                    StringRef RelativePath, const clang::Module * Imported,
                                    SrcMgr::CharacteristicKind FileType)
    {
        std::cout << "-- BEGIN -- " << std::endl;

        std::cout << "FileName: " << FileName.str() << std::endl;

        std::cout << "-- END -- " << std::endl;
        // astContext->getSourceManager().isInMainFile(func->getLocStart())
    }

    virtual void FileChanged(SourceLocation Loc, FileChangeReason Reason, SrcMgr::CharacteristicKind FileType,
                             FileID PrevFID = FileID())
    {
        // std::cout << "-- BEGIN -- " << std::endl;
    }
};

// -------------------------------------

class MyFrontendAction : public ASTFrontendAction
{
  public:
    virtual std::unique_ptr<ASTConsumer> CreateASTConsumer(CompilerInstance & CI, StringRef file)
    {
        // CI.getPreprocessor().SetSuppressIncludeNotFoundError(true); // remove include errors
        // CI.getDiagnostics().setClient(new IgnoringDiagConsumer()); // remove diagnostic
        // CI.getPreprocessor().addPPCallbacks(make_unique<MyPPCallbacks>()); // processor callbacks: includes, pragma,
        // ...

        return make_unique<MyASTConsumer>(&CI); // pass CI pointer to ASTConsumer
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

std::string CreateFileContent(ClassInfo * class_info)
{
    std::string out;

    std::string class_type = class_info->type;
    // std::cout << " Class type: " << class_type << std::endl;

    std::string member_final = "";

    for (int j = 0; j < class_info->attributes.size(); j++)
    {
        std::string name = class_info->attributes[j]->name;
        std::string type = class_info->attributes[j]->type;

        // std::cout << " Attribut " << name << " of type " << type << std::endl;

        member_final += "        ";
        member_final += string_format(MemberTemplate, name.c_str(), type.c_str());

        if (j + 1 < class_info->attributes.size())
            member_final += "\n";
    }

    std::string register_member_final = string_format(SpecializationTemplate, class_type.c_str(), member_final.c_str());
    std::string include_guard_name    = CreateIncludeGuardName(class_type);

    out = string_format(FileTemplate, include_guard_name.c_str(), include_guard_name.c_str(),
                        register_member_final.c_str());

    return out;
}

// -------------------------------------

int main(int argc, const char ** argv)
{
    // parse the command-line args passed to your code
    CommonOptionsParser op(argc, argv, MyToolCategory);

    // create a new Clang Tool instance (a LibTooling environment)
    ClangTool Tool(op.getCompilations(), op.getSourcePathList());

    // force c++ (So that .h are not considered as C header)
    Tool.appendArgumentsAdjuster(getInsertArgumentAdjuster("-xc++", ArgumentInsertPosition::BEGIN));

    // Disable Diagnotic tool.
    Tool.setDiagnosticConsumer(new IgnoringDiagConsumer());

    // run the Clang Tool, creating a new FrontendAction (explained below)
    int result = Tool.run(newFrontendActionFactory<MyFrontendAction>().get());

    llvm::errs() << "\n";

    // std::cout << " Class trouvé: " << class_data.size() << std::endl;

    // for (const auto & f : op.getSourcePathList())
    // {
    //     std::cout << f << std::endl;
    // }

    for (int i = 0; i < class_data.size(); i++)
    {
        // Find generated file path -------------------------
        std::string generated_file_path = GenInclPath.getValue();

        if (generated_file_path.empty())
        {
            // std::cout << "empty file path" << std::endl;
            generated_file_path = class_data[i]->file_dir_path;
        }
        else
        {
            if (generated_file_path.back() != '/')
                generated_file_path += "/";
        }

        std::cout << generated_file_path << std::endl;

        // Find generated file name -------------------------
        std::string generated_file_name = class_data[i]->file_name;

        const size_t period_idx = generated_file_name.rfind('.');
        if (std::string::npos != period_idx)
        {
            generated_file_name.erase(period_idx);
        }

        generated_file_name += ".generated.hpp";

        std::cout << generated_file_name << std::endl;

        // Create the generated file content -----------------
        std::string generated_content = CreateFileContent(class_data[i]);

        std::cout << generated_content << std::endl;

        // Create / Open generated file ----------------------
        std::ofstream myfile;

        myfile.open(generated_file_path + generated_file_name, std::ofstream::out | std::ofstream::trunc);
        myfile << generated_content;
        myfile.close();
    }

    return result;
}