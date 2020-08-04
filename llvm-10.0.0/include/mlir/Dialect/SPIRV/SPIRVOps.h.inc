/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class AccessChainOp;
class AddressOfOp;
class AtomicAndOp;
class AtomicCompareExchangeWeakOp;
class AtomicIAddOp;
class AtomicIDecrementOp;
class AtomicIIncrementOp;
class AtomicISubOp;
class AtomicOrOp;
class AtomicSMaxOp;
class AtomicSMinOp;
class AtomicUMaxOp;
class AtomicUMinOp;
class AtomicXorOp;
class BitCountOp;
class BitFieldInsertOp;
class BitFieldSExtractOp;
class BitFieldUExtractOp;
class BitReverseOp;
class BitcastOp;
class BitwiseAndOp;
class BitwiseOrOp;
class BitwiseXorOp;
class BranchConditionalOp;
class BranchOp;
class CompositeConstructOp;
class CompositeExtractOp;
class CompositeInsertOp;
class ConstantOp;
class ControlBarrierOp;
class ConvertFToSOp;
class ConvertFToUOp;
class ConvertSToFOp;
class ConvertUToFOp;
class EntryPointOp;
class ExecutionModeOp;
class FAddOp;
class FConvertOp;
class FDivOp;
class FModOp;
class FMulOp;
class FNegateOp;
class FOrdEqualOp;
class FOrdGreaterThanEqualOp;
class FOrdGreaterThanOp;
class FOrdLessThanEqualOp;
class FOrdLessThanOp;
class FOrdNotEqualOp;
class FRemOp;
class FSubOp;
class FUnordEqualOp;
class FUnordGreaterThanEqualOp;
class FUnordGreaterThanOp;
class FUnordLessThanEqualOp;
class FUnordLessThanOp;
class FUnordNotEqualOp;
class FunctionCallOp;
class GLSLCeilOp;
class GLSLCosOp;
class GLSLExpOp;
class GLSLFAbsOp;
class GLSLFMaxOp;
class GLSLFMinOp;
class GLSLFSignOp;
class GLSLFloorOp;
class GLSLInverseSqrtOp;
class GLSLLogOp;
class GLSLSAbsOp;
class GLSLSMaxOp;
class GLSLSMinOp;
class GLSLSSignOp;
class GLSLSqrtOp;
class GLSLTanhOp;
class GlobalVariableOp;
class GroupNonUniformBallotOp;
class IAddOp;
class IEqualOp;
class IMulOp;
class INotEqualOp;
class ISubOp;
class LoadOp;
class LogicalAndOp;
class LogicalEqualOp;
class LogicalNotEqualOp;
class LogicalNotOp;
class LogicalOrOp;
class LoopOp;
class MemoryBarrierOp;
class MergeOp;
class ModuleEndOp;
class ModuleOp;
class NotOp;
class ReferenceOfOp;
class ReturnOp;
class ReturnValueOp;
class SConvertOp;
class SDivOp;
class SGreaterThanEqualOp;
class SGreaterThanOp;
class SLessThanEqualOp;
class SLessThanOp;
class SModOp;
class SRemOp;
class SelectOp;
class SelectionOp;
class ShiftLeftLogicalOp;
class ShiftRightArithmeticOp;
class ShiftRightLogicalOp;
class SpecConstantOp;
class StoreOp;
class SubgroupBallotKHROp;
class UConvertOp;
class UDivOp;
class UGreaterThanEqualOp;
class UGreaterThanOp;
class ULessThanEqualOp;
class ULessThanOp;
class UModOp;
class UndefOp;
class UnreachableOp;
class VariableOp;

//===----------------------------------------------------------------------===//
// spirv::AccessChainOp declarations
//===----------------------------------------------------------------------===//

class AccessChainOpOperandAdaptor {
public:
  AccessChainOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  base_ptr();
  ArrayRef<Value> indices();

private:
  ArrayRef<Value> tblgen_operands;
};
class AccessChainOp : public Op<AccessChainOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::AtLeastNOperands<1>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AccessChainOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  base_ptr();
  Operation::operand_range indices();
  Operation::result_range getODSResults(unsigned index);
  Value  component_ptr();
  static void build(Builder *builder, OperationState &state,
                              Value basePtr, ValueRange indices);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type component_ptr, Value base_ptr, ValueRange indices);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value base_ptr, ValueRange indices);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AddressOfOp declarations
//===----------------------------------------------------------------------===//

class AddressOfOpOperandAdaptor {
public:
  AddressOfOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class AddressOfOp : public Op<AddressOfOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = AddressOfOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  pointer();
  FlatSymbolRefAttr variableAttr();
  StringRef variable();
  static void build(Builder *builder, OperationState &state,
                              spirv::GlobalVariableOp var);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type pointer, FlatSymbolRefAttr variable);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, FlatSymbolRefAttr variable);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type pointer, StringRef variable);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef variable);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicAndOp declarations
//===----------------------------------------------------------------------===//

class AtomicAndOpOperandAdaptor {
public:
  AtomicAndOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  pointer();
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class AtomicAndOp : public Op<AtomicAndOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AtomicAndOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  pointer();
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicCompareExchangeWeakOp declarations
//===----------------------------------------------------------------------===//

class AtomicCompareExchangeWeakOpOperandAdaptor {
public:
  AtomicCompareExchangeWeakOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  pointer();
  Value  value();
  Value  comparator();

private:
  ArrayRef<Value> tblgen_operands;
};
class AtomicCompareExchangeWeakOp : public Op<AtomicCompareExchangeWeakOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AtomicCompareExchangeWeakOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  pointer();
  Value  value();
  Value  comparator();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr equal_semanticsAttr();
  ::mlir::spirv::MemorySemantics equal_semantics();
  IntegerAttr unequal_semanticsAttr();
  ::mlir::spirv::MemorySemantics unequal_semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr equal_semantics, IntegerAttr unequal_semantics, Value value, Value comparator);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr equal_semantics, IntegerAttr unequal_semantics, Value value, Value comparator);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics equal_semantics, ::mlir::spirv::MemorySemantics unequal_semantics, Value value, Value comparator);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics equal_semantics, ::mlir::spirv::MemorySemantics unequal_semantics, Value value, Value comparator);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicIAddOp declarations
