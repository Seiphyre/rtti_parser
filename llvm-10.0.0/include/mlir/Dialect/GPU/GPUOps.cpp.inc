/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

gpu::AllReduceOp,
gpu::BarrierOp,
gpu::BlockDimOp,
gpu::BlockIdOp,
gpu::GPUFuncOp,
gpu::GridDimOp,
gpu::LaunchFuncOp,
gpu::LaunchOp,
gpu::ReturnOp,
gpu::ShuffleOp,
gpu::ThreadIdOp,
gpu::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// gpu::AllReduceOp definitions
//===----------------------------------------------------------------------===//

AllReduceOpOperandAdaptor::AllReduceOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AllReduceOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AllReduceOpOperandAdaptor::value() {
  return *getODSOperands(0).begin();
}

StringRef AllReduceOp::getOperationName() {
  return "gpu.all_reduce";
}

Operation::operand_range AllReduceOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AllReduceOp::value() {
  return *getODSOperands(0).begin();
}

Operation::result_range AllReduceOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Region &AllReduceOp::body() {
  return this->getOperation()->getRegion(0);
}

StringAttr AllReduceOp::opAttr() {
  return this->getAttr("op").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > AllReduceOp::op() {
  auto attr = opAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

void AllReduceOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value value, /*optional*/StringAttr op) {
  tblgen_state.addOperands(value);
  if (op) {
  tblgen_state.addAttribute("op", op);
  }
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(resultType0);
}

void AllReduceOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value, /*optional*/StringAttr op) {
  tblgen_state.addOperands(value);
  if (op) {
  tblgen_state.addAttribute("op", op);
  }
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(resultTypes);
}

void AllReduceOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  (void)tblgen_state.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void AllReduceOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value value, /*optional*/StringAttr op) {
  tblgen_state.addOperands(value);
  if (op) {
  tblgen_state.addAttribute("op", op);
  }
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes({value.getType()});

}

void AllReduceOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult AllReduceOp::verify() {
  auto tblgen_op = this->getAttr("op");
  if (tblgen_op) {
    if (!(((tblgen_op.isa<StringAttr>())) && (((tblgen_op.cast<StringAttr>().getValue() == "add")) || ((tblgen_op.cast<StringAttr>().getValue() == "mul"))))) return emitOpError("attribute 'op' failed to satisfy constraint: built-in reduction operations supported by gpu.allreduce.");
  }
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
  if (!((true))) {
    return emitOpError("region #0 ('body') failed to verify constraint: any region");
  }
  return ::verifyAllReduce(*this);
}


//===----------------------------------------------------------------------===//
// gpu::BarrierOp definitions
//===----------------------------------------------------------------------===//

BarrierOpOperandAdaptor::BarrierOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BarrierOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BarrierOp::getOperationName() {
  return "gpu.barrier";
}

Operation::operand_range BarrierOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range BarrierOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void BarrierOp::build(Builder *tblgen_builder, OperationState &tblgen_state) {

}

void BarrierOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void BarrierOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BarrierOp::parse(OpAsmParser &parser, OperationState &result) {
  return success();
}

void BarrierOp::print(OpAsmPrinter &p) {
  p << getOperationName();
}

LogicalResult BarrierOp::verify() {
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
// gpu::BlockDimOp definitions
//===----------------------------------------------------------------------===//

BlockDimOpOperandAdaptor::BlockDimOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockDimOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockDimOp::getOperationName() {
  return "gpu.block_dim";
}

Operation::operand_range BlockDimOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range BlockDimOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

StringAttr BlockDimOp::dimensionAttr() {
  return this->getAttr("dimension").cast<StringAttr>();
}

StringRef BlockDimOp::dimension() {
  auto attr = dimensionAttr();
  return attr.getValue();
}

void BlockDimOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringAttr dimension) {
  tblgen_state.addAttribute("dimension", dimension);
  tblgen_state.addTypes(resultType0);
}

void BlockDimOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringAttr dimension) {
  tblgen_state.addAttribute("dimension", dimension);
  tblgen_state.addTypes(resultTypes);
}

void BlockDimOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringRef dimension) {
  tblgen_state.addAttribute("dimension", (*tblgen_builder).getStringAttr("dimension"));
  tblgen_state.addTypes(resultType0);
}

void BlockDimOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef dimension) {
  tblgen_state.addAttribute("dimension", (*tblgen_builder).getStringAttr("dimension"));
  tblgen_state.addTypes(resultTypes);
}

void BlockDimOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult BlockDimOp::verify() {
  auto tblgen_dimension = this->getAttr("dimension");
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");
  {
    if (!((tblgen_dimension.isa<StringAttr>()))) return emitOpError("attribute 'dimension' failed to satisfy constraint: string attribute");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("result #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyIndexOp(*this);
}


//===----------------------------------------------------------------------===//
// gpu::BlockIdOp definitions
//===----------------------------------------------------------------------===//

BlockIdOpOperandAdaptor::BlockIdOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BlockIdOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef BlockIdOp::getOperationName() {
  return "gpu.block_id";
}

Operation::operand_range BlockIdOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range BlockIdOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

StringAttr BlockIdOp::dimensionAttr() {
  return this->getAttr("dimension").cast<StringAttr>();
}

StringRef BlockIdOp::dimension() {
  auto attr = dimensionAttr();
  return attr.getValue();
}

void BlockIdOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringAttr dimension) {
  tblgen_state.addAttribute("dimension", dimension);
  tblgen_state.addTypes(resultType0);
}

void BlockIdOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringAttr dimension) {
  tblgen_state.addAttribute("dimension", dimension);
  tblgen_state.addTypes(resultTypes);
}

void BlockIdOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringRef dimension) {
  tblgen_state.addAttribute("dimension", (*tblgen_builder).getStringAttr("dimension"));
  tblgen_state.addTypes(resultType0);
}

void BlockIdOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef dimension) {
  tblgen_state.addAttribute("dimension", (*tblgen_builder).getStringAttr("dimension"));
  tblgen_state.addTypes(resultTypes);
}

void BlockIdOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult BlockIdOp::verify() {
  auto tblgen_dimension = this->getAttr("dimension");
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");
  {
    if (!((tblgen_dimension.isa<StringAttr>()))) return emitOpError("attribute 'dimension' failed to satisfy constraint: string attribute");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("result #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyIndexOp(*this);
}


//===----------------------------------------------------------------------===//
// gpu::GPUFuncOp definitions
//===----------------------------------------------------------------------===//

GPUFuncOpOperandAdaptor::GPUFuncOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GPUFuncOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef GPUFuncOp::getOperationName() {
  return "gpu.func";
}

Operation::operand_range GPUFuncOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range GPUFuncOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Region &GPUFuncOp::body() {
  return this->getOperation()->getRegion(0);
}



ParseResult GPUFuncOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseGPUFuncOp(parser, result);
}

void GPUFuncOp::print(OpAsmPrinter &p) {
  printGPUFuncOp(p, *this);
}

LogicalResult GPUFuncOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 1) {
    return emitOpError("has incorrect number of regions: expected 1 but found ") << this->getOperation()->getNumRegions();
  }
  if (!((true))) {
    return emitOpError("region #0 ('body') failed to verify constraint: any region");
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// gpu::GridDimOp definitions
//===----------------------------------------------------------------------===//

GridDimOpOperandAdaptor::GridDimOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GridDimOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef GridDimOp::getOperationName() {
  return "gpu.grid_dim";
}

Operation::operand_range GridDimOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range GridDimOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

StringAttr GridDimOp::dimensionAttr() {
  return this->getAttr("dimension").cast<StringAttr>();
}

StringRef GridDimOp::dimension() {
  auto attr = dimensionAttr();
  return attr.getValue();
}

void GridDimOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringAttr dimension) {
  tblgen_state.addAttribute("dimension", dimension);
  tblgen_state.addTypes(resultType0);
}

void GridDimOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringAttr dimension) {
  tblgen_state.addAttribute("dimension", dimension);
  tblgen_state.addTypes(resultTypes);
}

void GridDimOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringRef dimension) {
  tblgen_state.addAttribute("dimension", (*tblgen_builder).getStringAttr("dimension"));
  tblgen_state.addTypes(resultType0);
}

void GridDimOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef dimension) {
  tblgen_state.addAttribute("dimension", (*tblgen_builder).getStringAttr("dimension"));
  tblgen_state.addTypes(resultTypes);
}

void GridDimOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult GridDimOp::verify() {
  auto tblgen_dimension = this->getAttr("dimension");
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");
  {
    if (!((tblgen_dimension.isa<StringAttr>()))) return emitOpError("attribute 'dimension' failed to satisfy constraint: string attribute");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("result #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyIndexOp(*this);
}


//===----------------------------------------------------------------------===//
// gpu::LaunchFuncOp definitions
//===----------------------------------------------------------------------===//

LaunchFuncOpOperandAdaptor::LaunchFuncOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LaunchFuncOpOperandAdaptor::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, false, false, false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (tblgen_operands.size() - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(tblgen_operands.begin(), offset), std::next(tblgen_operands.begin(), offset + size)};
}

Value  LaunchFuncOpOperandAdaptor::gridSizeX() {
  return *getODSOperands(0).begin();
}

Value  LaunchFuncOpOperandAdaptor::gridSizeY() {
  return *getODSOperands(1).begin();
}

Value  LaunchFuncOpOperandAdaptor::gridSizeZ() {
  return *getODSOperands(2).begin();
}

Value  LaunchFuncOpOperandAdaptor::blockSizeX() {
  return *getODSOperands(3).begin();
}

Value  LaunchFuncOpOperandAdaptor::blockSizeY() {
  return *getODSOperands(4).begin();
}

Value  LaunchFuncOpOperandAdaptor::blockSizeZ() {
  return *getODSOperands(5).begin();
}

ArrayRef<Value> LaunchFuncOpOperandAdaptor::operands() {
  return getODSOperands(6);
}

StringRef LaunchFuncOp::getOperationName() {
  return "gpu.launch_func";
}

Operation::operand_range LaunchFuncOp::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, false, false, false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->operand_begin(), offset), std::next(getOperation()->operand_begin(), offset + size)};
}

Value  LaunchFuncOp::gridSizeX() {
  return *getODSOperands(0).begin();
}

Value  LaunchFuncOp::gridSizeY() {
  return *getODSOperands(1).begin();
}

Value  LaunchFuncOp::gridSizeZ() {
  return *getODSOperands(2).begin();
}

Value  LaunchFuncOp::blockSizeX() {
  return *getODSOperands(3).begin();
}

Value  LaunchFuncOp::blockSizeY() {
  return *getODSOperands(4).begin();
}

Value  LaunchFuncOp::blockSizeZ() {
  return *getODSOperands(5).begin();
}

Operation::operand_range LaunchFuncOp::operands() {
  return getODSOperands(6);
}

Operation::result_range LaunchFuncOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}





LogicalResult LaunchFuncOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<::mlir::LLVM::LLVMType>())) && ((v.getType().cast<::mlir::LLVM::LLVMType>().isIntegerTy()))))) {
        return emitOpError("operand #") << index << " must be integer, index or LLVM dialect equivalent, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<::mlir::LLVM::LLVMType>())) && ((v.getType().cast<::mlir::LLVM::LLVMType>().isIntegerTy()))))) {
        return emitOpError("operand #") << index << " must be integer, index or LLVM dialect equivalent, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<::mlir::LLVM::LLVMType>())) && ((v.getType().cast<::mlir::LLVM::LLVMType>().isIntegerTy()))))) {
        return emitOpError("operand #") << index << " must be integer, index or LLVM dialect equivalent, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(3)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<::mlir::LLVM::LLVMType>())) && ((v.getType().cast<::mlir::LLVM::LLVMType>().isIntegerTy()))))) {
        return emitOpError("operand #") << index << " must be integer, index or LLVM dialect equivalent, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(4)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<::mlir::LLVM::LLVMType>())) && ((v.getType().cast<::mlir::LLVM::LLVMType>().isIntegerTy()))))) {
        return emitOpError("operand #") << index << " must be integer, index or LLVM dialect equivalent, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(5)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<::mlir::LLVM::LLVMType>())) && ((v.getType().cast<::mlir::LLVM::LLVMType>().isIntegerTy()))))) {
        return emitOpError("operand #") << index << " must be integer, index or LLVM dialect equivalent, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(6)) {
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
// gpu::LaunchOp definitions
//===----------------------------------------------------------------------===//

LaunchOpOperandAdaptor::LaunchOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LaunchOpOperandAdaptor::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, false, false, false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (tblgen_operands.size() - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(tblgen_operands.begin(), offset), std::next(tblgen_operands.begin(), offset + size)};
}

Value  LaunchOpOperandAdaptor::gridSizeX() {
  return *getODSOperands(0).begin();
}

Value  LaunchOpOperandAdaptor::gridSizeY() {
  return *getODSOperands(1).begin();
}

