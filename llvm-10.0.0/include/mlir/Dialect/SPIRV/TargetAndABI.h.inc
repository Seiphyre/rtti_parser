/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Struct Utility Declarations                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace spirv {

// dictionary of named attribute values
class EntryPointABIAttr : public mlir::DictionaryAttr {
public:
  using DictionaryAttr::DictionaryAttr;
  static bool classof(mlir::Attribute attr);
  static EntryPointABIAttr get(
      DenseIntElementsAttr local_size,
      mlir::MLIRContext* context);

  DenseIntElementsAttr local_size() const;
};

} // namespace spirv
namespace spirv {

// dictionary of named attribute values
class InterfaceVarABIAttr : public mlir::DictionaryAttr {
public:
  using DictionaryAttr::DictionaryAttr;
  static bool classof(mlir::Attribute attr);
  static InterfaceVarABIAttr get(
      IntegerAttr descriptor_set,
      IntegerAttr binding,
      IntegerAttr storage_class,
      mlir::MLIRContext* context);

  IntegerAttr descriptor_set() const;
  IntegerAttr binding() const;
  IntegerAttr storage_class() const;
};

} // namespace spirv
namespace spirv {

// dictionary of named attribute values
class TargetEnvAttr : public mlir::DictionaryAttr {
public:
  using DictionaryAttr::DictionaryAttr;
  static bool classof(mlir::Attribute attr);
  static TargetEnvAttr get(
      IntegerAttr version,
      ArrayAttr extensions,
      ArrayAttr capabilities,
      mlir::MLIRContext* context);

  IntegerAttr version() const;
  ArrayAttr extensions() const;
  ArrayAttr capabilities() const;
};

} // namespace spirv
