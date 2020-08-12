#ifndef UTILS_HPP_
#define UTILS_HPP_

// #include <iostream>
// #include <memory>
#include <string>

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

#endif /* UTILS_HPP_ */