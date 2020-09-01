#ifndef INFO_STRUCTS_H_
#define INFO_STRUCTS_H_

#include "clang/Basic/SourceLocation.h" // FileID, SourceLocation
#include "clang/AST/Type.h"             // Type

#include <string>
#include <vector>
#include <map>
#include <iostream>

struct ClassAttribute
{
    std::string name;
    std::string full_name;
};

struct ClassInfo
{
    std::string                   type_str;
    const clang::Type *           type;
    std::vector<ClassAttribute *> attributes;
    std::vector<std::string>      bases_type;

    bool               has_friend_register_member_func;
    clang::SourceRange class_brace_range;

    ClassInfo() : has_friend_register_member_func(false)
    {
    }
};

struct IncludeInfo
{
    std::string name;
    bool        isAngled;
};

struct RegisterMemberFuncInfo
{
    const clang::Type * templ_type;
    clang::SourceRange  range_loc;
};

struct FileInfo
{
    bool is_valid;
    bool has_include_meta;

    clang::SourceLocation end_of_file_loc;
    clang::SourceLocation start_of_file_loc;

    std::string file_name_without_ext;
    std::string file_dir_path;
    std::string file_ext;

    std::vector<IncludeInfo *>            includes;
    std::vector<ClassInfo *>              classes;
    std::vector<RegisterMemberFuncInfo *> register_member_funcs;

    FileInfo() : has_include_meta(false), is_valid(true)
    {
    }

    std::string get_file_name() const
    {
        return (file_name_without_ext + file_ext);
    }

    std::string get_file_path() const
    {
        return (file_dir_path + file_name_without_ext + file_ext);
    }

    void dump() const
    {
        std::cout << "FILE DIR:  " << file_dir_path << std::endl;
        std::cout << "FILE NAME: " << get_file_name() << std::endl;

        std::cout << "HEADERS:   " << std::endl;
        for (int i = 0; i < includes.size(); i++)
        {
            if (includes[i]->isAngled)
                std::cout << "    <" << includes[i]->name << ">" << std::endl;
            else
                std::cout << "    \"" << includes[i]->name << "\"" << std::endl;
        }

        std::cout << "CLASSES:   " << std::endl;
        for (int i = 0; i < classes.size(); i++)
        {
            std::cout << "    [" << i << "] " << std::endl;
            std::cout << "        TYPE:       " << classes[i]->type << std::endl;
            if (classes[i]->bases_type.size() > 0)
            {
                std::cout << "        BASES:      " << std::endl;
                for (int j = 0; j < classes[i]->bases_type.size(); j++)
                {
                    std::cout << "            [" << j << "] " << classes[i]->bases_type[j] << std::endl;
                }
            }
            else
                std::cout << "        BASES:      none" << std::endl;

            if (classes[i]->attributes.size() > 0)
            {
                std::cout << "        ATTRIBUTES: " << std::endl;
                for (int j = 0; j < classes[i]->attributes.size(); j++)
                {
                    std::cout << "            [" << j << "] " << std::endl;
                    std::cout << "                NAME:      " << classes[i]->attributes[j]->name << std::endl;
                    std::cout << "                FULL NAME: " << classes[i]->attributes[j]->full_name << std::endl;
                }
            }
            else
                std::cout << "        ATTRIBUTES: none" << std::endl;
        }
    }
};

// extern int                       g_data_index;
// extern std::map<int, FileInfo *> g_data;

#endif /* INFO_STRUCTS_H_ */