//===----------------------------------------------------------------------===//

class AtomicIAddOpOperandAdaptor {
public:
  AtomicIAddOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  pointer();
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class AtomicIAddOp : public Op<AtomicIAddOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AtomicIAddOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  pointer();
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicIDecrementOp declarations
//===----------------------------------------------------------------------===//

class AtomicIDecrementOpOperandAdaptor {
public:
  AtomicIDecrementOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  pointer();

private:
  ArrayRef<Value> tblgen_operands;
};
class AtomicIDecrementOp : public Op<AtomicIDecrementOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = AtomicIDecrementOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  pointer();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicIIncrementOp declarations
//===----------------------------------------------------------------------===//

class AtomicIIncrementOpOperandAdaptor {
public:
  AtomicIIncrementOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  pointer();

private:
  ArrayRef<Value> tblgen_operands;
};
class AtomicIIncrementOp : public Op<AtomicIIncrementOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = AtomicIIncrementOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  pointer();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicISubOp declarations
//===----------------------------------------------------------------------===//

class AtomicISubOpOperandAdaptor {
public:
  AtomicISubOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  pointer();
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class AtomicISubOp : public Op<AtomicISubOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AtomicISubOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  pointer();
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicOrOp declarations
//===----------------------------------------------------------------------===//

class AtomicOrOpOperandAdaptor {
public:
  AtomicOrOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  pointer();
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class AtomicOrOp : public Op<AtomicOrOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AtomicOrOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  pointer();
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicSMaxOp declarations
//===----------------------------------------------------------------------===//

class AtomicSMaxOpOperandAdaptor {
public:
  AtomicSMaxOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  pointer();
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class AtomicSMaxOp : public Op<AtomicSMaxOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AtomicSMaxOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  pointer();
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicSMinOp declarations
//===----------------------------------------------------------------------===//

class AtomicSMinOpOperandAdaptor {
public:
  AtomicSMinOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  pointer();
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class AtomicSMinOp : public Op<AtomicSMinOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AtomicSMinOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  pointer();
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicUMaxOp declarations
//===----------------------------------------------------------------------===//

class AtomicUMaxOpOperandAdaptor {
public:
  AtomicUMaxOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  pointer();
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class AtomicUMaxOp : public Op<AtomicUMaxOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AtomicUMaxOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  pointer();
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicUMinOp declarations
//===----------------------------------------------------------------------===//

class AtomicUMinOpOperandAdaptor {
public:
  AtomicUMinOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  pointer();
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class AtomicUMinOp : public Op<AtomicUMinOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AtomicUMinOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  pointer();
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicXorOp declarations
//===----------------------------------------------------------------------===//

class AtomicXorOpOperandAdaptor {
public:
  AtomicXorOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  pointer();
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class AtomicXorOp : public Op<AtomicXorOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AtomicXorOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  pointer();
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::BitCountOp declarations
//===----------------------------------------------------------------------===//

class BitCountOpOperandAdaptor {
public:
  BitCountOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class BitCountOp : public Op<BitCountOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = BitCountOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::BitFieldInsertOp declarations
//===----------------------------------------------------------------------===//

class BitFieldInsertOpOperandAdaptor {
public:
  BitFieldInsertOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  base();
  Value  insert();
  Value  offset();
  Value  count();

private:
  ArrayRef<Value> tblgen_operands;
};
class BitFieldInsertOp : public Op<BitFieldInsertOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<4>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = BitFieldInsertOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  base();
  Value  insert();
  Value  offset();
  Value  count();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value base, Value insert, Value offset, Value count);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value base, Value insert, Value offset, Value count);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::BitFieldSExtractOp declarations
//===----------------------------------------------------------------------===//

class BitFieldSExtractOpOperandAdaptor {
public:
  BitFieldSExtractOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  base();
  Value  offset();
  Value  count();

private:
  ArrayRef<Value> tblgen_operands;
};
class BitFieldSExtractOp : public Op<BitFieldSExtractOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = BitFieldSExtractOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  base();
  Value  offset();
  Value  count();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value base, Value offset, Value count);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value base, Value offset, Value count);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::BitFieldUExtractOp declarations
//===----------------------------------------------------------------------===//

class BitFieldUExtractOpOperandAdaptor {
public:
  BitFieldUExtractOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  base();
  Value  offset();
  Value  count();

private:
  ArrayRef<Value> tblgen_operands;
};
class BitFieldUExtractOp : public Op<BitFieldUExtractOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = BitFieldUExtractOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  base();
  Value  offset();
  Value  count();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value base, Value offset, Value count);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value base, Value offset, Value count);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::BitReverseOp declarations
//===----------------------------------------------------------------------===//

class BitReverseOpOperandAdaptor {
public:
  BitReverseOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class BitReverseOp : public Op<BitReverseOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = BitReverseOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::BitcastOp declarations
//===----------------------------------------------------------------------===//

class BitcastOpOperandAdaptor {
public:
  BitcastOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class BitcastOp : public Op<BitcastOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = BitcastOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::BitwiseAndOp declarations
//===----------------------------------------------------------------------===//

class BitwiseAndOpOperandAdaptor {
public:
  BitwiseAndOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class BitwiseAndOp : public Op<BitwiseAndOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = BitwiseAndOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::BitwiseOrOp declarations
//===----------------------------------------------------------------------===//

class BitwiseOrOpOperandAdaptor {
public:
  BitwiseOrOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class BitwiseOrOp : public Op<BitwiseOrOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = BitwiseOrOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::BitwiseXorOp declarations
//===----------------------------------------------------------------------===//

class BitwiseXorOpOperandAdaptor {
public:
  BitwiseXorOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class BitwiseXorOp : public Op<BitwiseXorOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = BitwiseXorOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::BranchConditionalOp declarations
//===----------------------------------------------------------------------===//

class BranchConditionalOpOperandAdaptor {
public:
  BranchConditionalOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  condition();
  ArrayRef<Value> branch_arguments();

private:
  ArrayRef<Value> tblgen_operands;
};
class BranchConditionalOp : public Op<BranchConditionalOp, OpTrait::ZeroResult, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::AtLeastNOperands<1>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = BranchConditionalOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  condition();
  Operation::operand_range branch_arguments();
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr branch_weightsAttr();
  Optional< ArrayAttr > branch_weights();
  static void build(Builder *builder, OperationState &state, Value condition, Block *trueBlock, ValueRange trueArguments, Block *falseBlock, ValueRange falseArguments, Optional<std::pair<uint32_t, uint32_t>> weights = {});
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();