Value  LaunchOpOperandAdaptor::gridSizeZ() {
  return *getODSOperands(2).begin();
}

Value  LaunchOpOperandAdaptor::blockSizeX() {
  return *getODSOperands(3).begin();
}

Value  LaunchOpOperandAdaptor::blockSizeY() {
  return *getODSOperands(4).begin();
}

Value  LaunchOpOperandAdaptor::blockSizeZ() {
  return *getODSOperands(5).begin();
}

ArrayRef<Value> LaunchOpOperandAdaptor::operands() {
  return getODSOperands(6);
}

StringRef LaunchOp::getOperationName() {
  return "gpu.launch";
}

Operation::operand_range LaunchOp::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, false, false, false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->operand_begin(), offset), std::next(getOperation()->operand_begin(), offset + size)};
}

Value  LaunchOp::gridSizeX() {
  return *getODSOperands(0).begin();
}

Value  LaunchOp::gridSizeY() {
  return *getODSOperands(1).begin();
}

Value  LaunchOp::gridSizeZ() {
  return *getODSOperands(2).begin();
}

Value  LaunchOp::blockSizeX() {
  return *getODSOperands(3).begin();
}

Value  LaunchOp::blockSizeY() {
  return *getODSOperands(4).begin();
}

Value  LaunchOp::blockSizeZ() {
  return *getODSOperands(5).begin();
}

Operation::operand_range LaunchOp::operands() {
  return getODSOperands(6);
}

Operation::result_range LaunchOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Region &LaunchOp::body() {
  return this->getOperation()->getRegion(0);
}



ParseResult LaunchOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseLaunchOp(parser, result);
}

void LaunchOp::print(OpAsmPrinter &p) {
  printLaunchOp(p, *this);
}

LogicalResult LaunchOp::verify() {
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
    for (Value v : getODSOperands(3)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(4)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(5)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(6)) {
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
  if (!((true))) {
    return emitOpError("region #0 ('body') failed to verify constraint: any region");
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// gpu::ReturnOp definitions
//===----------------------------------------------------------------------===//

ReturnOpOperandAdaptor::ReturnOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ReturnOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ReturnOp::getOperationName() {
  return "gpu.return";
}

Operation::operand_range ReturnOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ReturnOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ReturnOp::build(Builder *tblgen_builder, OperationState &tblgen_state) {

}

void ReturnOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void ReturnOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ReturnOp::parse(OpAsmParser &parser, OperationState &result) {
  return success();
}

void ReturnOp::print(OpAsmPrinter &p) {
  p << getOperationName();
}

LogicalResult ReturnOp::verify() {
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
// gpu::ShuffleOp definitions
//===----------------------------------------------------------------------===//

ShuffleOpOperandAdaptor::ShuffleOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ShuffleOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ShuffleOpOperandAdaptor::value() {
  return *getODSOperands(0).begin();
}

Value  ShuffleOpOperandAdaptor::offset() {
  return *getODSOperands(1).begin();
}

Value  ShuffleOpOperandAdaptor::width() {
  return *getODSOperands(2).begin();
}

void ShuffleOp::getAsmResultNames(OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!llvm::empty(resultGroup0))
    setNameFn(*resultGroup0.begin(), "result");
  auto resultGroup1 = getODSResults(1);
  if (!llvm::empty(resultGroup1))
    setNameFn(*resultGroup1.begin(), "valid");
}

StringRef ShuffleOp::getOperationName() {
  return "gpu.shuffle";
}

Operation::operand_range ShuffleOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ShuffleOp::value() {
  return *getODSOperands(0).begin();
}

Value  ShuffleOp::offset() {
  return *getODSOperands(1).begin();
}

Value  ShuffleOp::width() {
  return *getODSOperands(2).begin();
}

Operation::result_range ShuffleOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ShuffleOp::result() {
  return *getODSResults(0).begin();
}

Value  ShuffleOp::valid() {
  return *getODSResults(1).begin();
}

StringAttr ShuffleOp::modeAttr() {
  return this->getAttr("mode").cast<StringAttr>();
}

StringRef ShuffleOp::mode() {
  auto attr = modeAttr();
  return attr.getValue();
}

void ShuffleOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Type valid, Value value, Value offset, Value width, StringAttr mode) {
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(offset);
  tblgen_state.addOperands(width);
  tblgen_state.addAttribute("mode", mode);
  tblgen_state.addTypes(result);
  tblgen_state.addTypes(valid);
}

void ShuffleOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value, Value offset, Value width, StringAttr mode) {
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(offset);
  tblgen_state.addOperands(width);
  tblgen_state.addAttribute("mode", mode);
  tblgen_state.addTypes(resultTypes);
}

void ShuffleOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Type valid, Value value, Value offset, Value width, StringRef mode) {
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(offset);
  tblgen_state.addOperands(width);
  tblgen_state.addAttribute("mode", (*tblgen_builder).getStringAttr("mode"));
  tblgen_state.addTypes(result);
  tblgen_state.addTypes(valid);
}

void ShuffleOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value, Value offset, Value width, StringRef mode) {
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(offset);
  tblgen_state.addOperands(width);
  tblgen_state.addAttribute("mode", (*tblgen_builder).getStringAttr("mode"));
  tblgen_state.addTypes(resultTypes);
}

void ShuffleOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ShuffleOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseShuffleOp(parser, result);
}

void ShuffleOp::print(OpAsmPrinter &p) {
  printShuffleOp(p, *this);
}

LogicalResult ShuffleOp::verify() {
  auto tblgen_mode = this->getAttr("mode");
  if (!tblgen_mode) return emitOpError("requires attribute 'mode'");
  {
    if (!(((tblgen_mode.isa<StringAttr>())) && ((tblgen_mode.cast<StringAttr>().getValue() == "xor")))) return emitOpError("attribute 'mode' failed to satisfy constraint: Indexing modes supported by gpu.shuffle.");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((v.getType().isInteger(32)))) {
        return emitOpError("operand #") << index << " must be 32-bit integer, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!((v.getType().isInteger(32)))) {
        return emitOpError("operand #") << index << " must be 32-bit integer, but got " << v.getType();
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
    for (Value v : getODSResults(1)) {
      (void)v;
      if (!((v.getType().isInteger(1)))) {
        return emitOpError("result #") << index << " must be 1-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyShuffleOp(*this);
}


//===----------------------------------------------------------------------===//
// gpu::ThreadIdOp definitions
//===----------------------------------------------------------------------===//

ThreadIdOpOperandAdaptor::ThreadIdOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ThreadIdOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ThreadIdOp::getOperationName() {
  return "gpu.thread_id";
}

Operation::operand_range ThreadIdOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ThreadIdOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

StringAttr ThreadIdOp::dimensionAttr() {
  return this->getAttr("dimension").cast<StringAttr>();
}

StringRef ThreadIdOp::dimension() {
  auto attr = dimensionAttr();
  return attr.getValue();
}

void ThreadIdOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringAttr dimension) {
  tblgen_state.addAttribute("dimension", dimension);
  tblgen_state.addTypes(resultType0);
}

void ThreadIdOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringAttr dimension) {
  tblgen_state.addAttribute("dimension", dimension);
  tblgen_state.addTypes(resultTypes);
}

void ThreadIdOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringRef dimension) {
  tblgen_state.addAttribute("dimension", (*tblgen_builder).getStringAttr("dimension"));
  tblgen_state.addTypes(resultType0);
}

void ThreadIdOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef dimension) {
  tblgen_state.addAttribute("dimension", (*tblgen_builder).getStringAttr("dimension"));
  tblgen_state.addTypes(resultTypes);
}

void ThreadIdOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult ThreadIdOp::verify() {
  auto tblgen_dimension = this->getAttr("dimension");
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");
  {
    if (!((tblgen_dimension.isa<StringAttr>()))) return emitOpError("attribute 'dimension' failed to satisfy constraint: string attribute");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("result #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyIndexOp(*this);
}


//===----------------------------------------------------------------------===//
// gpu::YieldOp definitions
//===----------------------------------------------------------------------===//

YieldOpOperandAdaptor::YieldOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> YieldOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> YieldOpOperandAdaptor::values() {
  return getODSOperands(0);
}

StringRef YieldOp::getOperationName() {
  return "gpu.yield";
}

Operation::operand_range YieldOp::getODSOperands(unsigned index) {
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

Operation::operand_range YieldOp::values() {
  return getODSOperands(0);
}

Operation::result_range YieldOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void YieldOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange values) {
  tblgen_state.addOperands(values);
}

void YieldOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange values) {
  tblgen_state.addOperands(values);
  tblgen_state.addTypes(resultTypes);
}

void YieldOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult YieldOp::verify() {
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
  return mlir::success();
}


#endif  // GET_OP_CLASSES

