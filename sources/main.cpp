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
#include <string>
#include <vector>

#include "info_structs.h"
#include "utils_functions.hpp"
#include "string_templates.hpp"
#include "VDEReflGenASTFrontendAction.h"

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

int                     data_index = 0;
std::map<int, FileInfo> g_data;
// Rewriter rewriter;

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
            string_format(RegisterMemberTemplate, class_type.c_str(), member_final.c_str());
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