    /// Branch indices into the successor list.
    enum { kTrueIndex = 0, kFalseIndex = 1 };

    /// Returns the target block for the true branch.
    Block *getTrueBlock() { return getOperation()->getSuccessor(kTrueIndex); }

    /// Returns the target block for the false branch.
    Block *getFalseBlock() { return getOperation()->getSuccessor(kFalseIndex); }

    /// Returns the number of arguments to the true target block.
    unsigned getNumTrueBlockArguments() {
      return getNumSuccessorOperands(kTrueIndex);
    }

    /// Returns the number of arguments to the false target block.
    unsigned getNumFalseBlockArguments() {
      return getNumSuccessorOperands(kFalseIndex);
    }

    // Iterator and range support for true target block arguments.
    operand_iterator true_block_argument_begin() {
      return operand_begin() + getTrueBlockArgumentIndex();
    }
    operand_iterator true_block_argument_end() {
      return true_block_argument_begin() + getNumTrueBlockArguments();
    }
    operand_range getTrueBlockArguments() {
      return {true_block_argument_begin(), true_block_argument_end()};
    }

    // Iterator and range support for false target block arguments.
    operand_iterator false_block_argument_begin() {
      return true_block_argument_end();
    }
    operand_iterator false_block_argument_end() {
      return false_block_argument_begin() + getNumFalseBlockArguments();
    }
    operand_range getFalseBlockArguments() {
      return {false_block_argument_begin(), false_block_argument_end()};
    }

  private:
    /// Gets the index of the first true block argument in the operand list.
    unsigned getTrueBlockArgumentIndex() {
      return 1; // Omit the first argument, which is the condition.
    }

    /// Gets the index of the first false block argument in the operand list.
    unsigned getFalseBlockArgumentIndex() {
      return getTrueBlockArgumentIndex() + getNumTrueBlockArguments();
    }
  
};

//===----------------------------------------------------------------------===//
// spirv::BranchOp declarations
//===----------------------------------------------------------------------===//

class BranchOpOperandAdaptor {
public:
  BranchOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> block_arguments();

private:
  ArrayRef<Value> tblgen_operands;
};
class BranchOp : public Op<BranchOp, OpTrait::ZeroResult, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = BranchOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range block_arguments();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *, OperationState &state, Block *successor, ValueRange arguments = {});
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();

    /// Returns the branch target block.
    Block *getTarget() { return getOperation()->getSuccessor(0); }

    /// Returns the block arguments.
    operand_range getBlockArguments() {
      return getOperation()->getSuccessorOperands(0);
    }
  
};

//===----------------------------------------------------------------------===//
// spirv::CompositeConstructOp declarations
//===----------------------------------------------------------------------===//

class CompositeConstructOpOperandAdaptor {
public:
  CompositeConstructOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> constituents();

private:
  ArrayRef<Value> tblgen_operands;
};
class CompositeConstructOp : public Op<CompositeConstructOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = CompositeConstructOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range constituents();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, ValueRange constituents);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange constituents);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::CompositeExtractOp declarations
//===----------------------------------------------------------------------===//

class CompositeExtractOpOperandAdaptor {
public:
  CompositeExtractOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  composite();

private:
  ArrayRef<Value> tblgen_operands;
};
class CompositeExtractOp : public Op<CompositeExtractOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = CompositeExtractOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  composite();
  Operation::result_range getODSResults(unsigned index);
  Value  component();
  ArrayAttr indicesAttr();
  ArrayAttr indices();
  static void build(Builder *builder, OperationState &state,
                Value composite, ArrayRef<int32_t> indices);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type component, Value composite, ArrayAttr indices);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value composite, ArrayAttr indices);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::CompositeInsertOp declarations
//===----------------------------------------------------------------------===//

class CompositeInsertOpOperandAdaptor {
public:
  CompositeInsertOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  object();
  Value  composite();

private:
  ArrayRef<Value> tblgen_operands;
};
class CompositeInsertOp : public Op<CompositeInsertOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = CompositeInsertOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  object();
  Value  composite();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  ArrayAttr indicesAttr();
  ArrayAttr indices();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value object, Value composite, ArrayAttr indices);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value object, Value composite, ArrayAttr indices);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ConstantOp declarations
//===----------------------------------------------------------------------===//

class ConstantOpOperandAdaptor {
public:
  ConstantOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ConstantOp : public Op<ConstantOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ConstantOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  constant();
  Attribute valueAttr();
  Attribute value();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type constant, Attribute value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Attribute value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();

    // Returns true if a constant can be built for the given `type`.
    static bool isBuildableWith(Type type);

    // Creates a constant zero/one of the given `type` at the current insertion
    // point of `builder` and returns it.
    static spirv::ConstantOp getZero(Type type, Location loc,
                                     OpBuilder *builder);
    static spirv::ConstantOp getOne(Type type, Location loc,
                                    OpBuilder *builder);
  
};

//===----------------------------------------------------------------------===//
// spirv::ControlBarrierOp declarations
//===----------------------------------------------------------------------===//

class ControlBarrierOpOperandAdaptor {
public:
  ControlBarrierOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ControlBarrierOp : public Op<ControlBarrierOp, OpTrait::ZeroResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ControlBarrierOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr memory_semanticsAttr();
  ::mlir::spirv::MemorySemantics memory_semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, IntegerAttr execution_scope, IntegerAttr memory_scope, IntegerAttr memory_semantics);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, IntegerAttr memory_scope, IntegerAttr memory_semantics);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ConvertFToSOp declarations
