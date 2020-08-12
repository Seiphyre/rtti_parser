#include "utils_functions.hpp"

void split_path(const std::string & path, std::string & dir_path, std::string & file_name)
{
    const size_t last_slash_idx = path.find_last_of("\\/");

    if (std::string::npos != last_slash_idx)
    {
        dir_path  = path.substr(0, last_slash_idx + 1);
        file_name = path.substr(last_slash_idx + 1);
    }
    else
    {
        dir_path  = "";
        file_name = path;
    }
}