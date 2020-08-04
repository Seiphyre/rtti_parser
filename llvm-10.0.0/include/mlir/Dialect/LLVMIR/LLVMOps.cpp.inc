/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

LLVM::AShrOp,
LLVM::AddOp,
LLVM::AddrSpaceCastOp,
LLVM::AddressOfOp,
LLVM::AllocaOp,
LLVM::AndOp,
LLVM::BitcastOp,
LLVM::BrOp,
LLVM::CallOp,
LLVM::CondBrOp,
LLVM::ConstantOp,
LLVM::CopySignOp,
LLVM::CosOp,
LLVM::ExpOp,
LLVM::ExtractElementOp,
LLVM::ExtractValueOp,
LLVM::FAbsOp,
LLVM::FAddOp,
LLVM::FCeilOp,
LLVM::FCmpOp,
LLVM::FDivOp,
LLVM::FMulAddOp,
LLVM::FMulOp,
LLVM::FNegOp,
LLVM::FPExtOp,
LLVM::FPToSIOp,
LLVM::FPToUIOp,
LLVM::FPTruncOp,
LLVM::FRemOp,
LLVM::FSubOp,
LLVM::GEPOp,
LLVM::GlobalOp,
LLVM::ICmpOp,
LLVM::InsertElementOp,
LLVM::InsertValueOp,
LLVM::IntToPtrOp,
LLVM::LLVMFuncOp,
LLVM::LShrOp,
LLVM::LoadOp,
LLVM::Log10Op,
LLVM::Log2Op,
LLVM::LogOp,
LLVM::MulOp,
LLVM::NullOp,
LLVM::OrOp,
LLVM::Prefetch,
LLVM::PtrToIntOp,
LLVM::ReturnOp,
LLVM::SDivOp,
LLVM::SExtOp,
LLVM::SIToFPOp,
LLVM::SRemOp,
LLVM::SelectOp,
LLVM::ShlOp,
LLVM::ShuffleVectorOp,
LLVM::StoreOp,
LLVM::SubOp,
LLVM::TruncOp,
LLVM::UDivOp,
LLVM::UIToFPOp,
LLVM::URemOp,
LLVM::UndefOp,
LLVM::UnreachableOp,
LLVM::XOrOp,
LLVM::ZExtOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// LLVM::AShrOp definitions
//===----------------------------------------------------------------------===//

AShrOpOperandAdaptor::AShrOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AShrOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AShrOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  AShrOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef AShrOp::getOperationName() {
  return "llvm.ashr";
}

Operation::operand_range AShrOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AShrOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  AShrOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range AShrOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AShrOp::res() {
  return *getODSResults(0).begin();
}

void AShrOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void AShrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void AShrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void AShrOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void AShrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void AShrOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult AShrOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void AShrOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult AShrOp::verify() {
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
// LLVM::AddOp definitions
//===----------------------------------------------------------------------===//

AddOpOperandAdaptor::AddOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AddOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AddOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  AddOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef AddOp::getOperationName() {
  return "llvm.add";
}

Operation::operand_range AddOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AddOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  AddOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range AddOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AddOp::res() {
  return *getODSResults(0).begin();
}

void AddOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void AddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void AddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void AddOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void AddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void AddOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult AddOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void AddOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult AddOp::verify() {
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
// LLVM::AddrSpaceCastOp definitions
//===----------------------------------------------------------------------===//

AddrSpaceCastOpOperandAdaptor::AddrSpaceCastOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AddrSpaceCastOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AddrSpaceCastOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef AddrSpaceCastOp::getOperationName() {
  return "llvm.addrspacecast";
}

Operation::operand_range AddrSpaceCastOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AddrSpaceCastOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range AddrSpaceCastOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AddrSpaceCastOp::res() {
  return *getODSResults(0).begin();
}

void AddrSpaceCastOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void AddrSpaceCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(res);
}

void AddrSpaceCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void AddrSpaceCastOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AddrSpaceCastOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void AddrSpaceCastOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult AddrSpaceCastOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::AddressOfOp definitions
//===----------------------------------------------------------------------===//

AddressOfOpOperandAdaptor::AddressOfOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AddressOfOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef AddressOfOp::getOperationName() {
  return "llvm.mlir.addressof";
}

Operation::operand_range AddressOfOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range AddressOfOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AddressOfOp::res() {
  return *getODSResults(0).begin();
}

FlatSymbolRefAttr AddressOfOp::global_nameAttr() {
  return this->getAttr("global_name").cast<FlatSymbolRefAttr>();
}

StringRef AddressOfOp::global_name() {
  auto attr = global_nameAttr();
  return attr.getValue();
}

void AddressOfOp::build(Builder *builder, OperationState &result, LLVMType resType, StringRef name, ArrayRef<NamedAttribute> attrs ) {
      result.addAttribute("global_name", builder->getSymbolRefAttr(name));
      result.addAttributes(attrs);
      result.addTypes(resType);
}

void AddressOfOp::build(Builder *builder, OperationState &result, GlobalOp global, ArrayRef<NamedAttribute> attrs ) {
      build(builder, result,
            global.getType().getPointerTo(global.addr_space().getZExtValue()),
            global.sym_name(), attrs);
}

void AddressOfOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, FlatSymbolRefAttr global_name) {
  tblgen_state.addAttribute("global_name", global_name);
  tblgen_state.addTypes(res);
}

void AddressOfOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, FlatSymbolRefAttr global_name) {
  tblgen_state.addAttribute("global_name", global_name);
  tblgen_state.addTypes(resultTypes);
}

void AddressOfOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, StringRef global_name) {
  tblgen_state.addAttribute("global_name", (*tblgen_builder).getSymbolRefAttr(global_name));
  tblgen_state.addTypes(res);
}

void AddressOfOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef global_name) {
  tblgen_state.addAttribute("global_name", (*tblgen_builder).getSymbolRefAttr(global_name));
  tblgen_state.addTypes(resultTypes);
}

void AddressOfOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AddressOfOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseAddressOfOp(parser, result);
}

void AddressOfOp::print(OpAsmPrinter &p) {
  printAddressOfOp(p, *this);
}

LogicalResult AddressOfOp::verify() {
  auto tblgen_global_name = this->getAttr("global_name");
  if (!tblgen_global_name) return emitOpError("requires attribute 'global_name'");
  {
    if (!((tblgen_global_name.isa<FlatSymbolRefAttr>()))) return emitOpError("attribute 'global_name' failed to satisfy constraint: flat symbol reference attribute");
  }
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
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// LLVM::AllocaOp definitions
//===----------------------------------------------------------------------===//

AllocaOpOperandAdaptor::AllocaOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AllocaOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AllocaOpOperandAdaptor::arraySize() {
  return *getODSOperands(0).begin();
}

StringRef AllocaOp::getOperationName() {
  return "llvm.alloca";
}

Operation::operand_range AllocaOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AllocaOp::arraySize() {
  return *getODSOperands(0).begin();
}

Operation::result_range AllocaOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AllocaOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr AllocaOp::alignmentAttr() {
  return this->getAttr("alignment").dyn_cast_or_null<IntegerAttr>();
}

Optional< APInt > AllocaOp::alignment() {
  auto attr = alignmentAttr();
  return attr ? Optional< APInt >(attr.getValue()) : (llvm::None);
}

void AllocaOp::build(Builder *b, OperationState &result, Type resultType, Value arraySize, unsigned alignment) {
      if (alignment == 0)
        return build(b, result, resultType, arraySize, IntegerAttr());
      build(b, result, resultType, arraySize, b->getI64IntegerAttr(alignment));
  
}

void AllocaOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arraySize, /*optional*/IntegerAttr alignment) {
  tblgen_state.addOperands(arraySize);
  if (alignment) {
  tblgen_state.addAttribute("alignment", alignment);
  }
  tblgen_state.addTypes(res);
}

void AllocaOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arraySize, /*optional*/IntegerAttr alignment) {
  tblgen_state.addOperands(arraySize);
  if (alignment) {
  tblgen_state.addAttribute("alignment", alignment);
  }
  tblgen_state.addTypes(resultTypes);
}

void AllocaOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AllocaOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseAllocaOp(parser, result);
}

void AllocaOp::print(OpAsmPrinter &p) {
  printAllocaOp(p, *this);
}