//===----------------------------------------------------------------------===//

class ConvertFToSOpOperandAdaptor {
public:
  ConvertFToSOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class ConvertFToSOp : public Op<ConvertFToSOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ConvertFToSOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ConvertFToUOp declarations
//===----------------------------------------------------------------------===//

class ConvertFToUOpOperandAdaptor {
public:
  ConvertFToUOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class ConvertFToUOp : public Op<ConvertFToUOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ConvertFToUOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ConvertSToFOp declarations
//===----------------------------------------------------------------------===//

class ConvertSToFOpOperandAdaptor {
public:
  ConvertSToFOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class ConvertSToFOp : public Op<ConvertSToFOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ConvertSToFOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ConvertUToFOp declarations
//===----------------------------------------------------------------------===//

class ConvertUToFOpOperandAdaptor {
public:
  ConvertUToFOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class ConvertUToFOp : public Op<ConvertUToFOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ConvertUToFOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::EntryPointOp declarations
//===----------------------------------------------------------------------===//

class EntryPointOpOperandAdaptor {
public:
  EntryPointOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class EntryPointOp : public Op<EntryPointOp, OpTrait::ZeroResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = EntryPointOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr execution_modelAttr();
  ::mlir::spirv::ExecutionModel execution_model();
  FlatSymbolRefAttr fnAttr();
  StringRef fn();
  ArrayAttr interfaceAttr();
  ArrayAttr interface();
  static void build(Builder *builder, OperationState &state,
                              spirv::ExecutionModel executionModel,
                              FuncOp function,
                              ArrayRef<Attribute> interfaceVars);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, IntegerAttr execution_model, FlatSymbolRefAttr fn, ArrayAttr interface);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr execution_model, FlatSymbolRefAttr fn, ArrayAttr interface);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ::mlir::spirv::ExecutionModel execution_model, StringRef fn, ArrayAttr interface);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::ExecutionModel execution_model, StringRef fn, ArrayAttr interface);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ExecutionModeOp declarations
//===----------------------------------------------------------------------===//

class ExecutionModeOpOperandAdaptor {
public:
  ExecutionModeOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ExecutionModeOp : public Op<ExecutionModeOp, OpTrait::ZeroResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ExecutionModeOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  FlatSymbolRefAttr fnAttr();
  StringRef fn();
  IntegerAttr execution_modeAttr();
  ::mlir::spirv::ExecutionMode execution_mode();
  ArrayAttr valuesAttr();
  ArrayAttr values();
  static void build(Builder *builder, OperationState &state,
                              FuncOp function,
                              spirv::ExecutionMode executionMode,
                              ArrayRef<int32_t> params);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, FlatSymbolRefAttr fn, IntegerAttr execution_mode, ArrayAttr values);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, FlatSymbolRefAttr fn, IntegerAttr execution_mode, ArrayAttr values);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, StringRef fn, ::mlir::spirv::ExecutionMode execution_mode, ArrayAttr values);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef fn, ::mlir::spirv::ExecutionMode execution_mode, ArrayAttr values);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FAddOp declarations
//===----------------------------------------------------------------------===//

