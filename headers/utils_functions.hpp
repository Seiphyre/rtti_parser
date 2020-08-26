#ifndef UTILS_HPP_
#define UTILS_HPP_

#include <iostream>
#include <string>
#include <vector>

// --------------------------------------------------------------------------------
// https://stackoverflow.com/questions/2342162/stdstring-formatting-like-sprintf

template <typename T> T string_format_type_security(const T & value)
{
    return value;
}

const char * string_format_type_security(const std::string & value);

// Segfault if format specifier don't match format specifier. e.i: string_format("%s", 23)
template <typename... Args> std::string string_format(const std::string & format, const Args &... args)
{
    size_t size =
        snprintf(nullptr, 0, format.c_str(), string_format_type_security(args)...) + 1; // Extra space for '\0'

    if (size <= 0)
    {
        std::cout << "[Warning] [string_format] Error while formatting." << std::endl;
        // throw std::runtime_error("Error during formatting.");
    }

    std::unique_ptr<char[]> buf(new char[size]);
    size = snprintf(buf.get(), size, format.c_str(), string_format_type_security(args)...);

    return std::string(buf.get(), buf.get() + size);
}

// --------------------------------------------------------------------------------

void split_path(const std::string & path, std::string & dir_path, std::string & file_name, std::string & ext);

// --------------------------------------------------------------------------------

std::string convert_to_header_guard_format(std::string str_in, const std::string & delimiter);

#endif /* UTILS_HPP_ */