LogicalResult AllocaOp::verify() {
  auto tblgen_alignment = this->getAttr("alignment");
  if (tblgen_alignment) {
    if (!(((tblgen_alignment.isa<IntegerAttr>())) && ((tblgen_alignment.cast<IntegerAttr>().getType().isInteger(64))))) return emitOpError("attribute 'alignment' failed to satisfy constraint: 64-bit integer attribute");
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
  if (alignment().hasValue()) {
      auto align = alignment().getValue().getSExtValue();
      if (align < 0)
        return emitOpError("expected positive alignment");
    }
    return success();
}


//===----------------------------------------------------------------------===//
// LLVM::AndOp definitions
//===----------------------------------------------------------------------===//

AndOpOperandAdaptor::AndOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AndOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AndOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  AndOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef AndOp::getOperationName() {
  return "llvm.and";
}

Operation::operand_range AndOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AndOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  AndOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range AndOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AndOp::res() {
  return *getODSResults(0).begin();
}

void AndOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void AndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void AndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void AndOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void AndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void AndOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult AndOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void AndOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult AndOp::verify() {
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
// LLVM::BitcastOp definitions
//===----------------------------------------------------------------------===//

BitcastOpOperandAdaptor::BitcastOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BitcastOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  BitcastOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef BitcastOp::getOperationName() {
  return "llvm.bitcast";
}

Operation::operand_range BitcastOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  BitcastOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range BitcastOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BitcastOp::res() {
  return *getODSResults(0).begin();
}

void BitcastOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void BitcastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(res);
}

void BitcastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void BitcastOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BitcastOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void BitcastOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult BitcastOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::BrOp definitions
//===----------------------------------------------------------------------===//

BrOpOperandAdaptor::BrOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BrOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> BrOpOperandAdaptor::args() {
  return getODSOperands(0);
}

StringRef BrOp::getOperationName() {
  return "llvm.br";
}

Operation::operand_range BrOp::getODSOperands(unsigned index) {
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

Operation::operand_range BrOp::args() {
  return getODSOperands(0);
}

Operation::result_range BrOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void BrOp::build(Builder *, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<ValueRange> operands, ArrayRef<NamedAttribute> attributes ) {
        result.addOperands(properOperands);
        for (auto kvp : llvm::zip(destinations, operands)) {
          result.addSuccessor(std::get<0>(kvp), std::get<1>(kvp));
        }
        for (auto namedAttr : attributes) {
          result.addAttribute(namedAttr.first, namedAttr.second);
        }
      
}

void BrOp::build(Builder *builder, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<NamedAttribute> attributes ) {
        SmallVector<ValueRange, 2> operands(destinations.size(), {});
        build(builder, result, properOperands,
            destinations, operands, attributes);
      
}

void BrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange args) {
  tblgen_state.addOperands(args);
}

void BrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange args) {
  tblgen_state.addOperands(args);
  tblgen_state.addTypes(resultTypes);
}

void BrOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BrOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseBrOp(parser, result);
}

void BrOp::print(OpAsmPrinter &p) {
  printBrOp(p, *this);
}

LogicalResult BrOp::verify() {
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
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::CallOp definitions
//===----------------------------------------------------------------------===//

CallOpOperandAdaptor::CallOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CallOpOperandAdaptor::getODSOperands(unsigned index) {
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

StringRef CallOp::getOperationName() {
  return "llvm.call";
}

Operation::operand_range CallOp::getODSOperands(unsigned index) {
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

Operation::result_range CallOp::getODSResults(unsigned index) {
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

FlatSymbolRefAttr CallOp::calleeAttr() {
  return this->getAttr("callee").dyn_cast_or_null<FlatSymbolRefAttr>();
}

Optional< StringRef > CallOp::callee() {
  auto attr = calleeAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

void CallOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void CallOp::build(Builder *, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void CallOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultType0, /*optional*/FlatSymbolRefAttr callee, ValueRange tblgen_arg_0) {
  tblgen_state.addOperands(tblgen_arg_0);
  if (callee) {
  tblgen_state.addAttribute("callee", callee);
  }
  tblgen_state.addTypes(resultType0);
}

void CallOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes(resultTypes);
}

ParseResult CallOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseCallOp(parser, result);
}

void CallOp::print(OpAsmPrinter &p) {
  printCallOp(p, *this);
}

LogicalResult CallOp::verify() {
  auto tblgen_callee = this->getAttr("callee");
  if (tblgen_callee) {
    if (!((tblgen_callee.isa<FlatSymbolRefAttr>()))) return emitOpError("attribute 'callee' failed to satisfy constraint: flat symbol reference attribute");
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
  if (getNumResults() > 1)
      return emitOpError("must have 0 or 1 result");
    return success();
}


//===----------------------------------------------------------------------===//
// LLVM::CondBrOp definitions
//===----------------------------------------------------------------------===//

CondBrOpOperandAdaptor::CondBrOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CondBrOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> CondBrOpOperandAdaptor::args() {
  return getODSOperands(0);
}

StringRef CondBrOp::getOperationName() {
  return "llvm.cond_br";
}

Operation::operand_range CondBrOp::getODSOperands(unsigned index) {
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

Operation::operand_range CondBrOp::args() {
  return getODSOperands(0);
}

Operation::result_range CondBrOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void CondBrOp::build(Builder *, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<ValueRange> operands, ArrayRef<NamedAttribute> attributes ) {
        result.addOperands(properOperands);
        for (auto kvp : llvm::zip(destinations, operands)) {
          result.addSuccessor(std::get<0>(kvp), std::get<1>(kvp));
        }
        for (auto namedAttr : attributes) {
          result.addAttribute(namedAttr.first, namedAttr.second);
        }
      
}

void CondBrOp::build(Builder *builder, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<NamedAttribute> attributes ) {
        SmallVector<ValueRange, 2> operands(destinations.size(), {});
        build(builder, result, properOperands,
            destinations, operands, attributes);
      
}

void CondBrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange args) {
  tblgen_state.addOperands(args);
}

void CondBrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange args) {
  tblgen_state.addOperands(args);
  tblgen_state.addTypes(resultTypes);
}

void CondBrOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult CondBrOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseCondBrOp(parser, result);
}

void CondBrOp::print(OpAsmPrinter &p) {
  printCondBrOp(p, *this);
}

LogicalResult CondBrOp::verify() {
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
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  if (getNumSuccessors() != 2)
      return emitOpError("expected exactly two successors");
    return success();
}


//===----------------------------------------------------------------------===//
// LLVM::ConstantOp definitions
//===----------------------------------------------------------------------===//

ConstantOpOperandAdaptor::ConstantOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ConstantOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ConstantOp::getOperationName() {
  return "llvm.mlir.constant";
}

Operation::operand_range ConstantOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ConstantOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ConstantOp::res() {
  return *getODSResults(0).begin();
}

Attribute ConstantOp::valueAttr() {
  return this->getAttr("value").cast<Attribute>();
}

Attribute ConstantOp::value() {
  auto attr = valueAttr();
  return attr;
}

void ConstantOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void ConstantOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Attribute value) {
  tblgen_state.addAttribute("value", value);
  tblgen_state.addTypes(res);
}

void ConstantOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Attribute value) {
  tblgen_state.addAttribute("value", value);
  tblgen_state.addTypes(resultTypes);
}

void ConstantOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ConstantOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseConstantOp(parser, result);
}

void ConstantOp::print(OpAsmPrinter &p) {
  printConstantOp(p, *this);
}

LogicalResult ConstantOp::verify() {
  auto tblgen_value = this->getAttr("value");
  if (!tblgen_value) return emitOpError("requires attribute 'value'");
  {
    if (!((true))) return emitOpError("attribute 'value' failed to satisfy constraint: any attribute");
  }
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
// LLVM::CopySignOp definitions
//===----------------------------------------------------------------------===//

CopySignOpOperandAdaptor::CopySignOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CopySignOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  CopySignOpOperandAdaptor::a() {
  return *getODSOperands(0).begin();
}

Value  CopySignOpOperandAdaptor::b() {
  return *getODSOperands(1).begin();
}

StringRef CopySignOp::getOperationName() {
  return "llvm.intr.copysign";
}

Operation::operand_range CopySignOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  CopySignOp::a() {
  return *getODSOperands(0).begin();
}

Value  CopySignOp::b() {
  return *getODSOperands(1).begin();
}

Operation::result_range CopySignOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  CopySignOp::res() {
  return *getODSResults(0).begin();
}

void CopySignOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void CopySignOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value a, Value b) {
  tblgen_state.addOperands(a);
  tblgen_state.addOperands(b);
  tblgen_state.addTypes(res);
}

void CopySignOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value a, Value b) {
  tblgen_state.addOperands(a);
  tblgen_state.addOperands(b);
  tblgen_state.addTypes(resultTypes);
}

void CopySignOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void CopySignOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value a, Value b) {
  tblgen_state.addOperands(a);
  tblgen_state.addOperands(b);
  tblgen_state.addTypes({a.getType()});

}

void CopySignOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult CopySignOp::verify() {
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
// LLVM::CosOp definitions
//===----------------------------------------------------------------------===//

CosOpOperandAdaptor::CosOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CosOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  CosOpOperandAdaptor::in() {
  return *getODSOperands(0).begin();
}

StringRef CosOp::getOperationName() {
  return "llvm.intr.cos";
}

Operation::operand_range CosOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  CosOp::in() {
  return *getODSOperands(0).begin();
}

Operation::result_range CosOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  CosOp::res() {
  return *getODSResults(0).begin();
}

void CosOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void CosOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(res);
}

void CosOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(resultTypes);
}

void CosOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void CosOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes({in.getType()});

}

void CosOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult CosOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::ExpOp definitions
//===----------------------------------------------------------------------===//

ExpOpOperandAdaptor::ExpOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ExpOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ExpOpOperandAdaptor::in() {
  return *getODSOperands(0).begin();
}

StringRef ExpOp::getOperationName() {
  return "llvm.intr.exp";
}

Operation::operand_range ExpOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ExpOp::in() {
  return *getODSOperands(0).begin();
}