class FAddOpOperandAdaptor {
public:
  FAddOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FAddOp : public Op<FAddOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FAddOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FConvertOp declarations
//===----------------------------------------------------------------------===//

class FConvertOpOperandAdaptor {
public:
  FConvertOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class FConvertOp : public Op<FConvertOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = FConvertOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FDivOp declarations
//===----------------------------------------------------------------------===//

class FDivOpOperandAdaptor {
public:
  FDivOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FDivOp : public Op<FDivOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FDivOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FModOp declarations
//===----------------------------------------------------------------------===//

class FModOpOperandAdaptor {
public:
  FModOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FModOp : public Op<FModOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FModOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FMulOp declarations
//===----------------------------------------------------------------------===//

class FMulOpOperandAdaptor {
public:
  FMulOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FMulOp : public Op<FMulOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FMulOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FNegateOp declarations
//===----------------------------------------------------------------------===//

class FNegateOpOperandAdaptor {
public:
  FNegateOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class FNegateOp : public Op<FNegateOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = FNegateOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FOrdEqualOp declarations
//===----------------------------------------------------------------------===//

class FOrdEqualOpOperandAdaptor {
public:
  FOrdEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FOrdEqualOp : public Op<FOrdEqualOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FOrdEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FOrdGreaterThanEqualOp declarations
//===----------------------------------------------------------------------===//

class FOrdGreaterThanEqualOpOperandAdaptor {
public:
  FOrdGreaterThanEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FOrdGreaterThanEqualOp : public Op<FOrdGreaterThanEqualOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FOrdGreaterThanEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FOrdGreaterThanOp declarations
//===----------------------------------------------------------------------===//

class FOrdGreaterThanOpOperandAdaptor {
public:
  FOrdGreaterThanOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FOrdGreaterThanOp : public Op<FOrdGreaterThanOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FOrdGreaterThanOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FOrdLessThanEqualOp declarations
//===----------------------------------------------------------------------===//

class FOrdLessThanEqualOpOperandAdaptor {
public:
  FOrdLessThanEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FOrdLessThanEqualOp : public Op<FOrdLessThanEqualOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FOrdLessThanEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FOrdLessThanOp declarations
//===----------------------------------------------------------------------===//

class FOrdLessThanOpOperandAdaptor {
public:
  FOrdLessThanOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FOrdLessThanOp : public Op<FOrdLessThanOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FOrdLessThanOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FOrdNotEqualOp declarations
//===----------------------------------------------------------------------===//

class FOrdNotEqualOpOperandAdaptor {
public:
  FOrdNotEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FOrdNotEqualOp : public Op<FOrdNotEqualOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FOrdNotEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FRemOp declarations
//===----------------------------------------------------------------------===//

class FRemOpOperandAdaptor {
public:
  FRemOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FRemOp : public Op<FRemOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FRemOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FSubOp declarations
//===----------------------------------------------------------------------===//

class FSubOpOperandAdaptor {
public:
  FSubOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FSubOp : public Op<FSubOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FSubOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FUnordEqualOp declarations
//===----------------------------------------------------------------------===//

class FUnordEqualOpOperandAdaptor {
public:
  FUnordEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FUnordEqualOp : public Op<FUnordEqualOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FUnordEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FUnordGreaterThanEqualOp declarations
//===----------------------------------------------------------------------===//

class FUnordGreaterThanEqualOpOperandAdaptor {
public:
  FUnordGreaterThanEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FUnordGreaterThanEqualOp : public Op<FUnordGreaterThanEqualOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FUnordGreaterThanEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FUnordGreaterThanOp declarations
//===----------------------------------------------------------------------===//

class FUnordGreaterThanOpOperandAdaptor {
public:
  FUnordGreaterThanOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FUnordGreaterThanOp : public Op<FUnordGreaterThanOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FUnordGreaterThanOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FUnordLessThanEqualOp declarations
//===----------------------------------------------------------------------===//

class FUnordLessThanEqualOpOperandAdaptor {
public:
  FUnordLessThanEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FUnordLessThanEqualOp : public Op<FUnordLessThanEqualOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FUnordLessThanEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FUnordLessThanOp declarations
//===----------------------------------------------------------------------===//

class FUnordLessThanOpOperandAdaptor {
public:
  FUnordLessThanOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FUnordLessThanOp : public Op<FUnordLessThanOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FUnordLessThanOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FUnordNotEqualOp declarations
//===----------------------------------------------------------------------===//

class FUnordNotEqualOpOperandAdaptor {
public:
  FUnordNotEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class FUnordNotEqualOp : public Op<FUnordNotEqualOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FUnordNotEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FunctionCallOp declarations
//===----------------------------------------------------------------------===//

class FunctionCallOpOperandAdaptor {
public:
  FunctionCallOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> arguments();

private:
  ArrayRef<Value> tblgen_operands;
};
class FunctionCallOp : public Op<FunctionCallOp, OpTrait::VariadicResults, CallOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = FunctionCallOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range arguments();
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range result();
  FlatSymbolRefAttr calleeAttr();
  StringRef callee();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> result, FlatSymbolRefAttr callee, ValueRange arguments);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> result, StringRef callee, ValueRange arguments);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  CallInterfaceCallable getCallableForCallee();
  Operation::operand_range getArgOperands();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLCeilOp declarations
//===----------------------------------------------------------------------===//

class GLSLCeilOpOperandAdaptor {
public:
  GLSLCeilOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLCeilOp : public Op<GLSLCeilOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLCeilOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLCosOp declarations
//===----------------------------------------------------------------------===//

class GLSLCosOpOperandAdaptor {
public:
  GLSLCosOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLCosOp : public Op<GLSLCosOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLCosOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLExpOp declarations
//===----------------------------------------------------------------------===//

class GLSLExpOpOperandAdaptor {
public:
  GLSLExpOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLExpOp : public Op<GLSLExpOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLExpOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFAbsOp declarations
//===----------------------------------------------------------------------===//

class GLSLFAbsOpOperandAdaptor {
public:
  GLSLFAbsOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLFAbsOp : public Op<GLSLFAbsOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLFAbsOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFMaxOp declarations
//===----------------------------------------------------------------------===//

class GLSLFMaxOpOperandAdaptor {
public:
  GLSLFMaxOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLFMaxOp : public Op<GLSLFMaxOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLFMaxOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFMinOp declarations
//===----------------------------------------------------------------------===//

class GLSLFMinOpOperandAdaptor {
public:
  GLSLFMinOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLFMinOp : public Op<GLSLFMinOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLFMinOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFSignOp declarations
//===----------------------------------------------------------------------===//

class GLSLFSignOpOperandAdaptor {
public:
  GLSLFSignOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLFSignOp : public Op<GLSLFSignOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLFSignOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFloorOp declarations
//===----------------------------------------------------------------------===//

class GLSLFloorOpOperandAdaptor {
public:
  GLSLFloorOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLFloorOp : public Op<GLSLFloorOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLFloorOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLInverseSqrtOp declarations
//===----------------------------------------------------------------------===//

class GLSLInverseSqrtOpOperandAdaptor {
public:
  GLSLInverseSqrtOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLInverseSqrtOp : public Op<GLSLInverseSqrtOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLInverseSqrtOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLLogOp declarations
//===----------------------------------------------------------------------===//

class GLSLLogOpOperandAdaptor {
public:
  GLSLLogOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLLogOp : public Op<GLSLLogOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLLogOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSAbsOp declarations
//===----------------------------------------------------------------------===//

class GLSLSAbsOpOperandAdaptor {
public:
  GLSLSAbsOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLSAbsOp : public Op<GLSLSAbsOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLSAbsOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSMaxOp declarations
//===----------------------------------------------------------------------===//

class GLSLSMaxOpOperandAdaptor {
public:
  GLSLSMaxOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLSMaxOp : public Op<GLSLSMaxOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLSMaxOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSMinOp declarations
//===----------------------------------------------------------------------===//

class GLSLSMinOpOperandAdaptor {
public:
  GLSLSMinOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLSMinOp : public Op<GLSLSMinOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLSMinOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSSignOp declarations
//===----------------------------------------------------------------------===//

class GLSLSSignOpOperandAdaptor {
public:
  GLSLSSignOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLSSignOp : public Op<GLSLSSignOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLSSignOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSqrtOp declarations
//===----------------------------------------------------------------------===//

class GLSLSqrtOpOperandAdaptor {
public:
  GLSLSqrtOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLSqrtOp : public Op<GLSLSqrtOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLSqrtOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GLSLTanhOp declarations
//===----------------------------------------------------------------------===//

class GLSLTanhOpOperandAdaptor {
public:
  GLSLTanhOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class GLSLTanhOp : public Op<GLSLTanhOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = GLSLTanhOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GlobalVariableOp declarations
//===----------------------------------------------------------------------===//

class GlobalVariableOpOperandAdaptor {
public:
  GlobalVariableOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class GlobalVariableOp : public Op<GlobalVariableOp, OpTrait::ZeroResult, OpTrait::Symbol, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = GlobalVariableOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  TypeAttr typeAttr();
  Type type();
  StringAttr sym_nameAttr();
  StringRef sym_name();
  FlatSymbolRefAttr initializerAttr();
  Optional< StringRef > initializer();
  static void build(Builder *builder, OperationState &state, TypeAttr type, ArrayRef<NamedAttribute> namedAttrs);
  static void build(Builder *builder, OperationState &state,
                Type type, StringRef name, unsigned descriptorSet,
                unsigned binding);
  static void build(Builder *builder, OperationState &state,
                Type type, StringRef name, spirv::BuiltIn builtin);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, TypeAttr type, StringAttr sym_name, /*optional*/FlatSymbolRefAttr initializer);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, TypeAttr type, StringAttr sym_name, /*optional*/FlatSymbolRefAttr initializer);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, TypeAttr type, StringRef sym_name, /*optional*/FlatSymbolRefAttr initializer);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, TypeAttr type, StringRef sym_name, /*optional*/FlatSymbolRefAttr initializer);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();

