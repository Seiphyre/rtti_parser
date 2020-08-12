#ifndef FILE_GEN_FUNCTIONS_H_
#define FILE_GEN_FUNCTIONS_H_

#include <string>
#include <vector>

#include "string_templates.hpp"
#include "info_structs.h"
#include "utils_functions.hpp"

std::string CreateIncludeGuardName(std::string class_type);

std::string CreateFileContent(const FileInfo & file_info);

#endif /* FILE_GEN_FUNCTIONS_H_ */