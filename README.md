# reflection_gen

C++ headers parser to add reflection to my custom game engine: VDEngine.

This tool is only working on OSX (Tested with Catalina only).

## Dependencies

- clang/llvm libraries. (for now, I included OSX precompiled project into this project)
- OS compilation settings ? (for now, Header search path relative to OSX are written in the code (path to c++ libs))
- Using OSX function to search path to the executable.

## Usage

reflection_gen \<headers\> -- -I\<optional_include_paths\>

## Behavior

The tool will parse individually each header file.

If the file contains **compilation errors**, the file is skipped.
If a class/struct is **templated or inherite from templated class**, this class is skipped.
If a class/struct contains **C-style arrays** member, this member is ignored. (alternative: std::array or typedef, i.e: "typedef int int5[5];")

Simple cases: (the user doesn't modify generated code)

- If the file does not contain any reflection information, those information will be writen in the file.
- If the file already contains all the reflection information, the meta::registerMember will be overwriten.

Other cases:

- If the file partially contains reflection information, missing information will be writen in the file.

  - However, if the include "meta.h" is missing, compilation error will occure and the file will be skipped.

- The user can move the position of each reflection information (include, friend func, template func) inside the file, but the new position must be valid.

  - when overwriting the meta::registerMember function, the function will stay at the ne position in the file.

- The user can remove the #ifndef surronding reflection information (include, and template function), but it should be done wisely.

## Todo

- [] Do not parse a file if there is no change in this file. (1)
- [] Write generated code inside an other file. (2)
- [] Create a verbose system (Warnings, Errors, Logs, Debug).
- [] Remove the setup function in main. (We could setup compiler instance instead)
- [] Stop the creation of the AST when an error occured. (to improve speed)
- [] Windows / Linux support
- [] Create installation instructions.
- [] Template classes/structs support (3)
- [] Do not register members when there are no members
- [x] Do not write meta.h when there are no classes to register
- [] C-style array support

Notebook:

(1)

- Compare object (.o) / header (.h/.hpp) modification date. (But What if there is no object file ?)
- Compare binary (of the engine) / header modification date.
- Write in a file every time we compile. We can then read and compare modification time and last compile time.

(2)

- The generated file need to include the original header. (forward decl won't work because there are references to the class/struct members)
- The generated file should be included in the .cpp file. (Including it in the .h/.hpp file won't work because of circular dependency)
- The generated file should be created in the directory of the original header (.h/hpp). (So that we know the path to the header and we can include the original header)
  - OR We should know all includes directory, so we can easily find the header

(3)

- Create a new template of the function "template<Class> auto meta::registerMembers()" => "template <template<Class> Class> auto meta::registerMembers()"
  (https://stackoverflow.com/questions/213761/what-are-some-uses-of-template-template-parameters)
- In derivated class, add specifier to class type name, i.e: VDEngine::)
