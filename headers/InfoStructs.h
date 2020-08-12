#ifndef INFO_STRUCTS_H_
#define INFO_STRUCTS_H_

#include "clang/Basic/SourceLocation.h" // FileID

#include <iostream>
#include <string>
#include <vector>

struct ClassAttribute
{
    std::string name;
    std::string full_name;
};

struct ClassInfo
{
    std::string                   type;
    std::vector<ClassAttribute *> attributes;
    std::vector<std::string>      bases_type;
};

struct HeaderInfo
{
    std::string name;
    bool        isAngled;
};

struct FileInfo
{
    std::string main_file_name;
    std::string main_file_dir_path;

    std::vector<HeaderInfo *> headers;
    std::vector<ClassInfo *>  classes;

    void dump()
    {
        std::cout << "FILE DIR:  " << main_file_dir_path << std::endl;
        std::cout << "FILE NAME: " << main_file_name << std::endl;

        std::cout << "HEADERS:   " << std::endl;
        for (int i = 0; i < headers.size(); i++)
        {
            if (headers[i]->isAngled)
                std::cout << "    <" << headers[i]->name << ">" << std::endl;
            else
                std::cout << "    \"" << headers[i]->name << "\"" << std::endl;
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

extern int                     data_index;
extern std::map<int, FileInfo> g_data;

#endif /* INFO_STRUCTS_H_ */