    ::mlir::spirv::StorageClass storageClass() {
      return this->type().cast<::mlir::spirv::PointerType>().getStorageClass();
    }
  
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformBallotOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformBallotOpOperandAdaptor {
public:
  GroupNonUniformBallotOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  predicate();

private:
  ArrayRef<Value> tblgen_operands;
};
class GroupNonUniformBallotOp : public Op<GroupNonUniformBallotOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = GroupNonUniformBallotOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  predicate();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, IntegerAttr execution_scope, Value predicate);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, Value predicate);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, ::mlir::spirv::Scope execution_scope, Value predicate);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, Value predicate);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::IAddOp declarations
//===----------------------------------------------------------------------===//

class IAddOpOperandAdaptor {
public:
  IAddOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class IAddOp : public Op<IAddOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = IAddOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::IEqualOp declarations
//===----------------------------------------------------------------------===//

class IEqualOpOperandAdaptor {
public:
  IEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class IEqualOp : public Op<IEqualOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = IEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::IMulOp declarations
//===----------------------------------------------------------------------===//

class IMulOpOperandAdaptor {
public:
  IMulOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class IMulOp : public Op<IMulOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = IMulOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::INotEqualOp declarations
//===----------------------------------------------------------------------===//

class INotEqualOpOperandAdaptor {
public:
  INotEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class INotEqualOp : public Op<INotEqualOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = INotEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ISubOp declarations
//===----------------------------------------------------------------------===//

class ISubOpOperandAdaptor {
public:
  ISubOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class ISubOp : public Op<ISubOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ISubOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::LoadOp declarations
//===----------------------------------------------------------------------===//

class LoadOpOperandAdaptor {
public:
  LoadOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  ptr();

private:
  ArrayRef<Value> tblgen_operands;
};
class LoadOp : public Op<LoadOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = LoadOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  ptr();
  Operation::result_range getODSResults(unsigned index);
  Value  value();
  IntegerAttr memory_accessAttr();
  Optional<::mlir::spirv::MemoryAccess> memory_access();
  IntegerAttr alignmentAttr();
  Optional< APInt > alignment();
  static void build(Builder *builder, OperationState &state,
                  Value basePtr, /*optional*/IntegerAttr memory_access,
                  /*optional*/IntegerAttr alignment);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type value, Value ptr, /*optional*/IntegerAttr memory_access, /*optional*/IntegerAttr alignment);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value ptr, /*optional*/IntegerAttr memory_access, /*optional*/IntegerAttr alignment);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::LogicalAndOp declarations
//===----------------------------------------------------------------------===//

class LogicalAndOpOperandAdaptor {
public:
  LogicalAndOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class LogicalAndOp : public Op<LogicalAndOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = LogicalAndOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::LogicalEqualOp declarations
//===----------------------------------------------------------------------===//

class LogicalEqualOpOperandAdaptor {
public:
  LogicalEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class LogicalEqualOp : public Op<LogicalEqualOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = LogicalEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::LogicalNotEqualOp declarations
//===----------------------------------------------------------------------===//

class LogicalNotEqualOpOperandAdaptor {
public:
  LogicalNotEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class LogicalNotEqualOp : public Op<LogicalNotEqualOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = LogicalNotEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::LogicalNotOp declarations
//===----------------------------------------------------------------------===//

class LogicalNotOpOperandAdaptor {
public:
  LogicalNotOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class LogicalNotOp : public Op<LogicalNotOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = LogicalNotOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::LogicalOrOp declarations
//===----------------------------------------------------------------------===//

class LogicalOrOpOperandAdaptor {
public:
  LogicalOrOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class LogicalOrOp : public Op<LogicalOrOp, OpTrait::OneResult, OpTrait::IsCommutative, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = LogicalOrOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::LoopOp declarations
//===----------------------------------------------------------------------===//

class LoopOpOperandAdaptor {
public:
  LoopOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class LoopOp : public Op<LoopOp, OpTrait::ZeroResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = LoopOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  IntegerAttr loop_controlAttr();
  ::mlir::spirv::LoopControl loop_control();
  static void build(Builder *builder, OperationState &state);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, IntegerAttr loop_control);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr loop_control);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ::mlir::spirv::LoopControl loop_control);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::LoopControl loop_control);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();

    // Returns the entry block.
    Block *getEntryBlock();

    // Returns the loop header block.
    Block *getHeaderBlock();

    // Returns the loop continue block.
    Block *getContinueBlock();

    // Returns the loop merge block.
    Block *getMergeBlock();

