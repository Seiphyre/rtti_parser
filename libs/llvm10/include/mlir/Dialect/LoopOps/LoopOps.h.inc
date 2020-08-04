/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class ForOp;
class IfOp;
class ParallelOp;
class ReduceOp;
class ReduceReturnOp;
class TerminatorOp;

//===----------------------------------------------------------------------===//
// ForOp declarations
//===----------------------------------------------------------------------===//

class ForOpOperandAdaptor {
public:
  ForOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lowerBound();
  Value  upperBound();
  Value  step();

private:
  ArrayRef<Value> tblgen_operands;
};
class ForOp : public Op<ForOp, OpTrait::ZeroResult, LoopLikeOpInterface::Trait, OpTrait::SingleBlockImplicitTerminator<TerminatorOp>::Impl, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ForOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lowerBound();
  Value  upperBound();
  Value  step();
  Operation::result_range getODSResults(unsigned index);
  Region &region();
  static void build(Builder *builder, OperationState &result, Value lowerBound, Value upperBound, Value step);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  bool isDefinedOutsideOfLoop(Value  value);
  Region &getLoopBody();
  LogicalResult moveOutOfLoop(ArrayRef<Operation *> ops);

    Block *getBody() { return &region().front(); }
    Value getInductionVar() { return getBody()->getArgument(0); }
    OpBuilder getBodyBuilder() {
      return OpBuilder(getBody(), std::prev(getBody()->end()));
    }
    void setLowerBound(Value bound) { getOperation()->setOperand(0, bound); }
    void setUpperBound(Value bound) { getOperation()->setOperand(1, bound); }
    void setStep(Value step) { getOperation()->setOperand(2, step); }
  
};

//===----------------------------------------------------------------------===//
// IfOp declarations
//===----------------------------------------------------------------------===//

class IfOpOperandAdaptor {
public:
  IfOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  condition();

private:
  ArrayRef<Value> tblgen_operands;
};
class IfOp : public Op<IfOp, OpTrait::ZeroResult, OpTrait::SingleBlockImplicitTerminator<TerminatorOp>::Impl, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = IfOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  condition();
  Operation::result_range getODSResults(unsigned index);
  Region &thenRegion();
  Region &elseRegion();
  static void build(Builder *builder, OperationState &result, Value cond, bool withElseRegion);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    OpBuilder getThenBodyBuilder() {
      assert(!thenRegion().empty() && "Unexpected empty 'then' region.");
      Block &body = thenRegion().front();
      return OpBuilder(&body, std::prev(body.end()));
    }
    OpBuilder getElseBodyBuilder() {
      assert(!elseRegion().empty() && "Unexpected empty 'else' region.");
      Block &body = elseRegion().front();
      return OpBuilder(&body, std::prev(body.end()));
    }
  
};

//===----------------------------------------------------------------------===//
// ParallelOp declarations
//===----------------------------------------------------------------------===//

class ParallelOpOperandAdaptor {
public:
  ParallelOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> lowerBound();
  ArrayRef<Value> upperBound();
  ArrayRef<Value> step();

private:
  ArrayRef<Value> tblgen_operands;
};
class ParallelOp : public Op<ParallelOp, OpTrait::VariadicResults, OpTrait::SingleBlockImplicitTerminator<TerminatorOp>::Impl, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ParallelOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range lowerBound();
  Operation::operand_range upperBound();
  Operation::operand_range step();
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  Region &body();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> results, ValueRange lowerBound, ValueRange upperBound, ValueRange step);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// ReduceOp declarations
//===----------------------------------------------------------------------===//

class ReduceOpOperandAdaptor {
public:
  ReduceOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class ReduceOp : public Op<ReduceOp, OpTrait::ZeroResult, OpTrait::HasParent<ParallelOp>::Impl, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ReduceOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Region &reductionOperator();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// ReduceReturnOp declarations
//===----------------------------------------------------------------------===//

class ReduceReturnOpOperandAdaptor {
public:
  ReduceReturnOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  result();

private:
  ArrayRef<Value> tblgen_operands;
};
class ReduceReturnOp : public Op<ReduceReturnOp, OpTrait::ZeroResult, OpTrait::HasParent<ReduceOp>::Impl, OpTrait::IsTerminator, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ReduceReturnOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  result();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value result);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value result);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TerminatorOp declarations
//===----------------------------------------------------------------------===//

class TerminatorOpOperandAdaptor {
public:
  TerminatorOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class TerminatorOp : public Op<TerminatorOp, OpTrait::ZeroResult, OpTrait::IsTerminator, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = TerminatorOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

#endif  // GET_OP_CLASSES

