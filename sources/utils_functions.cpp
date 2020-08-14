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