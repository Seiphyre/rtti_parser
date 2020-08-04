/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

NVVM::Barrier0Op,
NVVM::BlockDimXOp,
NVVM::BlockDimYOp,
NVVM::BlockDimZOp,
NVVM::BlockIdXOp,
NVVM::BlockIdYOp,
NVVM::BlockIdZOp,
NVVM::GridDimXOp,
NVVM::GridDimYOp,
NVVM::GridDimZOp,
NVVM::LaneIdOp,
NVVM::MmaOp,
NVVM::ShflBflyOp,
NVVM::ThreadIdXOp,
NVVM::ThreadIdYOp,
NVVM::ThreadIdZOp,
NVVM::VoteBallotOp,
NVVM::WarpSizeOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// NVVM::Barrier0Op definitions
//===----------------------------------------------------------------------===//

Barrier0OpOperandAdaptor::Barrier0OpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> Barrier0OpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef Barrier0Op::getOperationName() {
  return "nvvm.barrier0";
}

Operation::operand_range Barrier0Op::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range Barrier0Op::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void Barrier0Op::build(Builder *tblgen_builder, OperationState &tblgen_state) {

}

void Barrier0Op::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void Barrier0Op::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult Barrier0Op::parse(OpAsmParser &parser, OperationState &result) {
  return success();
}

void Barrier0Op::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
}

LogicalResult Barrier0Op::verify() {
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


//===----------------------------------------------------------------------===//
// NVVM::BlockDimXOp definitions
//===----------------------------------------------------------------------===//

BlockDimXOpOperandAdaptor::BlockDimXOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockDimXOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockDimXOp::getOperationName() {
  return "nvvm.read.ptx.sreg.ntid.x";
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
  return parseNVVMSpecialRegisterOp(parser, result);
}

void BlockDimXOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
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
// NVVM::BlockDimYOp definitions
//===----------------------------------------------------------------------===//

BlockDimYOpOperandAdaptor::BlockDimYOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockDimYOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockDimYOp::getOperationName() {
  return "nvvm.read.ptx.sreg.ntid.y";
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
  return parseNVVMSpecialRegisterOp(parser, result);
}

void BlockDimYOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
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
// NVVM::BlockDimZOp definitions
//===----------------------------------------------------------------------===//

BlockDimZOpOperandAdaptor::BlockDimZOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockDimZOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockDimZOp::getOperationName() {
  return "nvvm.read.ptx.sreg.ntid.z";
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
  return parseNVVMSpecialRegisterOp(parser, result);
}

void BlockDimZOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
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
// NVVM::BlockIdXOp definitions
//===----------------------------------------------------------------------===//

BlockIdXOpOperandAdaptor::BlockIdXOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockIdXOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockIdXOp::getOperationName() {
  return "nvvm.read.ptx.sreg.ctaid.x";
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
  return parseNVVMSpecialRegisterOp(parser, result);
}

void BlockIdXOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
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
// NVVM::BlockIdYOp definitions
//===----------------------------------------------------------------------===//

BlockIdYOpOperandAdaptor::BlockIdYOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockIdYOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockIdYOp::getOperationName() {
  return "nvvm.read.ptx.sreg.ctaid.y";
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
  return parseNVVMSpecialRegisterOp(parser, result);
}

void BlockIdYOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
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
// NVVM::BlockIdZOp definitions
//===----------------------------------------------------------------------===//

BlockIdZOpOperandAdaptor::BlockIdZOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockIdZOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockIdZOp::getOperationName() {
  return "nvvm.read.ptx.sreg.ctaid.z";
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
  return parseNVVMSpecialRegisterOp(parser, result);
}

void BlockIdZOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
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
// NVVM::GridDimXOp definitions
//===----------------------------------------------------------------------===//

GridDimXOpOperandAdaptor::GridDimXOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GridDimXOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef GridDimXOp::getOperationName() {
  return "nvvm.read.ptx.sreg.nctaid.x";
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
  return parseNVVMSpecialRegisterOp(parser, result);
}

void GridDimXOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
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
// NVVM::GridDimYOp definitions
//===----------------------------------------------------------------------===//

GridDimYOpOperandAdaptor::GridDimYOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GridDimYOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef GridDimYOp::getOperationName() {
  return "nvvm.read.ptx.sreg.nctaid.y";
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
  return parseNVVMSpecialRegisterOp(parser, result);
}

void GridDimYOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
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
// NVVM::GridDimZOp definitions
//===----------------------------------------------------------------------===//

GridDimZOpOperandAdaptor::GridDimZOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GridDimZOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef GridDimZOp::getOperationName() {
  return "nvvm.read.ptx.sreg.nctaid.z";
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
  return parseNVVMSpecialRegisterOp(parser, result);
}

void GridDimZOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
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
// NVVM::LaneIdOp definitions
//===----------------------------------------------------------------------===//

LaneIdOpOperandAdaptor::LaneIdOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LaneIdOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef LaneIdOp::getOperationName() {
  return "nvvm.read.ptx.sreg.laneid";
}

Operation::operand_range LaneIdOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range LaneIdOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  LaneIdOp::res() {
  return *getODSResults(0).begin();
}

void LaneIdOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void LaneIdOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void LaneIdOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult LaneIdOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseNVVMSpecialRegisterOp(parser, result);
}

void LaneIdOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
}

LogicalResult LaneIdOp::verify() {
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
// NVVM::MmaOp definitions
//===----------------------------------------------------------------------===//

MmaOpOperandAdaptor::MmaOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> MmaOpOperandAdaptor::getODSOperands(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (tblgen_operands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(tblgen_operands.begin(), offset), std::next(tblgen_operands.begin(), offset + size)};
}

ArrayRef<Value> MmaOpOperandAdaptor::args() {
  return getODSOperands(0);
}

StringRef MmaOp::getOperationName() {
  return "nvvm.mma.sync";
}

Operation::operand_range MmaOp::getODSOperands(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->operand_begin(), offset), std::next(getOperation()->operand_begin(), offset + size)};
}

Operation::operand_range MmaOp::args() {
  return getODSOperands(0);
}

Operation::result_range MmaOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  MmaOp::res() {
  return *getODSResults(0).begin();
}

void MmaOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, ValueRange args) {
  tblgen_state.addOperands(args);
  tblgen_state.addTypes(res);
}

void MmaOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange args) {
  tblgen_state.addOperands(args);
  tblgen_state.addTypes(resultTypes);
}

void MmaOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult MmaOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseNVVMMmaOp(parser, result);
}

void MmaOp::print(OpAsmPrinter &p) {
  printNVVMMmaOp(p, *this);
}

LogicalResult MmaOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
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
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// NVVM::ShflBflyOp definitions
//===----------------------------------------------------------------------===//

ShflBflyOpOperandAdaptor::ShflBflyOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ShflBflyOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ShflBflyOpOperandAdaptor::dst() {
  return *getODSOperands(0).begin();
}

Value  ShflBflyOpOperandAdaptor::val() {
  return *getODSOperands(1).begin();
}

Value  ShflBflyOpOperandAdaptor::offset() {
  return *getODSOperands(2).begin();
}

Value  ShflBflyOpOperandAdaptor::mask_and_clamp() {
  return *getODSOperands(3).begin();
}

StringRef ShflBflyOp::getOperationName() {
  return "nvvm.shfl.sync.bfly";
}

Operation::operand_range ShflBflyOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ShflBflyOp::dst() {
  return *getODSOperands(0).begin();
}

Value  ShflBflyOp::val() {
  return *getODSOperands(1).begin();
}

Value  ShflBflyOp::offset() {
  return *getODSOperands(2).begin();
}

Value  ShflBflyOp::mask_and_clamp() {
  return *getODSOperands(3).begin();
}

Operation::result_range ShflBflyOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ShflBflyOp::res() {
  return *getODSResults(0).begin();
}

UnitAttr ShflBflyOp::return_value_and_is_validAttr() {
  return this->getAttr("return_value_and_is_valid").dyn_cast_or_null<UnitAttr>();
}

Optional<bool> ShflBflyOp::return_value_and_is_valid() {
  auto attr = return_value_and_is_validAttr();
  return attr ? Optional<bool>(attr != nullptr) : (llvm::None);
}

void ShflBflyOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value dst, Value val, Value offset, Value mask_and_clamp, /*optional*/UnitAttr return_value_and_is_valid) {
  tblgen_state.addOperands(dst);
  tblgen_state.addOperands(val);
  tblgen_state.addOperands(offset);
  tblgen_state.addOperands(mask_and_clamp);
  if (return_value_and_is_valid) {
  tblgen_state.addAttribute("return_value_and_is_valid", return_value_and_is_valid);
  }
  tblgen_state.addTypes(res);
}

void ShflBflyOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value dst, Value val, Value offset, Value mask_and_clamp, /*optional*/UnitAttr return_value_and_is_valid) {
  tblgen_state.addOperands(dst);
  tblgen_state.addOperands(val);
  tblgen_state.addOperands(offset);
  tblgen_state.addOperands(mask_and_clamp);
  if (return_value_and_is_valid) {
  tblgen_state.addAttribute("return_value_and_is_valid", return_value_and_is_valid);
  }
  tblgen_state.addTypes(resultTypes);
}

void ShflBflyOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ShflBflyOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseNVVMShflSyncBflyOp(parser, result);
}

void ShflBflyOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
}

LogicalResult ShflBflyOp::verify() {
  auto tblgen_return_value_and_is_valid = this->getAttr("return_value_and_is_valid");
  if (tblgen_return_value_and_is_valid) {
    if (!((tblgen_return_value_and_is_valid.isa<UnitAttr>()))) return emitOpError("attribute 'return_value_and_is_valid' failed to satisfy constraint: unit attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(3)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
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
  if (!getAttrOfType<UnitAttr>("return_value_and_is_valid"))
      return success();
    auto type = getType().cast<LLVM::LLVMType>();
    if (!type.isStructTy() || type.getStructNumElements() != 2 ||
        !type.getStructElementType(1).isIntegerTy(
            /*Bitwidth=*/1))
      return emitError("expected return type !llvm<\"{ ?, i1 }\">");
    return success();
}


//===----------------------------------------------------------------------===//
// NVVM::ThreadIdXOp definitions
//===----------------------------------------------------------------------===//

ThreadIdXOpOperandAdaptor::ThreadIdXOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ThreadIdXOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ThreadIdXOp::getOperationName() {
  return "nvvm.read.ptx.sreg.tid.x";
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
  return parseNVVMSpecialRegisterOp(parser, result);
}

void ThreadIdXOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
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
// NVVM::ThreadIdYOp definitions
//===----------------------------------------------------------------------===//

ThreadIdYOpOperandAdaptor::ThreadIdYOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ThreadIdYOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ThreadIdYOp::getOperationName() {
  return "nvvm.read.ptx.sreg.tid.y";
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
  return parseNVVMSpecialRegisterOp(parser, result);
}

void ThreadIdYOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
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
// NVVM::ThreadIdZOp definitions
//===----------------------------------------------------------------------===//

ThreadIdZOpOperandAdaptor::ThreadIdZOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ThreadIdZOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ThreadIdZOp::getOperationName() {
  return "nvvm.read.ptx.sreg.tid.z";
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
  return parseNVVMSpecialRegisterOp(parser, result);
}

void ThreadIdZOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
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


//===----------------------------------------------------------------------===//
// NVVM::VoteBallotOp definitions
//===----------------------------------------------------------------------===//

VoteBallotOpOperandAdaptor::VoteBallotOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> VoteBallotOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  VoteBallotOpOperandAdaptor::mask() {
  return *getODSOperands(0).begin();
}

Value  VoteBallotOpOperandAdaptor::pred() {
  return *getODSOperands(1).begin();
}

StringRef VoteBallotOp::getOperationName() {
  return "nvvm.vote.ballot.sync";
}

Operation::operand_range VoteBallotOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  VoteBallotOp::mask() {
  return *getODSOperands(0).begin();
}

Value  VoteBallotOp::pred() {
  return *getODSOperands(1).begin();
}

Operation::result_range VoteBallotOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  VoteBallotOp::res() {
  return *getODSResults(0).begin();
}

void VoteBallotOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value mask, Value pred) {
  tblgen_state.addOperands(mask);
  tblgen_state.addOperands(pred);
  tblgen_state.addTypes(res);
}

void VoteBallotOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value mask, Value pred) {
  tblgen_state.addOperands(mask);
  tblgen_state.addOperands(pred);
  tblgen_state.addTypes(resultTypes);
}

void VoteBallotOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult VoteBallotOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseNVVMVoteBallotOp(parser, result);
}

void VoteBallotOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
}

LogicalResult VoteBallotOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
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
// NVVM::WarpSizeOp definitions
//===----------------------------------------------------------------------===//

WarpSizeOpOperandAdaptor::WarpSizeOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> WarpSizeOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef WarpSizeOp::getOperationName() {
  return "nvvm.read.ptx.sreg.warpsize";
}

Operation::operand_range WarpSizeOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range WarpSizeOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  WarpSizeOp::res() {
  return *getODSResults(0).begin();
}

void WarpSizeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void WarpSizeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void WarpSizeOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult WarpSizeOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseNVVMSpecialRegisterOp(parser, result);
}

void WarpSizeOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
}

LogicalResult WarpSizeOp::verify() {
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

