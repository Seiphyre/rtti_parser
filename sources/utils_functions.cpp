#include "utils_functions.hpp"

void split_path(const std::string & path, std::string & dir_path, std::string & file_name, std::string & file_ext)
{
    const size_t last_slash_pos = path.find_last_of("\\/");

    // Separate path and file name
    if (std::string::npos != last_slash_pos)
    {
        dir_path  = path.substr(0, last_slash_pos + 1);
        file_name = path.substr(last_slash_pos + 1);
    }
    else
    {
        dir_path  = "";
        file_name = path;
    }

    // Separate file name and extension
    const size_t period_pos = file_name.rfind('.');
    if (std::string::npos != period_pos)
    {
        file_ext = file_name.substr(period_pos);
        file_name.erase(period_pos);
    }
}

std::string FormatClassTypeToIncludeGuard(std::string class_type)
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

    return out;
}