    // Adds an empty entry block and loop merge block containing one
    // spv._merge op.
    void addEntryAndMergeBlock();
  
};

//===----------------------------------------------------------------------===//
// spirv::MemoryBarrierOp declarations
//===----------------------------------------------------------------------===//

class MemoryBarrierOpOperandAdaptor {
public:
  MemoryBarrierOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class MemoryBarrierOp : public Op<MemoryBarrierOp, OpTrait::ZeroResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = MemoryBarrierOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr memory_semanticsAttr();
  ::mlir::spirv::MemorySemantics memory_semantics();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, IntegerAttr memory_scope, IntegerAttr memory_semantics);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr memory_scope, IntegerAttr memory_semantics);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::MergeOp declarations
//===----------------------------------------------------------------------===//

class MergeOpOperandAdaptor {
public:
  MergeOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class MergeOp : public Op<MergeOp, OpTrait::ZeroResult, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = MergeOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ModuleEndOp declarations
//===----------------------------------------------------------------------===//

class ModuleEndOpOperandAdaptor {
public:
  ModuleEndOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ModuleEndOp : public Op<ModuleEndOp, OpTrait::ZeroResult, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ModuleEndOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ModuleOp declarations
//===----------------------------------------------------------------------===//

class ModuleOpOperandAdaptor {
public:
  ModuleOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ModuleOp : public Op<ModuleOp, OpTrait::ZeroResult, OpTrait::IsIsolatedFromAbove, OpTrait::SingleBlockImplicitTerminator<ModuleEndOp>::Impl, OpTrait::SymbolTable, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ModuleOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  IntegerAttr addressing_modelAttr();
  ::mlir::spirv::AddressingModel addressing_model();
  IntegerAttr memory_modelAttr();
  ::mlir::spirv::MemoryModel memory_model();
  ArrayAttr capabilitiesAttr();
  Optional< ArrayAttr > capabilities();
  ArrayAttr extensionsAttr();
  Optional< ArrayAttr > extensions();
  ArrayAttr extended_instruction_setsAttr();
  Optional< ArrayAttr > extended_instruction_sets();
  static void build(Builder *, OperationState &state);
  static void build(Builder *, OperationState &state,
                 IntegerAttr addressing_model,
                 IntegerAttr memory_model);
  static void build(Builder *, OperationState &state,
                 spirv::AddressingModel addressing_model,
                 spirv::MemoryModel memory_model,
                 /*optional*/ ArrayRef<spirv::Capability> capabilities = {},
                 /*optional*/ ArrayRef<spirv::Extension> extensions = {},
                 /*optional*/ ArrayAttr extended_instruction_sets = nullptr);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();

    Block& getBlock() {
      return this->getOperation()->getRegion(0).front();
    }
  
};

//===----------------------------------------------------------------------===//
// spirv::NotOp declarations
//===----------------------------------------------------------------------===//

class NotOpOperandAdaptor {
public:
  NotOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class NotOp : public Op<NotOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = NotOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ReferenceOfOp declarations
//===----------------------------------------------------------------------===//

class ReferenceOfOpOperandAdaptor {
public:
  ReferenceOfOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ReferenceOfOp : public Op<ReferenceOfOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ReferenceOfOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  reference();
  FlatSymbolRefAttr spec_constAttr();
  StringRef spec_const();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type reference, FlatSymbolRefAttr spec_const);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, FlatSymbolRefAttr spec_const);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type reference, StringRef spec_const);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef spec_const);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ReturnOp declarations
//===----------------------------------------------------------------------===//

class ReturnOpOperandAdaptor {
public:
  ReturnOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ReturnOp : public Op<ReturnOp, OpTrait::ZeroResult, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ReturnOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ReturnValueOp declarations
//===----------------------------------------------------------------------===//

class ReturnValueOpOperandAdaptor {
public:
  ReturnValueOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class ReturnValueOp : public Op<ReturnValueOp, OpTrait::ZeroResult, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ReturnValueOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SConvertOp declarations
//===----------------------------------------------------------------------===//

class SConvertOpOperandAdaptor {
public:
  SConvertOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class SConvertOp : public Op<SConvertOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = SConvertOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SDivOp declarations
//===----------------------------------------------------------------------===//

class SDivOpOperandAdaptor {
public:
  SDivOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class SDivOp : public Op<SDivOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = SDivOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SGreaterThanEqualOp declarations
//===----------------------------------------------------------------------===//

class SGreaterThanEqualOpOperandAdaptor {
public:
  SGreaterThanEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class SGreaterThanEqualOp : public Op<SGreaterThanEqualOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = SGreaterThanEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SGreaterThanOp declarations
//===----------------------------------------------------------------------===//

class SGreaterThanOpOperandAdaptor {
public:
  SGreaterThanOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class SGreaterThanOp : public Op<SGreaterThanOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = SGreaterThanOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SLessThanEqualOp declarations
//===----------------------------------------------------------------------===//

class SLessThanEqualOpOperandAdaptor {
public:
  SLessThanEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class SLessThanEqualOp : public Op<SLessThanEqualOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = SLessThanEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SLessThanOp declarations
//===----------------------------------------------------------------------===//

class SLessThanOpOperandAdaptor {
public:
  SLessThanOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class SLessThanOp : public Op<SLessThanOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = SLessThanOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SModOp declarations
//===----------------------------------------------------------------------===//

class SModOpOperandAdaptor {
public:
  SModOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class SModOp : public Op<SModOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = SModOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SRemOp declarations
//===----------------------------------------------------------------------===//

class SRemOpOperandAdaptor {
public:
  SRemOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class SRemOp : public Op<SRemOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = SRemOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SelectOp declarations
//===----------------------------------------------------------------------===//

class SelectOpOperandAdaptor {
public:
  SelectOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  condition();
  Value  true_value();
  Value  false_value();

private:
  ArrayRef<Value> tblgen_operands;
};
class SelectOp : public Op<SelectOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = SelectOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  condition();
  Value  true_value();
  Value  false_value();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *builder, OperationState &state,
                              Value cond, Value trueValue,
                              Value falseValue);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value condition, Value true_value, Value false_value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value condition, Value true_value, Value false_value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SelectionOp declarations
//===----------------------------------------------------------------------===//

class SelectionOpOperandAdaptor {
public:
  SelectionOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class SelectionOp : public Op<SelectionOp, OpTrait::ZeroResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = SelectionOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  IntegerAttr selection_controlAttr();
  ::mlir::spirv::SelectionControl selection_control();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, IntegerAttr selection_control);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr selection_control);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ::mlir::spirv::SelectionControl selection_control);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::SelectionControl selection_control);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();

