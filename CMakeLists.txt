# Thanks to this web page for the template for this cmake file
## https://heejune.me/2016/08/17/build-your-own-clang-example-outside-of-the-llvm-source-tree/
# Invoke cmake with -DCMAKE_PREFIX_PATH=/path/to/llvm/CMAKE_ROOT

cmake_minimum_required (VERSION 3.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project (clang-libtool) 						# Sets the name of the project, and stores it in the variable PROJECT_NAME.


############################################################
#   base
############################################################

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
set(CMAKE_SUPPRESS_REGENERATION TRUE)

############################################################
#   setting Project informations
############################################################

set(LIBRARY_LIST clangFrontend  clangSerialization clangDriver clangTooling clangParse clangSema clangAnalysis clangRewriteFrontend clangEdit clangAST clangLex clangBasic)
#set(COMPONENT_LIST core mc asmparser bitreader support option)

############################################################
#   generate makefiles
############################################################

find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS}) # Add the given directories to those the compiler uses to search for include files. Relative paths are interpreted as relative to the current source directory.

if(LLVM_BUILD_MAIN_SRC_DIR)
  include_directories(${LLVM_BUILD_MAIN_SRC_DIR}/tools/clang/include)
  include_directories(${LLVM_BUILD_BINARY_DIR}/tools/clang/include)
endif()

link_directories(${LLVM_LIBRARY_DIRS}) #
add_definitions(${LLVM_DEFINITIONS}) # inside LLVMConfig.cmake

add_definitions(
-D__STDC_LIMIT_MACROS # stackoverflow.com/questions/986426/what-do-stdc-limit-macros-and-stdc-constant-macros-mean
-D__STDC_CONSTANT_MACROS
)

add_executable(${PROJECT_NAME} main.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wno-unused-parameter -fno-strict-aliasing -fno-exceptions -fno-rtti")

execute_process(COMMAND llvm-10.0.0/bin/llvm-config --components OUTPUT_VARIABLE COMPONENT_LIST)

# Find the libraries that correspond to the LLVM components
# that we wish to use
llvm_map_components_to_libnames(llvm_libs ${COMPONENT_LIST})

# Link LLVM libraries
target_link_libraries(${PROJECT_NAME} ${LIBS})
target_link_libraries(${PROJECT_NAME} ${LIBRARY_LIST})


message(STATUS "LIBS = ${LIBS}")
message(STATUS "llvm_libs = ${llvm_libs}")
message(STATUS "LLVM_BUILD_MAIN_SRC_DIR = ${LLVM_BUILD_MAIN_SRC_DIR}")
message(STATUS "LLVM_BUILD_BINARY_DIR = ${LLVM_BUILD_BINARY_DIR}")
message(STATUS "LLVM_INCLUDE_DIRS = ${LLVM_INCLUDE_DIRS}")
message(STATUS "LLVM_LIBRARY_DIRS = ${LLVM_LIBRARY_DIRS}")
message(STATUS "User selected librarys = ${LIBRARY_LIST}")
message(STATUS "User selected components = ${COMPONENT_LIST}")