#include "utils_functions.hpp"

const char * string_format_type_security(const std::string & value)
{
    return value.c_str();
}

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

std::string convert_to_header_guard_format(std::string str_in, const std::string & delimiter)
{
    std::string str_out;
    std::string sub_str;
    size_t      pos = 0;

    // Replace all "delimiter" by "_"
    while ((pos = str_in.find(delimiter)) != std::string::npos)
    {
        sub_str = str_in.substr(0, pos);

        str_out += sub_str + "_";
        str_in.erase(0, pos + delimiter.length());
    }
    str_out += str_in;

    // Transform the result into upper case
    std::transform(str_out.begin(), str_out.end(), str_out.begin(), [](unsigned char c) { return std::toupper(c); });

    return str_out;
}