/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

ROCDL::BlockDimXOp,
ROCDL::BlockDimYOp,
ROCDL::BlockDimZOp,
ROCDL::BlockIdXOp,
ROCDL::BlockIdYOp,
ROCDL::BlockIdZOp,
ROCDL::GridDimXOp,
ROCDL::GridDimYOp,
ROCDL::GridDimZOp,
ROCDL::ThreadIdXOp,
ROCDL::ThreadIdYOp,
ROCDL::ThreadIdZOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// ROCDL::BlockDimXOp definitions
//===----------------------------------------------------------------------===//

BlockDimXOpOperandAdaptor::BlockDimXOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockDimXOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockDimXOp::getOperationName() {
  return "rocdl.workgroup.dim.x";
}

Operation::operand_range BlockDimXOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range BlockDimXOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BlockDimXOp::res() {
  return *getODSResults(0).begin();
}

void BlockDimXOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void BlockDimXOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void BlockDimXOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BlockDimXOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLOp(parser, result);
}

void BlockDimXOp::print(OpAsmPrinter &p) {
  printROCDLOp(p, this->getOperation());
}

LogicalResult BlockDimXOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ROCDL::BlockDimYOp definitions
//===----------------------------------------------------------------------===//

BlockDimYOpOperandAdaptor::BlockDimYOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockDimYOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockDimYOp::getOperationName() {
  return "rocdl.workgroup.dim.y";
}

Operation::operand_range BlockDimYOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range BlockDimYOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BlockDimYOp::res() {
  return *getODSResults(0).begin();
}

void BlockDimYOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void BlockDimYOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void BlockDimYOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BlockDimYOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLOp(parser, result);
}

void BlockDimYOp::print(OpAsmPrinter &p) {
  printROCDLOp(p, this->getOperation());
}

LogicalResult BlockDimYOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ROCDL::BlockDimZOp definitions
//===----------------------------------------------------------------------===//

BlockDimZOpOperandAdaptor::BlockDimZOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockDimZOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockDimZOp::getOperationName() {
  return "rocdl.workgroup.dim.z";
}

Operation::operand_range BlockDimZOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range BlockDimZOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BlockDimZOp::res() {
  return *getODSResults(0).begin();
}

void BlockDimZOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void BlockDimZOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void BlockDimZOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BlockDimZOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLOp(parser, result);
}

void BlockDimZOp::print(OpAsmPrinter &p) {
  printROCDLOp(p, this->getOperation());
}

LogicalResult BlockDimZOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ROCDL::BlockIdXOp definitions
//===----------------------------------------------------------------------===//

BlockIdXOpOperandAdaptor::BlockIdXOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockIdXOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockIdXOp::getOperationName() {
  return "rocdl.workgroup.id.x";
}

Operation::operand_range BlockIdXOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range BlockIdXOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BlockIdXOp::res() {
  return *getODSResults(0).begin();
}

void BlockIdXOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void BlockIdXOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void BlockIdXOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BlockIdXOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLOp(parser, result);
}

void BlockIdXOp::print(OpAsmPrinter &p) {
  printROCDLOp(p, this->getOperation());
}

LogicalResult BlockIdXOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ROCDL::BlockIdYOp definitions
//===----------------------------------------------------------------------===//

BlockIdYOpOperandAdaptor::BlockIdYOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockIdYOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockIdYOp::getOperationName() {
  return "rocdl.workgroup.id.y";
}

Operation::operand_range BlockIdYOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range BlockIdYOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BlockIdYOp::res() {
  return *getODSResults(0).begin();
}

void BlockIdYOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void BlockIdYOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void BlockIdYOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BlockIdYOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLOp(parser, result);
}

void BlockIdYOp::print(OpAsmPrinter &p) {
  printROCDLOp(p, this->getOperation());
}

LogicalResult BlockIdYOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ROCDL::BlockIdZOp definitions
//===----------------------------------------------------------------------===//

BlockIdZOpOperandAdaptor::BlockIdZOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockIdZOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockIdZOp::getOperationName() {
  return "rocdl.workgroup.id.z";
}

Operation::operand_range BlockIdZOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range BlockIdZOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BlockIdZOp::res() {
  return *getODSResults(0).begin();
}

void BlockIdZOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void BlockIdZOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void BlockIdZOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BlockIdZOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLOp(parser, result);
}

void BlockIdZOp::print(OpAsmPrinter &p) {
  printROCDLOp(p, this->getOperation());
}

LogicalResult BlockIdZOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ROCDL::GridDimXOp definitions
//===----------------------------------------------------------------------===//

GridDimXOpOperandAdaptor::GridDimXOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GridDimXOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef GridDimXOp::getOperationName() {
  return "rocdl.grid.dim.x";
}

Operation::operand_range GridDimXOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range GridDimXOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GridDimXOp::res() {
  return *getODSResults(0).begin();
}

void GridDimXOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void GridDimXOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void GridDimXOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GridDimXOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLOp(parser, result);
}

void GridDimXOp::print(OpAsmPrinter &p) {
  printROCDLOp(p, this->getOperation());
}

LogicalResult GridDimXOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ROCDL::GridDimYOp definitions
//===----------------------------------------------------------------------===//

GridDimYOpOperandAdaptor::GridDimYOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GridDimYOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef GridDimYOp::getOperationName() {
  return "rocdl.grid.dim.y";
}

Operation::operand_range GridDimYOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range GridDimYOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GridDimYOp::res() {
  return *getODSResults(0).begin();
}

void GridDimYOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void GridDimYOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void GridDimYOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GridDimYOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLOp(parser, result);
}

void GridDimYOp::print(OpAsmPrinter &p) {
  printROCDLOp(p, this->getOperation());
}

LogicalResult GridDimYOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ROCDL::GridDimZOp definitions
//===----------------------------------------------------------------------===//

GridDimZOpOperandAdaptor::GridDimZOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GridDimZOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef GridDimZOp::getOperationName() {
  return "rocdl.grid.dim.z";
}

Operation::operand_range GridDimZOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range GridDimZOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GridDimZOp::res() {
  return *getODSResults(0).begin();
}

void GridDimZOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void GridDimZOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void GridDimZOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GridDimZOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLOp(parser, result);
}

void GridDimZOp::print(OpAsmPrinter &p) {
  printROCDLOp(p, this->getOperation());
}

LogicalResult GridDimZOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ROCDL::ThreadIdXOp definitions
//===----------------------------------------------------------------------===//

ThreadIdXOpOperandAdaptor::ThreadIdXOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ThreadIdXOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ThreadIdXOp::getOperationName() {
  return "rocdl.workitem.id.x";
}

Operation::operand_range ThreadIdXOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ThreadIdXOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ThreadIdXOp::res() {
  return *getODSResults(0).begin();
}

void ThreadIdXOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void ThreadIdXOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void ThreadIdXOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ThreadIdXOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLOp(parser, result);
}

void ThreadIdXOp::print(OpAsmPrinter &p) {
  printROCDLOp(p, this->getOperation());
}

LogicalResult ThreadIdXOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ROCDL::ThreadIdYOp definitions
//===----------------------------------------------------------------------===//

ThreadIdYOpOperandAdaptor::ThreadIdYOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ThreadIdYOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ThreadIdYOp::getOperationName() {
  return "rocdl.workitem.id.y";
}

Operation::operand_range ThreadIdYOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ThreadIdYOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ThreadIdYOp::res() {
  return *getODSResults(0).begin();
}

void ThreadIdYOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void ThreadIdYOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void ThreadIdYOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ThreadIdYOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLOp(parser, result);
}

void ThreadIdYOp::print(OpAsmPrinter &p) {
  printROCDLOp(p, this->getOperation());
}

LogicalResult ThreadIdYOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ROCDL::ThreadIdZOp definitions
//===----------------------------------------------------------------------===//

ThreadIdZOpOperandAdaptor::ThreadIdZOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ThreadIdZOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ThreadIdZOp::getOperationName() {
  return "rocdl.workitem.id.z";
}

Operation::operand_range ThreadIdZOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ThreadIdZOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ThreadIdZOp::res() {
  return *getODSResults(0).begin();
}

void ThreadIdZOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void ThreadIdZOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void ThreadIdZOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ThreadIdZOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLOp(parser, result);
}

void ThreadIdZOp::print(OpAsmPrinter &p) {
  printROCDLOp(p, this->getOperation());
}

LogicalResult ThreadIdZOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


#endif  // GET_OP_CLASSES

