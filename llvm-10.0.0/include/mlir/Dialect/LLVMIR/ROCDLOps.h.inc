/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class BlockDimXOp;
class BlockDimYOp;
class BlockDimZOp;
class BlockIdXOp;
class BlockIdYOp;
class BlockIdZOp;
class GridDimXOp;
class GridDimYOp;
class GridDimZOp;
class ThreadIdXOp;
class ThreadIdYOp;
class ThreadIdZOp;

//===----------------------------------------------------------------------===//
// ROCDL::BlockDimXOp declarations
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
// ROCDL::BlockDimYOp declarations
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
// ROCDL::BlockDimZOp declarations
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
// ROCDL::BlockIdXOp declarations
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
// ROCDL::BlockIdYOp declarations
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
// ROCDL::BlockIdZOp declarations
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
// ROCDL::GridDimXOp declarations
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
// ROCDL::GridDimYOp declarations
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
// ROCDL::GridDimZOp declarations
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
// ROCDL::ThreadIdXOp declarations
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
// ROCDL::ThreadIdYOp declarations
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
// ROCDL::ThreadIdZOp declarations
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

#endif  // GET_OP_CLASSES