Operation::result_range ExpOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ExpOp::res() {
  return *getODSResults(0).begin();
}

void ExpOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void ExpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(res);
}

void ExpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(resultTypes);
}

void ExpOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void ExpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes({in.getType()});

}

void ExpOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult ExpOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::ExtractElementOp definitions
//===----------------------------------------------------------------------===//

ExtractElementOpOperandAdaptor::ExtractElementOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ExtractElementOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ExtractElementOpOperandAdaptor::vector() {
  return *getODSOperands(0).begin();
}

Value  ExtractElementOpOperandAdaptor::position() {
  return *getODSOperands(1).begin();
}

StringRef ExtractElementOp::getOperationName() {
  return "llvm.extractelement";
}

Operation::operand_range ExtractElementOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ExtractElementOp::vector() {
  return *getODSOperands(0).begin();
}

Value  ExtractElementOp::position() {
  return *getODSOperands(1).begin();
}

Operation::result_range ExtractElementOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ExtractElementOp::res() {
  return *getODSResults(0).begin();
}



void ExtractElementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value vector, Value position) {
  tblgen_state.addOperands(vector);
  tblgen_state.addOperands(position);
  tblgen_state.addTypes(res);
}

void ExtractElementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, Value position) {
  tblgen_state.addOperands(vector);
  tblgen_state.addOperands(position);
  tblgen_state.addTypes(resultTypes);
}

void ExtractElementOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ExtractElementOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseExtractElementOp(parser, result);
}

void ExtractElementOp::print(OpAsmPrinter &p) {
  printExtractElementOp(p, *this);
}

LogicalResult ExtractElementOp::verify() {
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
// LLVM::ExtractValueOp definitions
//===----------------------------------------------------------------------===//

ExtractValueOpOperandAdaptor::ExtractValueOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ExtractValueOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ExtractValueOpOperandAdaptor::container() {
  return *getODSOperands(0).begin();
}

StringRef ExtractValueOp::getOperationName() {
  return "llvm.extractvalue";
}

Operation::operand_range ExtractValueOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ExtractValueOp::container() {
  return *getODSOperands(0).begin();
}

Operation::result_range ExtractValueOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ExtractValueOp::res() {
  return *getODSResults(0).begin();
}

ArrayAttr ExtractValueOp::positionAttr() {
  return this->getAttr("position").cast<ArrayAttr>();
}

ArrayAttr ExtractValueOp::position() {
  auto attr = positionAttr();
  return attr;
}

void ExtractValueOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void ExtractValueOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value container, ArrayAttr position) {
  tblgen_state.addOperands(container);
  tblgen_state.addAttribute("position", position);
  tblgen_state.addTypes(res);
}

void ExtractValueOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value container, ArrayAttr position) {
  tblgen_state.addOperands(container);
  tblgen_state.addAttribute("position", position);
  tblgen_state.addTypes(resultTypes);
}

void ExtractValueOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ExtractValueOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseExtractValueOp(parser, result);
}

void ExtractValueOp::print(OpAsmPrinter &p) {
  printExtractValueOp(p, *this);
}

LogicalResult ExtractValueOp::verify() {
  auto tblgen_position = this->getAttr("position");
  if (!tblgen_position) return emitOpError("requires attribute 'position'");
  {
    if (!((tblgen_position.isa<ArrayAttr>()))) return emitOpError("attribute 'position' failed to satisfy constraint: array attribute");
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
// LLVM::FAbsOp definitions
//===----------------------------------------------------------------------===//

FAbsOpOperandAdaptor::FAbsOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FAbsOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FAbsOpOperandAdaptor::in() {
  return *getODSOperands(0).begin();
}

StringRef FAbsOp::getOperationName() {
  return "llvm.intr.fabs";
}

Operation::operand_range FAbsOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FAbsOp::in() {
  return *getODSOperands(0).begin();
}

Operation::result_range FAbsOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FAbsOp::res() {
  return *getODSResults(0).begin();
}

void FAbsOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FAbsOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(res);
}

void FAbsOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(resultTypes);
}

void FAbsOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FAbsOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes({in.getType()});

}

void FAbsOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult FAbsOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::FAddOp definitions
//===----------------------------------------------------------------------===//

FAddOpOperandAdaptor::FAddOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FAddOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FAddOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  FAddOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef FAddOp::getOperationName() {
  return "llvm.fadd";
}

Operation::operand_range FAddOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FAddOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  FAddOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range FAddOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FAddOp::res() {
  return *getODSResults(0).begin();
}

void FAddOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void FAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void FAddOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void FAddOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult FAddOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FAddOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult FAddOp::verify() {
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
// LLVM::FCeilOp definitions
//===----------------------------------------------------------------------===//

FCeilOpOperandAdaptor::FCeilOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FCeilOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FCeilOpOperandAdaptor::in() {
  return *getODSOperands(0).begin();
}

StringRef FCeilOp::getOperationName() {
  return "llvm.intr.ceil";
}

Operation::operand_range FCeilOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FCeilOp::in() {
  return *getODSOperands(0).begin();
}

Operation::result_range FCeilOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FCeilOp::res() {
  return *getODSResults(0).begin();
}

void FCeilOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FCeilOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(res);
}

void FCeilOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(resultTypes);
}

void FCeilOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FCeilOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes({in.getType()});

}

void FCeilOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult FCeilOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::FCmpOp definitions
//===----------------------------------------------------------------------===//

FCmpOpOperandAdaptor::FCmpOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FCmpOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FCmpOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  FCmpOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef FCmpOp::getOperationName() {
  return "llvm.fcmp";
}

Operation::operand_range FCmpOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FCmpOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  FCmpOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range FCmpOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FCmpOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr FCmpOp::predicateAttr() {
  return this->getAttr("predicate").cast<IntegerAttr>();
}

::mlir::LLVM::FCmpPredicate FCmpOp::predicate() {
  auto attr = predicateAttr();
  return static_cast<::mlir::LLVM::FCmpPredicate>(attr.getInt());
}

void FCmpOp::build(Builder *b, OperationState &result, FCmpPredicate predicate, Value lhs, Value rhs) {
      LLVMDialect *dialect = &lhs.getType().cast<LLVMType>().getDialect();
      build(b, result, LLVMType::getInt1Ty(dialect),
            b->getI64IntegerAttr(static_cast<int64_t>(predicate)), lhs, rhs);
    
}

void FCmpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, IntegerAttr predicate, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addAttribute("predicate", predicate);
  tblgen_state.addTypes(res);
}

void FCmpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr predicate, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addAttribute("predicate", predicate);
  tblgen_state.addTypes(resultTypes);
}

void FCmpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, ::mlir::LLVM::FCmpPredicate predicate, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addAttribute("predicate", (*tblgen_builder).getI64IntegerAttr(static_cast<int64_t>(predicate)));
  tblgen_state.addTypes(res);
}

void FCmpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::LLVM::FCmpPredicate predicate, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addAttribute("predicate", (*tblgen_builder).getI64IntegerAttr(static_cast<int64_t>(predicate)));
  tblgen_state.addTypes(resultTypes);
}

void FCmpOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FCmpOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseCmpOp<FCmpPredicate>(parser, result);
}

void FCmpOp::print(OpAsmPrinter &p) {
  printFCmpOp(p, *this);
}

LogicalResult FCmpOp::verify() {
  auto tblgen_predicate = this->getAttr("predicate");
  if (!tblgen_predicate) return emitOpError("requires attribute 'predicate'");
  {
    if (!((((tblgen_predicate.isa<IntegerAttr>())) && ((tblgen_predicate.cast<IntegerAttr>().getType().isInteger(64)))) && (((tblgen_predicate.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 9)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 10)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 11)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 12)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 13)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 14)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 15))))) return emitOpError("attribute 'predicate' failed to satisfy constraint: llvm.fcmp comparison predicate");
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
// LLVM::FDivOp definitions
//===----------------------------------------------------------------------===//

FDivOpOperandAdaptor::FDivOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FDivOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FDivOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  FDivOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef FDivOp::getOperationName() {
  return "llvm.fdiv";
}

Operation::operand_range FDivOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FDivOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  FDivOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range FDivOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FDivOp::res() {
  return *getODSResults(0).begin();
}

void FDivOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void FDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void FDivOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void FDivOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult FDivOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FDivOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult FDivOp::verify() {
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
// LLVM::FMulAddOp definitions
//===----------------------------------------------------------------------===//

FMulAddOpOperandAdaptor::FMulAddOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FMulAddOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FMulAddOpOperandAdaptor::a() {
  return *getODSOperands(0).begin();
}

Value  FMulAddOpOperandAdaptor::b() {
  return *getODSOperands(1).begin();
}

Value  FMulAddOpOperandAdaptor::c() {
  return *getODSOperands(2).begin();
}

StringRef FMulAddOp::getOperationName() {
  return "llvm.intr.fmuladd";
}

Operation::operand_range FMulAddOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FMulAddOp::a() {
  return *getODSOperands(0).begin();
}

Value  FMulAddOp::b() {
  return *getODSOperands(1).begin();
}

Value  FMulAddOp::c() {
  return *getODSOperands(2).begin();
}

Operation::result_range FMulAddOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FMulAddOp::res() {
  return *getODSResults(0).begin();
}

void FMulAddOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FMulAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value a, Value b, Value c) {
  tblgen_state.addOperands(a);
  tblgen_state.addOperands(b);
  tblgen_state.addOperands(c);
  tblgen_state.addTypes(res);
}

void FMulAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value a, Value b, Value c) {
  tblgen_state.addOperands(a);
  tblgen_state.addOperands(b);
  tblgen_state.addOperands(c);
  tblgen_state.addTypes(resultTypes);
}

void FMulAddOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FMulAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value a, Value b, Value c) {
  tblgen_state.addOperands(a);
  tblgen_state.addOperands(b);
  tblgen_state.addOperands(c);
  tblgen_state.addTypes({a.getType()});

}

void FMulAddOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult FMulAddOp::verify() {
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
// LLVM::FMulOp definitions
//===----------------------------------------------------------------------===//

FMulOpOperandAdaptor::FMulOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FMulOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FMulOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  FMulOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef FMulOp::getOperationName() {
  return "llvm.fmul";
}

Operation::operand_range FMulOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FMulOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  FMulOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range FMulOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FMulOp::res() {
  return *getODSResults(0).begin();
}

void FMulOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FMulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void FMulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void FMulOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FMulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void FMulOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult FMulOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FMulOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult FMulOp::verify() {
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
// LLVM::FNegOp definitions
//===----------------------------------------------------------------------===//

FNegOpOperandAdaptor::FNegOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FNegOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FNegOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef FNegOp::getOperationName() {
  return "llvm.fneg";
}

Operation::operand_range FNegOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FNegOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range FNegOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FNegOp::res() {
  return *getODSResults(0).begin();
}

void FNegOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FNegOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(res);
}

void FNegOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void FNegOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FNegOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void FNegOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult FNegOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FNegOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult FNegOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::FPExtOp definitions
//===----------------------------------------------------------------------===//

FPExtOpOperandAdaptor::FPExtOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FPExtOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FPExtOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef FPExtOp::getOperationName() {
  return "llvm.fpext";
}

Operation::operand_range FPExtOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FPExtOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range FPExtOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FPExtOp::res() {
  return *getODSResults(0).begin();
}

void FPExtOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FPExtOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(res);
}

void FPExtOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void FPExtOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FPExtOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void FPExtOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult FPExtOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::FPToSIOp definitions
//===----------------------------------------------------------------------===//

FPToSIOpOperandAdaptor::FPToSIOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FPToSIOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FPToSIOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef FPToSIOp::getOperationName() {
  return "llvm.fptosi";
}

Operation::operand_range FPToSIOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FPToSIOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range FPToSIOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FPToSIOp::res() {
  return *getODSResults(0).begin();
}

void FPToSIOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FPToSIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(res);
}

void FPToSIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void FPToSIOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FPToSIOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void FPToSIOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult FPToSIOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::FPToUIOp definitions
//===----------------------------------------------------------------------===//

FPToUIOpOperandAdaptor::FPToUIOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FPToUIOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FPToUIOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef FPToUIOp::getOperationName() {
  return "llvm.fptoui";
}

Operation::operand_range FPToUIOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FPToUIOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range FPToUIOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FPToUIOp::res() {
  return *getODSResults(0).begin();
}

void FPToUIOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FPToUIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(res);
}

void FPToUIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void FPToUIOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FPToUIOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void FPToUIOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult FPToUIOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::FPTruncOp definitions
//===----------------------------------------------------------------------===//

FPTruncOpOperandAdaptor::FPTruncOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FPTruncOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FPTruncOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef FPTruncOp::getOperationName() {
  return "llvm.fptrunc";
}

Operation::operand_range FPTruncOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FPTruncOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range FPTruncOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FPTruncOp::res() {
  return *getODSResults(0).begin();
}

void FPTruncOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FPTruncOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(res);
}

void FPTruncOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void FPTruncOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FPTruncOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void FPTruncOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult FPTruncOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::FRemOp definitions
//===----------------------------------------------------------------------===//

FRemOpOperandAdaptor::FRemOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FRemOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FRemOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  FRemOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef FRemOp::getOperationName() {
  return "llvm.frem";
}

Operation::operand_range FRemOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FRemOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  FRemOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range FRemOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FRemOp::res() {
  return *getODSResults(0).begin();
}

void FRemOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FRemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void FRemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void FRemOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FRemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void FRemOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult FRemOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FRemOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult FRemOp::verify() {
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
// LLVM::FSubOp definitions
//===----------------------------------------------------------------------===//

FSubOpOperandAdaptor::FSubOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FSubOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FSubOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  FSubOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef FSubOp::getOperationName() {
  return "llvm.fsub";
}

Operation::operand_range FSubOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FSubOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  FSubOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range FSubOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FSubOp::res() {
  return *getODSResults(0).begin();
}

void FSubOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FSubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void FSubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void FSubOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FSubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void FSubOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult FSubOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FSubOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult FSubOp::verify() {
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
// LLVM::GEPOp definitions
//===----------------------------------------------------------------------===//

GEPOpOperandAdaptor::GEPOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GEPOpOperandAdaptor::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (tblgen_operands.size() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(tblgen_operands.begin(), offset), std::next(tblgen_operands.begin(), offset + size)};
}

Value  GEPOpOperandAdaptor::base() {
  return *getODSOperands(0).begin();
}

ArrayRef<Value> GEPOpOperandAdaptor::indices() {
  return getODSOperands(1);
}

StringRef GEPOp::getOperationName() {
  return "llvm.getelementptr";
}

Operation::operand_range GEPOp::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->operand_begin(), offset), std::next(getOperation()->operand_begin(), offset + size)};
}

Value  GEPOp::base() {
  return *getODSOperands(0).begin();
}

Operation::operand_range GEPOp::indices() {
  return getODSOperands(1);
}

Operation::result_range GEPOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GEPOp::res() {
  return *getODSResults(0).begin();
}

void GEPOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void GEPOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value base, ValueRange indices) {
  tblgen_state.addOperands(base);
  tblgen_state.addOperands(indices);
  tblgen_state.addTypes(res);
}

void GEPOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value base, ValueRange indices) {
  tblgen_state.addOperands(base);
  tblgen_state.addOperands(indices);
  tblgen_state.addTypes(resultTypes);
}

void GEPOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GEPOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseGEPOp(parser, result);
}

void GEPOp::print(OpAsmPrinter &p) {
  printGEPOp(p, *this);
}

LogicalResult GEPOp::verify() {
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
// LLVM::GlobalOp definitions
//===----------------------------------------------------------------------===//

GlobalOpOperandAdaptor::GlobalOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GlobalOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef GlobalOp::getOperationName() {
  return "llvm.mlir.global";
}

Operation::operand_range GlobalOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range GlobalOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Region &GlobalOp::initializer() {
  return this->getOperation()->getRegion(0);
}

TypeAttr GlobalOp::typeAttr() {
  return this->getAttr("type").cast<TypeAttr>();
}

Type GlobalOp::type() {
  auto attr = typeAttr();
  return attr.getValue().cast<Type>();
}

UnitAttr GlobalOp::constantAttr() {
  return this->getAttr("constant").dyn_cast_or_null<UnitAttr>();
}

bool GlobalOp::constant() {
  auto attr = constantAttr();
  return attr != nullptr;
}

StringAttr GlobalOp::sym_nameAttr() {
  return this->getAttr("sym_name").cast<StringAttr>();
}

StringRef GlobalOp::sym_name() {
  auto attr = sym_nameAttr();
  return attr.getValue();
}

IntegerAttr GlobalOp::linkageAttr() {
  return this->getAttr("linkage").cast<IntegerAttr>();
}

::mlir::LLVM::Linkage GlobalOp::linkage() {
  auto attr = linkageAttr();
  return static_cast<::mlir::LLVM::Linkage>(attr.getInt());
}

Attribute GlobalOp::valueAttr() {
  return this->getAttr("value").dyn_cast_or_null<Attribute>();
}

Optional<Attribute> GlobalOp::value() {
  auto attr = valueAttr();
  return attr ? Optional<Attribute>(attr) : (llvm::None);
}

IntegerAttr GlobalOp::addr_spaceAttr() {
  return this->getAttr("addr_space").dyn_cast_or_null<IntegerAttr>();
}

APInt GlobalOp::addr_space() {
  auto attr = addr_spaceAttr();
    if (!attr)
      return mlir::Builder(this->getContext()).getIntegerAttr(mlir::Builder(this->getContext()).getIntegerType(32), 0).getValue();
  return attr.getValue();
}



void GlobalOp::build(Builder *tblgen_builder, OperationState &tblgen_state, TypeAttr type, /*optional*/UnitAttr constant, StringAttr sym_name, IntegerAttr linkage, /*optional*/Attribute value, IntegerAttr addr_space) {
  tblgen_state.addAttribute("type", type);
  if (constant) {
  tblgen_state.addAttribute("constant", constant);
  }
  tblgen_state.addAttribute("sym_name", sym_name);
  tblgen_state.addAttribute("linkage", linkage);
  if (value) {
  tblgen_state.addAttribute("value", value);
  }
  tblgen_state.addAttribute("addr_space", addr_space);
  (void)tblgen_state.addRegion();
}

void GlobalOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, TypeAttr type, /*optional*/UnitAttr constant, StringAttr sym_name, IntegerAttr linkage, /*optional*/Attribute value, IntegerAttr addr_space) {
  tblgen_state.addAttribute("type", type);
  if (constant) {
  tblgen_state.addAttribute("constant", constant);
  }
  tblgen_state.addAttribute("sym_name", sym_name);
  tblgen_state.addAttribute("linkage", linkage);
  if (value) {
  tblgen_state.addAttribute("value", value);
  }
  tblgen_state.addAttribute("addr_space", addr_space);
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(resultTypes);
}

