/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class Barrier0Op;
class BlockDimXOp;
class BlockDimYOp;
class BlockDimZOp;
class BlockIdXOp;
class BlockIdYOp;
class BlockIdZOp;
class GridDimXOp;
class GridDimYOp;
class GridDimZOp;
class LaneIdOp;
class MmaOp;
class ShflBflyOp;
class ThreadIdXOp;
class ThreadIdYOp;
class ThreadIdZOp;
class VoteBallotOp;
class WarpSizeOp;

//===----------------------------------------------------------------------===//
// NVVM::Barrier0Op declarations
//===----------------------------------------------------------------------===//

class Barrier0OpOperandAdaptor {
public:
  Barrier0OpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class Barrier0Op : public Op<Barrier0Op, OpTrait::ZeroResult, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = Barrier0OpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::BlockDimXOp declarations
//===----------------------------------------------------------------------===//

class BlockDimXOpOperandAdaptor {
public:
  BlockDimXOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class BlockDimXOp : public Op<BlockDimXOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = BlockDimXOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::BlockDimYOp declarations
//===----------------------------------------------------------------------===//

class BlockDimYOpOperandAdaptor {
public:
  BlockDimYOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class BlockDimYOp : public Op<BlockDimYOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = BlockDimYOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::BlockDimZOp declarations
//===----------------------------------------------------------------------===//

class BlockDimZOpOperandAdaptor {
public:
  BlockDimZOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class BlockDimZOp : public Op<BlockDimZOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = BlockDimZOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::BlockIdXOp declarations
//===----------------------------------------------------------------------===//

class BlockIdXOpOperandAdaptor {
public:
  BlockIdXOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class BlockIdXOp : public Op<BlockIdXOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = BlockIdXOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::BlockIdYOp declarations
//===----------------------------------------------------------------------===//

class BlockIdYOpOperandAdaptor {
public:
  BlockIdYOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class BlockIdYOp : public Op<BlockIdYOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = BlockIdYOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::BlockIdZOp declarations
//===----------------------------------------------------------------------===//

class BlockIdZOpOperandAdaptor {
public:
  BlockIdZOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class BlockIdZOp : public Op<BlockIdZOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = BlockIdZOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::GridDimXOp declarations
//===----------------------------------------------------------------------===//

class GridDimXOpOperandAdaptor {
public:
  GridDimXOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class GridDimXOp : public Op<GridDimXOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = GridDimXOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::GridDimYOp declarations
//===----------------------------------------------------------------------===//

class GridDimYOpOperandAdaptor {
public:
  GridDimYOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class GridDimYOp : public Op<GridDimYOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = GridDimYOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::GridDimZOp declarations
//===----------------------------------------------------------------------===//

class GridDimZOpOperandAdaptor {
public:
  GridDimZOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class GridDimZOp : public Op<GridDimZOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = GridDimZOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::LaneIdOp declarations
//===----------------------------------------------------------------------===//

class LaneIdOpOperandAdaptor {
public:
  LaneIdOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class LaneIdOp : public Op<LaneIdOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = LaneIdOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::MmaOp declarations
//===----------------------------------------------------------------------===//

class MmaOpOperandAdaptor {
public:
  MmaOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> args();

private:
  ArrayRef<Value> tblgen_operands;
};
class MmaOp : public Op<MmaOp, OpTrait::OneResult, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = MmaOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range args();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, ValueRange args);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange args);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::ShflBflyOp declarations
//===----------------------------------------------------------------------===//

class ShflBflyOpOperandAdaptor {
public:
  ShflBflyOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  dst();
  Value  val();
  Value  offset();
  Value  mask_and_clamp();

private:
  ArrayRef<Value> tblgen_operands;
};
class ShflBflyOp : public Op<ShflBflyOp, OpTrait::OneResult, OpTrait::NOperands<4>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ShflBflyOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  dst();
  Value  val();
  Value  offset();
  Value  mask_and_clamp();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  UnitAttr return_value_and_is_validAttr();
  Optional<bool> return_value_and_is_valid();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value dst, Value val, Value offset, Value mask_and_clamp, /*optional*/UnitAttr return_value_and_is_valid);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value dst, Value val, Value offset, Value mask_and_clamp, /*optional*/UnitAttr return_value_and_is_valid);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::ThreadIdXOp declarations
//===----------------------------------------------------------------------===//

class ThreadIdXOpOperandAdaptor {
public:
  ThreadIdXOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ThreadIdXOp : public Op<ThreadIdXOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ThreadIdXOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::ThreadIdYOp declarations
//===----------------------------------------------------------------------===//

class ThreadIdYOpOperandAdaptor {
public:
  ThreadIdYOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ThreadIdYOp : public Op<ThreadIdYOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ThreadIdYOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::ThreadIdZOp declarations
//===----------------------------------------------------------------------===//

class ThreadIdZOpOperandAdaptor {
public:
  ThreadIdZOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ThreadIdZOp : public Op<ThreadIdZOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ThreadIdZOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::VoteBallotOp declarations
//===----------------------------------------------------------------------===//

class VoteBallotOpOperandAdaptor {
public:
  VoteBallotOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  mask();
  Value  pred();

private:
  ArrayRef<Value> tblgen_operands;
};
class VoteBallotOp : public Op<VoteBallotOp, OpTrait::OneResult, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = VoteBallotOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  mask();
  Value  pred();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value mask, Value pred);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value mask, Value pred);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::WarpSizeOp declarations
//===----------------------------------------------------------------------===//

class WarpSizeOpOperandAdaptor {
public:
  WarpSizeOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class WarpSizeOp : public Op<WarpSizeOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = WarpSizeOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

#endif  // GET_OP_CLASSES