    // Returns the selection header block.
    Block *getHeaderBlock();

    // Returns the selection merge block.
    Block *getMergeBlock();

    // Adds a selection merge block containing one spv._merge op.
    void addMergeBlock();
  
};

//===----------------------------------------------------------------------===//
// spirv::ShiftLeftLogicalOp declarations
//===----------------------------------------------------------------------===//

class ShiftLeftLogicalOpOperandAdaptor {
public:
  ShiftLeftLogicalOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class ShiftLeftLogicalOp : public Op<ShiftLeftLogicalOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ShiftLeftLogicalOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ShiftRightArithmeticOp declarations
//===----------------------------------------------------------------------===//

class ShiftRightArithmeticOpOperandAdaptor {
public:
  ShiftRightArithmeticOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class ShiftRightArithmeticOp : public Op<ShiftRightArithmeticOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ShiftRightArithmeticOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ShiftRightLogicalOp declarations
//===----------------------------------------------------------------------===//

class ShiftRightLogicalOpOperandAdaptor {
public:
  ShiftRightLogicalOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class ShiftRightLogicalOp : public Op<ShiftRightLogicalOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ShiftRightLogicalOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SpecConstantOp declarations
//===----------------------------------------------------------------------===//

class SpecConstantOpOperandAdaptor {
public:
  SpecConstantOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class SpecConstantOp : public Op<SpecConstantOp, OpTrait::ZeroResult, OpTrait::Symbol, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = SpecConstantOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr sym_nameAttr();
  StringRef sym_name();
  Attribute default_valueAttr();
  Attribute default_value();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, StringAttr sym_name, Attribute default_value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringAttr sym_name, Attribute default_value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, StringRef sym_name, Attribute default_value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef sym_name, Attribute default_value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::StoreOp declarations
//===----------------------------------------------------------------------===//

class StoreOpOperandAdaptor {
public:
  StoreOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  ptr();
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class StoreOp : public Op<StoreOp, OpTrait::ZeroResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = StoreOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  ptr();
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr memory_accessAttr();
  Optional<::mlir::spirv::MemoryAccess> memory_access();
  IntegerAttr alignmentAttr();
  Optional< APInt > alignment();
  static void build(Builder *builder, OperationState &state, Value ptr, Value value, ArrayRef<NamedAttribute> namedAttrs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value ptr, Value value, /*optional*/IntegerAttr memory_access, /*optional*/IntegerAttr alignment);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value ptr, Value value, /*optional*/IntegerAttr memory_access, /*optional*/IntegerAttr alignment);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SubgroupBallotKHROp declarations
//===----------------------------------------------------------------------===//

class SubgroupBallotKHROpOperandAdaptor {
public:
  SubgroupBallotKHROpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  predicate();

private:
  ArrayRef<Value> tblgen_operands;
};
class SubgroupBallotKHROp : public Op<SubgroupBallotKHROp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = SubgroupBallotKHROpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  predicate();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value predicate);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value predicate);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::UConvertOp declarations
//===----------------------------------------------------------------------===//

class UConvertOpOperandAdaptor {
public:
  UConvertOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class UConvertOp : public Op<UConvertOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = UConvertOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::UDivOp declarations
//===----------------------------------------------------------------------===//

class UDivOpOperandAdaptor {
public:
  UDivOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class UDivOp : public Op<UDivOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = UDivOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::UGreaterThanEqualOp declarations
//===----------------------------------------------------------------------===//

class UGreaterThanEqualOpOperandAdaptor {
public:
  UGreaterThanEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class UGreaterThanEqualOp : public Op<UGreaterThanEqualOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = UGreaterThanEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::UGreaterThanOp declarations
//===----------------------------------------------------------------------===//

class UGreaterThanOpOperandAdaptor {
public:
  UGreaterThanOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class UGreaterThanOp : public Op<UGreaterThanOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = UGreaterThanOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ULessThanEqualOp declarations
//===----------------------------------------------------------------------===//

class ULessThanEqualOpOperandAdaptor {
public:
  ULessThanEqualOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class ULessThanEqualOp : public Op<ULessThanEqualOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ULessThanEqualOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ULessThanOp declarations
//===----------------------------------------------------------------------===//

class ULessThanOpOperandAdaptor {
public:
  ULessThanOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class ULessThanOp : public Op<ULessThanOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ULessThanOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::UModOp declarations
//===----------------------------------------------------------------------===//

class UModOpOperandAdaptor {
public:
  UModOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();

private:
  ArrayRef<Value> tblgen_operands;
};
class UModOp : public Op<UModOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = UModOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand1();
  Value  operand2();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::UndefOp declarations
//===----------------------------------------------------------------------===//

class UndefOpOperandAdaptor {
public:
  UndefOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class UndefOp : public Op<UndefOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = UndefOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::UnreachableOp declarations
//===----------------------------------------------------------------------===//

class UnreachableOpOperandAdaptor {
public:
  UnreachableOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class UnreachableOp : public Op<UnreachableOp, OpTrait::ZeroResult, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = UnreachableOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::VariableOp declarations
//===----------------------------------------------------------------------===//

class VariableOpOperandAdaptor {
public:
  VariableOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> initializer();

private:
  ArrayRef<Value> tblgen_operands;
};
class VariableOp : public Op<VariableOp, OpTrait::OneResult, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = VariableOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range initializer();
  Operation::result_range getODSResults(unsigned index);
  Value  pointer();
  IntegerAttr storage_classAttr();
  ::mlir::spirv::StorageClass storage_class();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type pointer, IntegerAttr storage_class, ValueRange initializer);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr storage_class, ValueRange initializer);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type pointer, ::mlir::spirv::StorageClass storage_class, ValueRange initializer);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::StorageClass storage_class, ValueRange initializer);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> getCapabilities();
};

#endif  // GET_OP_CLASSES