void GlobalOp::build(Builder *tblgen_builder, OperationState &tblgen_state, TypeAttr type, /*optional*/bool constant, StringRef sym_name, ::mlir::LLVM::Linkage linkage, /*optional*/Attribute value, APInt addr_space) {
  tblgen_state.addAttribute("type", type);
  if (constant) {
  tblgen_state.addAttribute("constant", (*tblgen_builder).getUnitAttr());
  }
  tblgen_state.addAttribute("sym_name", (*tblgen_builder).getStringAttr("sym_name"));
  tblgen_state.addAttribute("linkage", (*tblgen_builder).getI64IntegerAttr(static_cast<int64_t>(linkage)));
  if (value) {
  tblgen_state.addAttribute("value", value);
  }
  tblgen_state.addAttribute("addr_space", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(32), addr_space));
  (void)tblgen_state.addRegion();
}

void GlobalOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, TypeAttr type, /*optional*/bool constant, StringRef sym_name, ::mlir::LLVM::Linkage linkage, /*optional*/Attribute value, APInt addr_space) {
  tblgen_state.addAttribute("type", type);
  if (constant) {
  tblgen_state.addAttribute("constant", (*tblgen_builder).getUnitAttr());
  }
  tblgen_state.addAttribute("sym_name", (*tblgen_builder).getStringAttr("sym_name"));
  tblgen_state.addAttribute("linkage", (*tblgen_builder).getI64IntegerAttr(static_cast<int64_t>(linkage)));
  if (value) {
  tblgen_state.addAttribute("value", value);
  }
  tblgen_state.addAttribute("addr_space", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(32), addr_space));
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(resultTypes);
}

void GlobalOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  (void)tblgen_state.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GlobalOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseGlobalOp(parser, result);
}

void GlobalOp::print(OpAsmPrinter &p) {
  printGlobalOp(p, *this);
}

LogicalResult GlobalOp::verify() {
  auto tblgen_type = this->getAttr("type");
  if (!tblgen_type) return emitOpError("requires attribute 'type'");
  {
    if (!(((tblgen_type.isa<TypeAttr>())) && ((tblgen_type.cast<TypeAttr>().getValue().isa<Type>())))) return emitOpError("attribute 'type' failed to satisfy constraint: any type attribute");
  }
  auto tblgen_constant = this->getAttr("constant");
  if (tblgen_constant) {
    if (!((tblgen_constant.isa<UnitAttr>()))) return emitOpError("attribute 'constant' failed to satisfy constraint: unit attribute");
  }
  auto tblgen_sym_name = this->getAttr("sym_name");
  if (!tblgen_sym_name) return emitOpError("requires attribute 'sym_name'");
  {
    if (!((tblgen_sym_name.isa<StringAttr>()))) return emitOpError("attribute 'sym_name' failed to satisfy constraint: string attribute");
  }
  auto tblgen_linkage = this->getAttr("linkage");
  if (!tblgen_linkage) return emitOpError("requires attribute 'linkage'");
  {
    if (!((((tblgen_linkage.isa<IntegerAttr>())) && ((tblgen_linkage.cast<IntegerAttr>().getType().isInteger(64)))) && (((tblgen_linkage.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 9)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 10))))) return emitOpError("attribute 'linkage' failed to satisfy constraint: LLVM linkage types");
  }
  auto tblgen_value = this->getAttr("value");
  if (tblgen_value) {
    if (!((true))) return emitOpError("attribute 'value' failed to satisfy constraint: any attribute");
  }
  auto tblgen_addr_space = this->getAttr("addr_space");
  if (tblgen_addr_space) {
    if (!((((tblgen_addr_space.isa<IntegerAttr>())) && ((tblgen_addr_space.cast<IntegerAttr>().getType().isInteger(32)))) && ((!tblgen_addr_space.cast<IntegerAttr>().getValue().isNegative())))) return emitOpError("attribute 'addr_space' failed to satisfy constraint: non-negative 32-bit integer attribute");
  }
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
    return emitOpError("region #0 ('initializer') failed to verify constraint: any region");
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// LLVM::ICmpOp definitions
//===----------------------------------------------------------------------===//

ICmpOpOperandAdaptor::ICmpOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ICmpOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ICmpOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  ICmpOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef ICmpOp::getOperationName() {
  return "llvm.icmp";
}

Operation::operand_range ICmpOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ICmpOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  ICmpOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range ICmpOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ICmpOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr ICmpOp::predicateAttr() {
  return this->getAttr("predicate").cast<IntegerAttr>();
}

::mlir::LLVM::ICmpPredicate ICmpOp::predicate() {
  auto attr = predicateAttr();
  return static_cast<::mlir::LLVM::ICmpPredicate>(attr.getInt());
}

void ICmpOp::build(Builder *b, OperationState &result, ICmpPredicate predicate, Value lhs, Value rhs) {
      LLVMDialect *dialect = &lhs.getType().cast<LLVMType>().getDialect();
      build(b, result, LLVMType::getInt1Ty(dialect),
            b->getI64IntegerAttr(static_cast<int64_t>(predicate)), lhs, rhs);
    
}

void ICmpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, IntegerAttr predicate, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addAttribute("predicate", predicate);
  tblgen_state.addTypes(res);
}

void ICmpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr predicate, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addAttribute("predicate", predicate);
  tblgen_state.addTypes(resultTypes);
}

void ICmpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, ::mlir::LLVM::ICmpPredicate predicate, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addAttribute("predicate", (*tblgen_builder).getI64IntegerAttr(static_cast<int64_t>(predicate)));
  tblgen_state.addTypes(res);
}

void ICmpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::LLVM::ICmpPredicate predicate, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addAttribute("predicate", (*tblgen_builder).getI64IntegerAttr(static_cast<int64_t>(predicate)));
  tblgen_state.addTypes(resultTypes);
}

void ICmpOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ICmpOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseCmpOp<ICmpPredicate>(parser, result);
}

void ICmpOp::print(OpAsmPrinter &p) {
  printICmpOp(p, *this);
}

LogicalResult ICmpOp::verify() {
  auto tblgen_predicate = this->getAttr("predicate");
  if (!tblgen_predicate) return emitOpError("requires attribute 'predicate'");
  {
    if (!((((tblgen_predicate.isa<IntegerAttr>())) && ((tblgen_predicate.cast<IntegerAttr>().getType().isInteger(64)))) && (((tblgen_predicate.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 9))))) return emitOpError("attribute 'predicate' failed to satisfy constraint: llvm.icmp comparison predicate");
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
// LLVM::InsertElementOp definitions
//===----------------------------------------------------------------------===//

InsertElementOpOperandAdaptor::InsertElementOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> InsertElementOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  InsertElementOpOperandAdaptor::vector() {
  return *getODSOperands(0).begin();
}

Value  InsertElementOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

Value  InsertElementOpOperandAdaptor::position() {
  return *getODSOperands(2).begin();
}

StringRef InsertElementOp::getOperationName() {
  return "llvm.insertelement";
}

Operation::operand_range InsertElementOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  InsertElementOp::vector() {
  return *getODSOperands(0).begin();
}

Value  InsertElementOp::value() {
  return *getODSOperands(1).begin();
}

Value  InsertElementOp::position() {
  return *getODSOperands(2).begin();
}

Operation::result_range InsertElementOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  InsertElementOp::res() {
  return *getODSResults(0).begin();
}

void InsertElementOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void InsertElementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value vector, Value value, Value position) {
  tblgen_state.addOperands(vector);
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(position);
  tblgen_state.addTypes(res);
}

void InsertElementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, Value value, Value position) {
  tblgen_state.addOperands(vector);
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(position);
  tblgen_state.addTypes(resultTypes);
}

void InsertElementOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult InsertElementOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseInsertElementOp(parser, result);
}

void InsertElementOp::print(OpAsmPrinter &p) {
  printInsertElementOp(p, *this);
}

LogicalResult InsertElementOp::verify() {
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
// LLVM::InsertValueOp definitions
//===----------------------------------------------------------------------===//

InsertValueOpOperandAdaptor::InsertValueOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> InsertValueOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  InsertValueOpOperandAdaptor::container() {
  return *getODSOperands(0).begin();
}

Value  InsertValueOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

StringRef InsertValueOp::getOperationName() {
  return "llvm.insertvalue";
}

Operation::operand_range InsertValueOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  InsertValueOp::container() {
  return *getODSOperands(0).begin();
}

Value  InsertValueOp::value() {
  return *getODSOperands(1).begin();
}

Operation::result_range InsertValueOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  InsertValueOp::res() {
  return *getODSResults(0).begin();
}

ArrayAttr InsertValueOp::positionAttr() {
  return this->getAttr("position").cast<ArrayAttr>();
}

ArrayAttr InsertValueOp::position() {
  auto attr = positionAttr();
  return attr;
}

void InsertValueOp::build(Builder *b, OperationState &result, Value container, Value value, ArrayAttr position) {
      build(b, result, container.getType(), container, value, position);
    
}

void InsertValueOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value container, Value value, ArrayAttr position) {
  tblgen_state.addOperands(container);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("position", position);
  tblgen_state.addTypes(res);
}

void InsertValueOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value container, Value value, ArrayAttr position) {
  tblgen_state.addOperands(container);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("position", position);
  tblgen_state.addTypes(resultTypes);
}

void InsertValueOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult InsertValueOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseInsertValueOp(parser, result);
}

void InsertValueOp::print(OpAsmPrinter &p) {
  printInsertValueOp(p, *this);
}

LogicalResult InsertValueOp::verify() {
  auto tblgen_position = this->getAttr("position");
  if (!tblgen_position) return emitOpError("requires attribute 'position'");
  {
    if (!((tblgen_position.isa<ArrayAttr>()))) return emitOpError("attribute 'position' failed to satisfy constraint: array attribute");
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
// LLVM::IntToPtrOp definitions
//===----------------------------------------------------------------------===//

IntToPtrOpOperandAdaptor::IntToPtrOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> IntToPtrOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  IntToPtrOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef IntToPtrOp::getOperationName() {
  return "llvm.inttoptr";
}

Operation::operand_range IntToPtrOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  IntToPtrOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range IntToPtrOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  IntToPtrOp::res() {
  return *getODSResults(0).begin();
}

void IntToPtrOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void IntToPtrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(res);
}

void IntToPtrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void IntToPtrOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult IntToPtrOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void IntToPtrOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult IntToPtrOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::LLVMFuncOp definitions
//===----------------------------------------------------------------------===//

LLVMFuncOpOperandAdaptor::LLVMFuncOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LLVMFuncOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef LLVMFuncOp::getOperationName() {
  return "llvm.func";
}

Operation::operand_range LLVMFuncOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range LLVMFuncOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Region &LLVMFuncOp::body() {
  return this->getOperation()->getRegion(0);
}

IntegerAttr LLVMFuncOp::linkageAttr() {
  return this->getAttr("linkage").dyn_cast_or_null<IntegerAttr>();
}

::mlir::LLVM::Linkage LLVMFuncOp::linkage() {
  auto attr = linkageAttr();
    if (!attr)
      return static_cast<::mlir::LLVM::Linkage>(mlir::Builder(this->getContext()).getI64IntegerAttr(static_cast<int64_t>(Linkage::External)).getInt());
  return static_cast<::mlir::LLVM::Linkage>(attr.getInt());
}



ParseResult LLVMFuncOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseLLVMFuncOp(parser, result);
}

void LLVMFuncOp::print(OpAsmPrinter &p) {
  printLLVMFuncOp(p, *this);
}

LogicalResult LLVMFuncOp::verify() {
  auto tblgen_linkage = this->getAttr("linkage");
  if (tblgen_linkage) {
    if (!((((tblgen_linkage.isa<IntegerAttr>())) && ((tblgen_linkage.cast<IntegerAttr>().getType().isInteger(64)))) && (((tblgen_linkage.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 9)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 10))))) return emitOpError("attribute 'linkage' failed to satisfy constraint: LLVM linkage types");
  }
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
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// LLVM::LShrOp definitions
//===----------------------------------------------------------------------===//

LShrOpOperandAdaptor::LShrOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LShrOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  LShrOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  LShrOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef LShrOp::getOperationName() {
  return "llvm.lshr";
}

Operation::operand_range LShrOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  LShrOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  LShrOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range LShrOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  LShrOp::res() {
  return *getODSResults(0).begin();
}

void LShrOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void LShrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void LShrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void LShrOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void LShrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void LShrOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult LShrOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void LShrOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult LShrOp::verify() {
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
// LLVM::LoadOp definitions
//===----------------------------------------------------------------------===//

LoadOpOperandAdaptor::LoadOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LoadOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  LoadOpOperandAdaptor::addr() {
  return *getODSOperands(0).begin();
}

StringRef LoadOp::getOperationName() {
  return "llvm.load";
}

Operation::operand_range LoadOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  LoadOp::addr() {
  return *getODSOperands(0).begin();
}

Operation::result_range LoadOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  LoadOp::res() {
  return *getODSResults(0).begin();
}

void LoadOp::build(Builder *b, OperationState &result, Value addr) {
      auto type = addr.getType().cast<LLVM::LLVMType>().getPointerElementTy();
      build(b, result, type, addr);
    
}

void LoadOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value addr) {
  tblgen_state.addOperands(addr);
  tblgen_state.addTypes(res);
}

void LoadOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value addr) {
  tblgen_state.addOperands(addr);
  tblgen_state.addTypes(resultTypes);
}

void LoadOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult LoadOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseLoadOp(parser, result);
}

void LoadOp::print(OpAsmPrinter &p) {
  printLoadOp(p, *this);
}

LogicalResult LoadOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::Log10Op definitions
//===----------------------------------------------------------------------===//

Log10OpOperandAdaptor::Log10OpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> Log10OpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  Log10OpOperandAdaptor::in() {
  return *getODSOperands(0).begin();
}

StringRef Log10Op::getOperationName() {
  return "llvm.intr.log10";
}

Operation::operand_range Log10Op::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  Log10Op::in() {
  return *getODSOperands(0).begin();
}

Operation::result_range Log10Op::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  Log10Op::res() {
  return *getODSResults(0).begin();
}

void Log10Op::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(res);
}

void Log10Op::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(resultTypes);
}

void Log10Op::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult Log10Op::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::Log2Op definitions
//===----------------------------------------------------------------------===//

Log2OpOperandAdaptor::Log2OpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> Log2OpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  Log2OpOperandAdaptor::in() {
  return *getODSOperands(0).begin();
}

StringRef Log2Op::getOperationName() {
  return "llvm.intr.log2";
}

Operation::operand_range Log2Op::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  Log2Op::in() {
  return *getODSOperands(0).begin();
}

Operation::result_range Log2Op::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  Log2Op::res() {
  return *getODSResults(0).begin();
}

void Log2Op::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(res);
}

void Log2Op::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(resultTypes);
}

void Log2Op::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult Log2Op::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::LogOp definitions
//===----------------------------------------------------------------------===//

LogOpOperandAdaptor::LogOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LogOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  LogOpOperandAdaptor::in() {
  return *getODSOperands(0).begin();
}

StringRef LogOp::getOperationName() {
  return "llvm.intr.log";
}

Operation::operand_range LogOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  LogOp::in() {
  return *getODSOperands(0).begin();
}

Operation::result_range LogOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  LogOp::res() {
  return *getODSResults(0).begin();
}

void LogOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(res);
}

void LogOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(resultTypes);
}

void LogOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult LogOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::MulOp definitions
//===----------------------------------------------------------------------===//

MulOpOperandAdaptor::MulOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> MulOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  MulOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  MulOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef MulOp::getOperationName() {
  return "llvm.mul";
}

Operation::operand_range MulOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  MulOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  MulOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range MulOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  MulOp::res() {
  return *getODSResults(0).begin();
}

void MulOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void MulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void MulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void MulOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void MulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void MulOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult MulOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void MulOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult MulOp::verify() {
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
// LLVM::NullOp definitions
//===----------------------------------------------------------------------===//

NullOpOperandAdaptor::NullOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> NullOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef NullOp::getOperationName() {
  return "llvm.mlir.null";
}

Operation::operand_range NullOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range NullOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  NullOp::res() {
  return *getODSResults(0).begin();
}

void NullOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void NullOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void NullOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void NullOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult NullOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseNullOp(parser, result);
}

void NullOp::print(OpAsmPrinter &p) {
  printNullOp(p, *this);
}

