/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

ForOp,
IfOp,
ParallelOp,
ReduceOp,
ReduceReturnOp,
TerminatorOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// ForOp definitions
//===----------------------------------------------------------------------===//

ForOpOperandAdaptor::ForOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ForOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ForOpOperandAdaptor::lowerBound() {
  return *getODSOperands(0).begin();
}

Value  ForOpOperandAdaptor::upperBound() {
  return *getODSOperands(1).begin();
}

Value  ForOpOperandAdaptor::step() {
  return *getODSOperands(2).begin();
}

StringRef ForOp::getOperationName() {
  return "loop.for";
}

Operation::operand_range ForOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ForOp::lowerBound() {
  return *getODSOperands(0).begin();
}

Value  ForOp::upperBound() {
  return *getODSOperands(1).begin();
}

Value  ForOp::step() {
  return *getODSOperands(2).begin();
}

Operation::result_range ForOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Region &ForOp::region() {
  return this->getOperation()->getRegion(0);
}



ParseResult ForOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseForOp(parser, result);
}

void ForOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ForOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 1) {
    return emitOpError("has incorrect number of regions: expected 1 but found ") << this->getOperation()->getNumRegions();
  }
  if (!((this->getOperation()->getRegion(0).getBlocks().size() == 1))) {
    return emitOpError("region #0 ('region') failed to verify constraint: region with 1 blocks");
  }
  return ::verify(*this);
}








//===----------------------------------------------------------------------===//
// IfOp definitions
//===----------------------------------------------------------------------===//

IfOpOperandAdaptor::IfOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> IfOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  IfOpOperandAdaptor::condition() {
  return *getODSOperands(0).begin();
}

StringRef IfOp::getOperationName() {
  return "loop.if";
}

Operation::operand_range IfOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  IfOp::condition() {
  return *getODSOperands(0).begin();
}

Operation::result_range IfOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Region &IfOp::thenRegion() {
  return this->getOperation()->getRegion(0);
}

Region &IfOp::elseRegion() {
  return this->getOperation()->getRegion(1);
}



ParseResult IfOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseIfOp(parser, result);
}

void IfOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult IfOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isInteger(1)))) {
        return emitOpError("operand #") << index << " must be 1-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 2) {
    return emitOpError("has incorrect number of regions: expected 2 but found ") << this->getOperation()->getNumRegions();
  }
  if (!((this->getOperation()->getRegion(0).getBlocks().size() == 1))) {
    return emitOpError("region #0 ('thenRegion') failed to verify constraint: region with 1 blocks");
  }
  if (!((true))) {
    return emitOpError("region #1 ('elseRegion') failed to verify constraint: any region");
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// ParallelOp definitions
//===----------------------------------------------------------------------===//

ParallelOpOperandAdaptor::ParallelOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ParallelOpOperandAdaptor::getODSOperands(unsigned index) {
  bool isVariadic[] = {true, true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (tblgen_operands.size() - 0) / 3;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(tblgen_operands.begin(), offset), std::next(tblgen_operands.begin(), offset + size)};
}

ArrayRef<Value> ParallelOpOperandAdaptor::lowerBound() {
  return getODSOperands(0);
}

ArrayRef<Value> ParallelOpOperandAdaptor::upperBound() {
  return getODSOperands(1);
}

ArrayRef<Value> ParallelOpOperandAdaptor::step() {
  return getODSOperands(2);
}

StringRef ParallelOp::getOperationName() {
  return "loop.parallel";
}

Operation::operand_range ParallelOp::getODSOperands(unsigned index) {
  bool isVariadic[] = {true, true, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 3;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->operand_begin(), offset), std::next(getOperation()->operand_begin(), offset + size)};
}

Operation::operand_range ParallelOp::lowerBound() {
  return getODSOperands(0);
}

Operation::operand_range ParallelOp::upperBound() {
  return getODSOperands(1);
}

Operation::operand_range ParallelOp::step() {
  return getODSOperands(2);
}

Operation::result_range ParallelOp::getODSResults(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic result corresponds to.
  // This assumes all static variadic results have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // result (variadic or not) as size 1. So here for each previous static variadic
  // result, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static result starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->result_begin(), offset), std::next(getOperation()->result_begin(), offset + size)};
}

Operation::result_range ParallelOp::results() {
  return getODSResults(0);
}

Region &ParallelOp::body() {
  return this->getOperation()->getRegion(0);
}

void ParallelOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> results, ValueRange lowerBound, ValueRange upperBound, ValueRange step) {
  tblgen_state.addOperands(lowerBound);
  tblgen_state.addOperands(upperBound);
  tblgen_state.addOperands(step);
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(results);
}

void ParallelOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(resultTypes);
}

ParseResult ParallelOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseParallelOp(parser, result);
}

void ParallelOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ParallelOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 1) {
    return emitOpError("has incorrect number of regions: expected 1 but found ") << this->getOperation()->getNumRegions();
  }
  if (!((this->getOperation()->getRegion(0).getBlocks().size() == 1))) {
    return emitOpError("region #0 ('body') failed to verify constraint: region with 1 blocks");
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// ReduceOp definitions
//===----------------------------------------------------------------------===//

ReduceOpOperandAdaptor::ReduceOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ReduceOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ReduceOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef ReduceOp::getOperationName() {
  return "loop.reduce";
}

Operation::operand_range ReduceOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ReduceOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range ReduceOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Region &ReduceOp::reductionOperator() {
  return this->getOperation()->getRegion(0);
}

void ReduceOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  (void)tblgen_state.addRegion();
}

void ReduceOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(resultTypes);
}

void ReduceOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  (void)tblgen_state.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ReduceOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseReduceOp(parser, result);
}

void ReduceOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ReduceOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 1) {
    return emitOpError("has incorrect number of regions: expected 1 but found ") << this->getOperation()->getNumRegions();
  }
  if (!((this->getOperation()->getRegion(0).getBlocks().size() == 1))) {
    return emitOpError("region #0 ('reductionOperator') failed to verify constraint: region with 1 blocks");
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// ReduceReturnOp definitions
//===----------------------------------------------------------------------===//

ReduceReturnOpOperandAdaptor::ReduceReturnOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ReduceReturnOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ReduceReturnOpOperandAdaptor::result() {
  return *getODSOperands(0).begin();
}

StringRef ReduceReturnOp::getOperationName() {
  return "loop.reduce.return";
}

Operation::operand_range ReduceReturnOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ReduceReturnOp::result() {
  return *getODSOperands(0).begin();
}

Operation::result_range ReduceReturnOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ReduceReturnOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value result) {
  tblgen_state.addOperands(result);
}

void ReduceReturnOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value result) {
  tblgen_state.addOperands(result);
  tblgen_state.addTypes(resultTypes);
}

void ReduceReturnOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ReduceReturnOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseReduceReturnOp(parser, result);
}

void ReduceReturnOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ReduceReturnOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// TerminatorOp definitions
//===----------------------------------------------------------------------===//

TerminatorOpOperandAdaptor::TerminatorOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> TerminatorOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef TerminatorOp::getOperationName() {
  return "loop.terminator";
}

Operation::operand_range TerminatorOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range TerminatorOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void TerminatorOp::build(Builder *tblgen_builder, OperationState &tblgen_state) {

}

void TerminatorOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void TerminatorOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult TerminatorOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


#endif  // GET_OP_CLASSES