LogicalResult NullOp::verify() {
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
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// LLVM::OrOp definitions
//===----------------------------------------------------------------------===//

OrOpOperandAdaptor::OrOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> OrOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  OrOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  OrOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef OrOp::getOperationName() {
  return "llvm.or";
}

Operation::operand_range OrOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  OrOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  OrOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range OrOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  OrOp::res() {
  return *getODSResults(0).begin();
}

void OrOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void OrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void OrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void OrOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void OrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void OrOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult OrOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void OrOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult OrOp::verify() {
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
// LLVM::Prefetch definitions
//===----------------------------------------------------------------------===//

PrefetchOperandAdaptor::PrefetchOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> PrefetchOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  PrefetchOperandAdaptor::addr() {
  return *getODSOperands(0).begin();
}

Value  PrefetchOperandAdaptor::rw() {
  return *getODSOperands(1).begin();
}

Value  PrefetchOperandAdaptor::hint() {
  return *getODSOperands(2).begin();
}

Value  PrefetchOperandAdaptor::cache() {
  return *getODSOperands(3).begin();
}

StringRef Prefetch::getOperationName() {
  return "llvm.intr.prefetch";
}

Operation::operand_range Prefetch::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  Prefetch::addr() {
  return *getODSOperands(0).begin();
}

Value  Prefetch::rw() {
  return *getODSOperands(1).begin();
}

Value  Prefetch::hint() {
  return *getODSOperands(2).begin();
}

Value  Prefetch::cache() {
  return *getODSOperands(3).begin();
}

Operation::result_range Prefetch::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void Prefetch::build(Builder *builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    auto llvmType = resultType.dyn_cast<LLVM::LLVMType>(); (void)llvmType;
    assert(llvmType && "result must be an LLVM type");
    assert(llvmType.getUnderlyingType() &&
            llvmType.getUnderlyingType()->isVoidTy() &&
            "for zero-result operands, only 'void' is accepted as result type");
    build(builder, result, operands, attributes);
  
}

void Prefetch::build(Builder *, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void Prefetch::build(Builder *tblgen_builder, OperationState &tblgen_state, Value addr, Value rw, Value hint, Value cache) {
  tblgen_state.addOperands(addr);
  tblgen_state.addOperands(rw);
  tblgen_state.addOperands(hint);
  tblgen_state.addOperands(cache);
}

void Prefetch::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value addr, Value rw, Value hint, Value cache) {
  tblgen_state.addOperands(addr);
  tblgen_state.addOperands(rw);
  tblgen_state.addOperands(hint);
  tblgen_state.addOperands(cache);
  tblgen_state.addTypes(resultTypes);
}

void Prefetch::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult Prefetch::verify() {
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
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::PtrToIntOp definitions
//===----------------------------------------------------------------------===//

PtrToIntOpOperandAdaptor::PtrToIntOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> PtrToIntOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  PtrToIntOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef PtrToIntOp::getOperationName() {
  return "llvm.ptrtoint";
}

Operation::operand_range PtrToIntOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  PtrToIntOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range PtrToIntOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  PtrToIntOp::res() {
  return *getODSResults(0).begin();
}

void PtrToIntOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void PtrToIntOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(res);
}

void PtrToIntOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void PtrToIntOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult PtrToIntOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void PtrToIntOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult PtrToIntOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::ReturnOp definitions
//===----------------------------------------------------------------------===//

ReturnOpOperandAdaptor::ReturnOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ReturnOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> ReturnOpOperandAdaptor::args() {
  return getODSOperands(0);
}

StringRef ReturnOp::getOperationName() {
  return "llvm.return";
}

Operation::operand_range ReturnOp::getODSOperands(unsigned index) {
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

Operation::operand_range ReturnOp::args() {
  return getODSOperands(0);
}

Operation::result_range ReturnOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ReturnOp::build(Builder *, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<ValueRange> operands, ArrayRef<NamedAttribute> attributes ) {
        result.addOperands(properOperands);
        for (auto kvp : llvm::zip(destinations, operands)) {
          result.addSuccessor(std::get<0>(kvp), std::get<1>(kvp));
        }
        for (auto namedAttr : attributes) {
          result.addAttribute(namedAttr.first, namedAttr.second);
        }
      
}

void ReturnOp::build(Builder *builder, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<NamedAttribute> attributes ) {
        SmallVector<ValueRange, 2> operands(destinations.size(), {});
        build(builder, result, properOperands,
            destinations, operands, attributes);
      
}

void ReturnOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange args) {
  tblgen_state.addOperands(args);
}

void ReturnOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange args) {
  tblgen_state.addOperands(args);
  tblgen_state.addTypes(resultTypes);
}

void ReturnOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ReturnOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseReturnOp(parser, result);
}

void ReturnOp::print(OpAsmPrinter &p) {
  printReturnOp(p, *this);
}

LogicalResult ReturnOp::verify() {
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
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  if (getNumOperands() > 1)
      return emitOpError("expects at most 1 operand");
    return success();
}


//===----------------------------------------------------------------------===//
// LLVM::SDivOp definitions
//===----------------------------------------------------------------------===//

SDivOpOperandAdaptor::SDivOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SDivOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SDivOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  SDivOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef SDivOp::getOperationName() {
  return "llvm.sdiv";
}

Operation::operand_range SDivOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SDivOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  SDivOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range SDivOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SDivOp::res() {
  return *getODSResults(0).begin();
}

void SDivOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void SDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void SDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void SDivOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void SDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void SDivOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult SDivOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SDivOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult SDivOp::verify() {
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
// LLVM::SExtOp definitions
//===----------------------------------------------------------------------===//

SExtOpOperandAdaptor::SExtOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SExtOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SExtOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef SExtOp::getOperationName() {
  return "llvm.sext";
}

Operation::operand_range SExtOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SExtOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range SExtOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SExtOp::res() {
  return *getODSResults(0).begin();
}

void SExtOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void SExtOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(res);
}

void SExtOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void SExtOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SExtOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void SExtOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult SExtOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::SIToFPOp definitions
//===----------------------------------------------------------------------===//

SIToFPOpOperandAdaptor::SIToFPOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SIToFPOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SIToFPOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef SIToFPOp::getOperationName() {
  return "llvm.sitofp";
}

Operation::operand_range SIToFPOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SIToFPOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range SIToFPOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SIToFPOp::res() {
  return *getODSResults(0).begin();
}

void SIToFPOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void SIToFPOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(res);
}

void SIToFPOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void SIToFPOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SIToFPOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void SIToFPOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult SIToFPOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::SRemOp definitions
//===----------------------------------------------------------------------===//

SRemOpOperandAdaptor::SRemOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SRemOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SRemOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  SRemOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef SRemOp::getOperationName() {
  return "llvm.srem";
}

Operation::operand_range SRemOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SRemOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  SRemOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range SRemOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SRemOp::res() {
  return *getODSResults(0).begin();
}

void SRemOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void SRemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void SRemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void SRemOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void SRemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void SRemOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult SRemOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SRemOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult SRemOp::verify() {
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
// LLVM::SelectOp definitions
//===----------------------------------------------------------------------===//

SelectOpOperandAdaptor::SelectOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SelectOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SelectOpOperandAdaptor::condition() {
  return *getODSOperands(0).begin();
}

Value  SelectOpOperandAdaptor::trueValue() {
  return *getODSOperands(1).begin();
}

Value  SelectOpOperandAdaptor::falseValue() {
  return *getODSOperands(2).begin();
}

StringRef SelectOp::getOperationName() {
  return "llvm.select";
}

Operation::operand_range SelectOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SelectOp::condition() {
  return *getODSOperands(0).begin();
}

Value  SelectOp::trueValue() {
  return *getODSOperands(1).begin();
}

Value  SelectOp::falseValue() {
  return *getODSOperands(2).begin();
}

Operation::result_range SelectOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SelectOp::res() {
  return *getODSResults(0).begin();
}

void SelectOp::build(Builder *b, OperationState &result, Value condition, Value lhs, Value rhs) {
      build(b, result, lhs.getType(), condition, lhs, rhs);
    
}

void SelectOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value condition, Value trueValue, Value falseValue) {
  tblgen_state.addOperands(condition);
  tblgen_state.addOperands(trueValue);
  tblgen_state.addOperands(falseValue);
  tblgen_state.addTypes(res);
}

void SelectOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value condition, Value trueValue, Value falseValue) {
  tblgen_state.addOperands(condition);
  tblgen_state.addOperands(trueValue);
  tblgen_state.addOperands(falseValue);
  tblgen_state.addTypes(resultTypes);
}

void SelectOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SelectOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseSelectOp(parser, result);
}

void SelectOp::print(OpAsmPrinter &p) {
  printSelectOp(p, *this);
}

LogicalResult SelectOp::verify() {
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
// LLVM::ShlOp definitions
//===----------------------------------------------------------------------===//

ShlOpOperandAdaptor::ShlOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ShlOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ShlOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  ShlOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef ShlOp::getOperationName() {
  return "llvm.shl";
}

Operation::operand_range ShlOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ShlOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  ShlOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range ShlOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ShlOp::res() {
  return *getODSResults(0).begin();
}

void ShlOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void ShlOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void ShlOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void ShlOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void ShlOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void ShlOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult ShlOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void ShlOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult ShlOp::verify() {
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
// LLVM::ShuffleVectorOp definitions
//===----------------------------------------------------------------------===//

ShuffleVectorOpOperandAdaptor::ShuffleVectorOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ShuffleVectorOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ShuffleVectorOpOperandAdaptor::v1() {
  return *getODSOperands(0).begin();
}

Value  ShuffleVectorOpOperandAdaptor::v2() {
  return *getODSOperands(1).begin();
}

StringRef ShuffleVectorOp::getOperationName() {
  return "llvm.shufflevector";
}

Operation::operand_range ShuffleVectorOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ShuffleVectorOp::v1() {
  return *getODSOperands(0).begin();
}

Value  ShuffleVectorOp::v2() {
  return *getODSOperands(1).begin();
}

Operation::result_range ShuffleVectorOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ShuffleVectorOp::res() {
  return *getODSResults(0).begin();
}

ArrayAttr ShuffleVectorOp::maskAttr() {
  return this->getAttr("mask").cast<ArrayAttr>();
}

ArrayAttr ShuffleVectorOp::mask() {
  auto attr = maskAttr();
  return attr;
}



void ShuffleVectorOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value v1, Value v2, ArrayAttr mask) {
  tblgen_state.addOperands(v1);
  tblgen_state.addOperands(v2);
  tblgen_state.addAttribute("mask", mask);
  tblgen_state.addTypes(res);
}

void ShuffleVectorOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value v1, Value v2, ArrayAttr mask) {
  tblgen_state.addOperands(v1);
  tblgen_state.addOperands(v2);
  tblgen_state.addAttribute("mask", mask);
  tblgen_state.addTypes(resultTypes);
}

void ShuffleVectorOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ShuffleVectorOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseShuffleVectorOp(parser, result);
}

void ShuffleVectorOp::print(OpAsmPrinter &p) {
  printShuffleVectorOp(p, *this);
}

LogicalResult ShuffleVectorOp::verify() {
  auto tblgen_mask = this->getAttr("mask");
  if (!tblgen_mask) return emitOpError("requires attribute 'mask'");
  {
    if (!((tblgen_mask.isa<ArrayAttr>()))) return emitOpError("attribute 'mask' failed to satisfy constraint: array attribute");
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
  auto wrappedVectorType1 = v1().getType().cast<LLVM::LLVMType>();
    auto wrappedVectorType2 = v2().getType().cast<LLVM::LLVMType>();
    if (!wrappedVectorType2.getUnderlyingType()->isVectorTy())
      return emitOpError("expected LLVM IR Dialect vector type for operand #2");
    if (wrappedVectorType1.getVectorElementType() !=
        wrappedVectorType2.getVectorElementType())
      return emitOpError("expected matching LLVM IR Dialect element types");
    return success();
}


//===----------------------------------------------------------------------===//
// LLVM::StoreOp definitions
//===----------------------------------------------------------------------===//

StoreOpOperandAdaptor::StoreOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> StoreOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  StoreOpOperandAdaptor::value() {
  return *getODSOperands(0).begin();
}

Value  StoreOpOperandAdaptor::addr() {
  return *getODSOperands(1).begin();
}

StringRef StoreOp::getOperationName() {
  return "llvm.store";
}

Operation::operand_range StoreOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  StoreOp::value() {
  return *getODSOperands(0).begin();
}

Value  StoreOp::addr() {
  return *getODSOperands(1).begin();
}

Operation::result_range StoreOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void StoreOp::build(Builder *builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    auto llvmType = resultType.dyn_cast<LLVM::LLVMType>(); (void)llvmType;
    assert(llvmType && "result must be an LLVM type");
    assert(llvmType.getUnderlyingType() &&
            llvmType.getUnderlyingType()->isVoidTy() &&
            "for zero-result operands, only 'void' is accepted as result type");
    build(builder, result, operands, attributes);
  
}

void StoreOp::build(Builder *, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void StoreOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value value, Value addr) {
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(addr);
}

void StoreOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value, Value addr) {
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(addr);
  tblgen_state.addTypes(resultTypes);
}

void StoreOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult StoreOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseStoreOp(parser, result);
}

void StoreOp::print(OpAsmPrinter &p) {
  printStoreOp(p, *this);
}

LogicalResult StoreOp::verify() {
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
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::SubOp definitions
//===----------------------------------------------------------------------===//

SubOpOperandAdaptor::SubOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SubOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SubOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  SubOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef SubOp::getOperationName() {
  return "llvm.sub";
}

Operation::operand_range SubOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SubOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  SubOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range SubOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SubOp::res() {
  return *getODSResults(0).begin();
}

void SubOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void SubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void SubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void SubOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void SubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void SubOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult SubOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SubOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult SubOp::verify() {
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
// LLVM::TruncOp definitions
//===----------------------------------------------------------------------===//

TruncOpOperandAdaptor::TruncOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> TruncOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  TruncOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef TruncOp::getOperationName() {
  return "llvm.trunc";
}

Operation::operand_range TruncOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  TruncOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range TruncOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  TruncOp::res() {
  return *getODSResults(0).begin();
}

void TruncOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void TruncOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(res);
}

void TruncOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void TruncOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult TruncOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void TruncOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult TruncOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::UDivOp definitions
//===----------------------------------------------------------------------===//

UDivOpOperandAdaptor::UDivOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UDivOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  UDivOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  UDivOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef UDivOp::getOperationName() {
  return "llvm.udiv";
}

Operation::operand_range UDivOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  UDivOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  UDivOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range UDivOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  UDivOp::res() {
  return *getODSResults(0).begin();
}

void UDivOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void UDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void UDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void UDivOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void UDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void UDivOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult UDivOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void UDivOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult UDivOp::verify() {
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
// LLVM::UIToFPOp definitions
//===----------------------------------------------------------------------===//

UIToFPOpOperandAdaptor::UIToFPOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UIToFPOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  UIToFPOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef UIToFPOp::getOperationName() {
  return "llvm.uitofp";
}

Operation::operand_range UIToFPOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  UIToFPOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range UIToFPOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  UIToFPOp::res() {
  return *getODSResults(0).begin();
}

void UIToFPOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void UIToFPOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(res);
}

void UIToFPOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void UIToFPOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult UIToFPOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void UIToFPOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult UIToFPOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::URemOp definitions
//===----------------------------------------------------------------------===//

URemOpOperandAdaptor::URemOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> URemOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  URemOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  URemOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef URemOp::getOperationName() {
  return "llvm.urem";
}

Operation::operand_range URemOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  URemOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  URemOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range URemOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  URemOp::res() {
  return *getODSResults(0).begin();
}

void URemOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void URemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void URemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void URemOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void URemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void URemOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult URemOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void URemOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult URemOp::verify() {
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
// LLVM::UndefOp definitions
//===----------------------------------------------------------------------===//

UndefOpOperandAdaptor::UndefOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UndefOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef UndefOp::getOperationName() {
  return "llvm.mlir.undef";
}

Operation::operand_range UndefOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range UndefOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  UndefOp::res() {
  return *getODSResults(0).begin();
}

void UndefOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void UndefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res) {
  tblgen_state.addTypes(res);
}

void UndefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void UndefOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult UndefOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseUndefOp(parser, result);
}

void UndefOp::print(OpAsmPrinter &p) {
  printUndefOp(p, *this);
}

LogicalResult UndefOp::verify() {
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
// LLVM::UnreachableOp definitions
//===----------------------------------------------------------------------===//

UnreachableOpOperandAdaptor::UnreachableOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UnreachableOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> UnreachableOpOperandAdaptor::args() {
  return getODSOperands(0);
}

StringRef UnreachableOp::getOperationName() {
  return "llvm.unreachable";
}

Operation::operand_range UnreachableOp::getODSOperands(unsigned index) {
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

Operation::operand_range UnreachableOp::args() {
  return getODSOperands(0);
}

Operation::result_range UnreachableOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void UnreachableOp::build(Builder *, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<ValueRange> operands, ArrayRef<NamedAttribute> attributes ) {
        result.addOperands(properOperands);
        for (auto kvp : llvm::zip(destinations, operands)) {
          result.addSuccessor(std::get<0>(kvp), std::get<1>(kvp));
        }
        for (auto namedAttr : attributes) {
          result.addAttribute(namedAttr.first, namedAttr.second);
        }
      
}

void UnreachableOp::build(Builder *builder, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<NamedAttribute> attributes ) {
        SmallVector<ValueRange, 2> operands(destinations.size(), {});
        build(builder, result, properOperands,
            destinations, operands, attributes);
      
}

void UnreachableOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange args) {
  tblgen_state.addOperands(args);
}

void UnreachableOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange args) {
  tblgen_state.addOperands(args);
  tblgen_state.addTypes(resultTypes);
}

void UnreachableOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult UnreachableOp::parse(OpAsmParser &parser, OperationState &result) {
  return success();
}

void UnreachableOp::print(OpAsmPrinter &p) {
  p << getOperationName();
}

LogicalResult UnreachableOp::verify() {
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
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::XOrOp definitions
//===----------------------------------------------------------------------===//

XOrOpOperandAdaptor::XOrOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> XOrOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  XOrOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  XOrOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef XOrOp::getOperationName() {
  return "llvm.xor";
}

Operation::operand_range XOrOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  XOrOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  XOrOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range XOrOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  XOrOp::res() {
  return *getODSResults(0).begin();
}

void XOrOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void XOrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(res);
}

void XOrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void XOrOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void XOrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void XOrOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult XOrOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void XOrOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult XOrOp::verify() {
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
// LLVM::ZExtOp definitions
//===----------------------------------------------------------------------===//

ZExtOpOperandAdaptor::ZExtOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ZExtOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ZExtOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef ZExtOp::getOperationName() {
  return "llvm.zext";
}

Operation::operand_range ZExtOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ZExtOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range ZExtOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ZExtOp::res() {
  return *getODSResults(0).begin();
}

void ZExtOp::build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void ZExtOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(res);
}

void ZExtOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void ZExtOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ZExtOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void ZExtOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult ZExtOp::verify() {
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
  return mlir::success();
}


#endif  // GET_OP_CLASSES

