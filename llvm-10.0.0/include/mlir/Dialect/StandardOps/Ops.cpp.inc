/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

AbsFOp,
AddFOp,
AddIOp,
AllocOp,
AndOp,
BranchOp,
CallIndirectOp,
CallOp,
CeilFOp,
CmpFOp,
CmpIOp,
CondBranchOp,
ConstantOp,
CopySignOp,
CosOp,
DeallocOp,
DimOp,
DivFOp,
ExpOp,
ExtractElementOp,
FPExtOp,
FPTruncOp,
IndexCastOp,
LoadOp,
Log10Op,
Log2Op,
LogOp,
MemRefCastOp,
MulFOp,
MulIOp,
NegFOp,
OrOp,
PrefetchOp,
RankOp,
RemFOp,
ReturnOp,
SIToFPOp,
SelectOp,
ShiftLeftOp,
SignExtendIOp,
SignedDivIOp,
SignedRemIOp,
SignedShiftRightOp,
SplatOp,
StoreOp,
SubFOp,
SubIOp,
SubViewOp,
TanhOp,
TensorCastOp,
TensorLoadOp,
TensorStoreOp,
TruncateIOp,
UnsignedDivIOp,
UnsignedRemIOp,
UnsignedShiftRightOp,
ViewOp,
XOrOp,
ZeroExtendIOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// AbsFOp definitions
//===----------------------------------------------------------------------===//

AbsFOpOperandAdaptor::AbsFOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AbsFOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AbsFOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef AbsFOp::getOperationName() {
  return "std.absf";
}

Operation::operand_range AbsFOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AbsFOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range AbsFOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void AbsFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultType0);
}

void AbsFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void AbsFOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void AbsFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void AbsFOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult AbsFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void AbsFOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult AbsFOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// AddFOp definitions
//===----------------------------------------------------------------------===//

AddFOpOperandAdaptor::AddFOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AddFOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AddFOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  AddFOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef AddFOp::getOperationName() {
  return "std.addf";
}

Operation::operand_range AddFOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AddFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  AddFOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range AddFOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void AddFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void AddFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void AddFOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void AddFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void AddFOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult AddFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void AddFOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult AddFOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// AddIOp definitions
//===----------------------------------------------------------------------===//

AddIOpOperandAdaptor::AddIOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AddIOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AddIOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  AddIOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef AddIOp::getOperationName() {
  return "std.addi";
}

Operation::operand_range AddIOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AddIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  AddIOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range AddIOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void AddIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void AddIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void AddIOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void AddIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void AddIOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult AddIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void AddIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult AddIOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// AllocOp definitions
//===----------------------------------------------------------------------===//

AllocOpOperandAdaptor::AllocOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AllocOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> AllocOpOperandAdaptor::value() {
  return getODSOperands(0);
}

StringRef AllocOp::getOperationName() {
  return "std.alloc";
}

Operation::operand_range AllocOp::getODSOperands(unsigned index) {
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

Operation::operand_range AllocOp::value() {
  return getODSOperands(0);
}

Operation::result_range AllocOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

IntegerAttr AllocOp::alignmentAttr() {
  return this->getAttr("alignment").dyn_cast_or_null<IntegerAttr>();
}

Optional< APInt > AllocOp::alignment() {
  auto attr = alignmentAttr();
  return attr ? Optional< APInt >(attr.getValue()) : (llvm::None);
}

void AllocOp::build(Builder *builder, OperationState &result, MemRefType memrefType) {
       result.types.push_back(memrefType);
     
}

void AllocOp::build(Builder *builder, OperationState &result, MemRefType memrefType, ArrayRef<Value> operands, IntegerAttr alignment ) {
       result.addOperands(operands);
       result.types.push_back(memrefType);
       if (alignment)
         result.addAttribute(getAlignmentAttrName(), alignment);
     
}

void AllocOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, ValueRange value, /*optional*/IntegerAttr alignment) {
  tblgen_state.addOperands(value);
  if (alignment) {
  tblgen_state.addAttribute("alignment", alignment);
  }
  tblgen_state.addTypes(resultType0);
}

void AllocOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange value, /*optional*/IntegerAttr alignment) {
  tblgen_state.addOperands(value);
  if (alignment) {
  tblgen_state.addAttribute("alignment", alignment);
  }
  tblgen_state.addTypes(resultTypes);
}

void AllocOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AllocOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAllocOp(parser, result);
}

void AllocOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AllocOp::verify() {
  auto tblgen_alignment = this->getAttr("alignment");
  if (tblgen_alignment) {
    if (!((((tblgen_alignment.isa<IntegerAttr>())) && ((tblgen_alignment.cast<IntegerAttr>().getType().isInteger(64)))) && ((tblgen_alignment.cast<IntegerAttr>().getInt() >= 0)))) return emitOpError("attribute 'alignment' failed to satisfy constraint: 64-bit integer attribute whose minimum value is 0");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
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
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be memref of any type values, but got " << v.getType();
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
// AndOp definitions
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
  return "std.and";
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

void AndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
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
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult AndOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// BranchOp definitions
//===----------------------------------------------------------------------===//

BranchOpOperandAdaptor::BranchOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BranchOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> BranchOpOperandAdaptor::operands() {
  return getODSOperands(0);
}

StringRef BranchOp::getOperationName() {
  return "std.br";
}

Operation::operand_range BranchOp::getODSOperands(unsigned index) {
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

Operation::operand_range BranchOp::operands() {
  return getODSOperands(0);
}

Operation::result_range BranchOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void BranchOp::build(Builder *, OperationState &result, Block *dest,ValueRange operands ) {
      result.addSuccessor(dest, operands);
  
}

void BranchOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange operands) {
  tblgen_state.addOperands(operands);
}

void BranchOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands) {
  tblgen_state.addOperands(operands);
  tblgen_state.addTypes(resultTypes);
}

void BranchOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BranchOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseBranchOp(parser, result);
}

void BranchOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult BranchOp::verify() {
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




//===----------------------------------------------------------------------===//
// CallIndirectOp definitions
//===----------------------------------------------------------------------===//

CallIndirectOpOperandAdaptor::CallIndirectOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CallIndirectOpOperandAdaptor::getODSOperands(unsigned index) {
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

Value  CallIndirectOpOperandAdaptor::callee() {
  return *getODSOperands(0).begin();
}

ArrayRef<Value> CallIndirectOpOperandAdaptor::operands() {
  return getODSOperands(1);
}

StringRef CallIndirectOp::getOperationName() {
  return "std.call_indirect";
}

Operation::operand_range CallIndirectOp::getODSOperands(unsigned index) {
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

Value  CallIndirectOp::callee() {
  return *getODSOperands(0).begin();
}

Operation::operand_range CallIndirectOp::operands() {
  return getODSOperands(1);
}

Operation::result_range CallIndirectOp::getODSResults(unsigned index) {
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

void CallIndirectOp::build(Builder *, OperationState &result, Value callee,ValueRange operands ) {
      result.operands.push_back(callee);
      result.addOperands(operands);
      result.addTypes(callee.getType().cast<FunctionType>().getResults());
  
}

void CallIndirectOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultType0, Value callee, ValueRange operands) {
  tblgen_state.addOperands(callee);
  tblgen_state.addOperands(operands);
  tblgen_state.addTypes(resultType0);
}

void CallIndirectOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes(resultTypes);
}

ParseResult CallIndirectOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseCallIndirectOp(parser, result);
}

void CallIndirectOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult CallIndirectOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<FunctionType>()))) {
        return emitOpError("operand #") << index << " must be function type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// CallOp definitions
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

ArrayRef<Value> CallOpOperandAdaptor::operands() {
  return getODSOperands(0);
}

StringRef CallOp::getOperationName() {
  return "std.call";
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

Operation::operand_range CallOp::operands() {
  return getODSOperands(0);
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
  return this->getAttr("callee").cast<FlatSymbolRefAttr>();
}

StringRef CallOp::callee() {
  auto attr = calleeAttr();
  return attr.getValue();
}

void CallOp::build(Builder *builder, OperationState &result, FuncOp callee,ValueRange operands ) {
      result.addOperands(operands);
      result.addAttribute("callee", builder->getSymbolRefAttr(callee));
      result.addTypes(callee.getType().getResults());
  
}

void CallOp::build(Builder *builder, OperationState &result, SymbolRefAttr callee,ArrayRef<Type> results, ValueRange operands ) {
      result.addOperands(operands);
      result.addAttribute("callee", callee);
      result.addTypes(results);
  
}

void CallOp::build(Builder *builder, OperationState &result, StringRef callee,ArrayRef<Type> results, ValueRange operands ) {
      build(builder, result, builder->getSymbolRefAttr(callee), results,
            operands);
  
}

void CallOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultType0, FlatSymbolRefAttr callee, ValueRange operands) {
  tblgen_state.addOperands(operands);
  tblgen_state.addAttribute("callee", callee);
  tblgen_state.addTypes(resultType0);
}

void CallOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultType0, StringRef callee, ValueRange operands) {
  tblgen_state.addOperands(operands);
  tblgen_state.addAttribute("callee", (*tblgen_builder).getSymbolRefAttr(callee));
  tblgen_state.addTypes(resultType0);
}

void CallOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes(resultTypes);
}

ParseResult CallOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseCallOp(parser, result);
}

void CallOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult CallOp::verify() {
  auto tblgen_callee = this->getAttr("callee");
  if (!tblgen_callee) return emitOpError("requires attribute 'callee'");
  {
    if (!((tblgen_callee.isa<FlatSymbolRefAttr>()))) return emitOpError("attribute 'callee' failed to satisfy constraint: flat symbol reference attribute");
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// CeilFOp definitions
//===----------------------------------------------------------------------===//

CeilFOpOperandAdaptor::CeilFOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CeilFOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  CeilFOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef CeilFOp::getOperationName() {
  return "std.ceilf";
}

Operation::operand_range CeilFOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  CeilFOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range CeilFOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void CeilFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultType0);
}

void CeilFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void CeilFOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void CeilFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void CeilFOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult CeilFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void CeilFOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult CeilFOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// CmpFOp definitions
//===----------------------------------------------------------------------===//

CmpFOpOperandAdaptor::CmpFOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CmpFOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  CmpFOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  CmpFOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef CmpFOp::getOperationName() {
  return "std.cmpf";
}

Operation::operand_range CmpFOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  CmpFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  CmpFOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range CmpFOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void CmpFOp::build(Builder *builder, OperationState &result, CmpFPredicate predicate,Value lhs, Value rhs) {
      ::buildCmpFOp(builder, result, predicate, lhs, rhs);
  
}

void CmpFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void CmpFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void CmpFOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult CmpFOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseCmpFOp(parser, result);
}

void CmpFOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult CmpFOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))))) {
        return emitOpError("result #") << index << " must be bool-like, but got " << v.getType();
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
// CmpIOp definitions
//===----------------------------------------------------------------------===//

CmpIOpOperandAdaptor::CmpIOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CmpIOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  CmpIOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  CmpIOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef CmpIOp::getOperationName() {
  return "std.cmpi";
}

Operation::operand_range CmpIOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  CmpIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  CmpIOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range CmpIOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

IntegerAttr CmpIOp::predicateAttr() {
  return this->getAttr("predicate").cast<IntegerAttr>();
}

::mlir::CmpIPredicate CmpIOp::predicate() {
  auto attr = predicateAttr();
  return static_cast<::mlir::CmpIPredicate>(attr.getInt());
}

void CmpIOp::build(Builder *builder, OperationState &result, CmpIPredicate predicate,Value lhs, Value rhs) {
      ::buildCmpIOp(builder, result, predicate, lhs, rhs);
  
}

void CmpIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, IntegerAttr predicate, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addAttribute("predicate", predicate);
  tblgen_state.addTypes(resultType0);
}

void CmpIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr predicate, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addAttribute("predicate", predicate);
  tblgen_state.addTypes(resultTypes);
}

void CmpIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, ::mlir::CmpIPredicate predicate, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addAttribute("predicate", (*tblgen_builder).getI64IntegerAttr(static_cast<int64_t>(predicate)));
  tblgen_state.addTypes(resultType0);
}

void CmpIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::CmpIPredicate predicate, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addAttribute("predicate", (*tblgen_builder).getI64IntegerAttr(static_cast<int64_t>(predicate)));
  tblgen_state.addTypes(resultTypes);
}

void CmpIOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult CmpIOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseCmpIOp(parser, result);
}

void CmpIOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult CmpIOp::verify() {
  auto tblgen_predicate = this->getAttr("predicate");
  if (!tblgen_predicate) return emitOpError("requires attribute 'predicate'");
  {
    if (!((((tblgen_predicate.isa<IntegerAttr>())) && ((tblgen_predicate.cast<IntegerAttr>().getType().isInteger(64)))) && (((tblgen_predicate.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 9))))) return emitOpError("attribute 'predicate' failed to satisfy constraint: allowed 64-bit integer cases: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))))) {
        return emitOpError("result #") << index << " must be bool-like, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}




//===----------------------------------------------------------------------===//
// CondBranchOp definitions
//===----------------------------------------------------------------------===//

CondBranchOpOperandAdaptor::CondBranchOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CondBranchOpOperandAdaptor::getODSOperands(unsigned index) {
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

Value  CondBranchOpOperandAdaptor::condition() {
  return *getODSOperands(0).begin();
}

ArrayRef<Value> CondBranchOpOperandAdaptor::branchOperands() {
  return getODSOperands(1);
}

StringRef CondBranchOp::getOperationName() {
  return "std.cond_br";
}

Operation::operand_range CondBranchOp::getODSOperands(unsigned index) {
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

Value  CondBranchOp::condition() {
  return *getODSOperands(0).begin();
}

Operation::operand_range CondBranchOp::branchOperands() {
  return getODSOperands(1);
}

Operation::result_range CondBranchOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void CondBranchOp::build(Builder *, OperationState &result, Value condition,Block *trueDest, ValueRange trueOperands,Block *falseDest, ValueRange falseOperands) {
      result.addOperands(condition);
      result.addSuccessor(trueDest, trueOperands);
      result.addSuccessor(falseDest, falseOperands);
  
}

void CondBranchOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value condition, ValueRange branchOperands) {
  tblgen_state.addOperands(condition);
  tblgen_state.addOperands(branchOperands);
}

void CondBranchOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value condition, ValueRange branchOperands) {
  tblgen_state.addOperands(condition);
  tblgen_state.addOperands(branchOperands);
  tblgen_state.addTypes(resultTypes);
}

void CondBranchOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult CondBranchOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseCondBranchOp(parser, result);
}

void CondBranchOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult CondBranchOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isInteger(1)))) {
        return emitOpError("operand #") << index << " must be 1-bit integer, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
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




//===----------------------------------------------------------------------===//
// ConstantOp definitions
//===----------------------------------------------------------------------===//

ConstantOpOperandAdaptor::ConstantOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ConstantOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ConstantOp::getOperationName() {
  return "std.constant";
}

Operation::operand_range ConstantOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ConstantOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Attribute ConstantOp::valueAttr() {
  return this->getAttr("value").cast<Attribute>();
}

Attribute ConstantOp::value() {
  auto attr = valueAttr();
  return attr;
}

void ConstantOp::build(Builder *builder, OperationState &result, Attribute value) {
 build(builder, result, value.getType(), value); 
}

void ConstantOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Attribute value) {
  tblgen_state.addAttribute("value", value);
  tblgen_state.addTypes(resultType0);
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
  return ::parseConstantOp(parser, result);
}

void ConstantOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
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
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
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
// CopySignOp definitions
//===----------------------------------------------------------------------===//

CopySignOpOperandAdaptor::CopySignOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CopySignOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  CopySignOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  CopySignOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef CopySignOp::getOperationName() {
  return "std.copysign";
}

Operation::operand_range CopySignOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  CopySignOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  CopySignOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range CopySignOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void CopySignOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void CopySignOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void CopySignOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void CopySignOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void CopySignOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult CopySignOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void CopySignOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult CopySignOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// CosOp definitions
//===----------------------------------------------------------------------===//

CosOpOperandAdaptor::CosOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CosOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  CosOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef CosOp::getOperationName() {
  return "std.cos";
}

Operation::operand_range CosOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  CosOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range CosOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void CosOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultType0);
}

void CosOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void CosOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void CosOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void CosOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult CosOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void CosOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult CosOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// DeallocOp definitions
//===----------------------------------------------------------------------===//

DeallocOpOperandAdaptor::DeallocOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> DeallocOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  DeallocOpOperandAdaptor::memref() {
  return *getODSOperands(0).begin();
}

StringRef DeallocOp::getOperationName() {
  return "std.dealloc";
}

Operation::operand_range DeallocOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  DeallocOp::memref() {
  return *getODSOperands(0).begin();
}

Operation::result_range DeallocOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void DeallocOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value memref) {
  tblgen_state.addOperands(memref);
}

void DeallocOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref) {
  tblgen_state.addOperands(memref);
  tblgen_state.addTypes(resultTypes);
}

void DeallocOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult DeallocOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseDeallocOp(parser, result);
}

void DeallocOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult DeallocOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
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
// DimOp definitions
//===----------------------------------------------------------------------===//

DimOpOperandAdaptor::DimOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> DimOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  DimOpOperandAdaptor::memrefOrTensor() {
  return *getODSOperands(0).begin();
}

StringRef DimOp::getOperationName() {
  return "std.dim";
}

Operation::operand_range DimOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  DimOp::memrefOrTensor() {
  return *getODSOperands(0).begin();
}

Operation::result_range DimOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

IntegerAttr DimOp::indexAttr() {
  return this->getAttr("index").cast<IntegerAttr>();
}

APInt DimOp::index() {
  auto attr = indexAttr();
  return attr.getValue();
}

void DimOp::build(Builder *builder, OperationState &result, Value memrefOrTensor,unsigned index) {
      auto indexType = builder->getIndexType();
      auto indexAttr = builder->getIntegerAttr(indexType, index);
      build(builder, result, indexType, memrefOrTensor, indexAttr);
    
}

void DimOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value memrefOrTensor, IntegerAttr index) {
  tblgen_state.addOperands(memrefOrTensor);
  tblgen_state.addAttribute("index", index);
  tblgen_state.addTypes(resultType0);
}

void DimOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memrefOrTensor, IntegerAttr index) {
  tblgen_state.addOperands(memrefOrTensor);
  tblgen_state.addAttribute("index", index);
  tblgen_state.addTypes(resultTypes);
}

void DimOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult DimOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseDimOp(parser, result);
}

void DimOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult DimOp::verify() {
  auto tblgen_index = this->getAttr("index");
  if (!tblgen_index) return emitOpError("requires attribute 'index'");
  {
    if (!((tblgen_index.isa<IntegerAttr>()))) return emitOpError("attribute 'index' failed to satisfy constraint: arbitrary integer attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) || (((v.getType().isa<TensorType>())) && ((true))))) {
        return emitOpError("operand #") << index << " must be any tensor or memref type, but got " << v.getType();
      }
      ++index;
    }
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
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// DivFOp definitions
//===----------------------------------------------------------------------===//

DivFOpOperandAdaptor::DivFOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> DivFOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  DivFOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  DivFOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef DivFOp::getOperationName() {
  return "std.divf";
}

Operation::operand_range DivFOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  DivFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  DivFOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range DivFOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void DivFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void DivFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void DivFOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void DivFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void DivFOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult DivFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void DivFOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult DivFOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ExpOp definitions
//===----------------------------------------------------------------------===//

ExpOpOperandAdaptor::ExpOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ExpOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ExpOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef ExpOp::getOperationName() {
  return "std.exp";
}

Operation::operand_range ExpOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ExpOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range ExpOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ExpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultType0);
}

void ExpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void ExpOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void ExpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void ExpOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult ExpOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void ExpOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult ExpOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ExtractElementOp definitions
//===----------------------------------------------------------------------===//

ExtractElementOpOperandAdaptor::ExtractElementOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ExtractElementOpOperandAdaptor::getODSOperands(unsigned index) {
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

Value  ExtractElementOpOperandAdaptor::aggregate() {
  return *getODSOperands(0).begin();
}

ArrayRef<Value> ExtractElementOpOperandAdaptor::indices() {
  return getODSOperands(1);
}

StringRef ExtractElementOp::getOperationName() {
  return "std.extract_element";
}

Operation::operand_range ExtractElementOp::getODSOperands(unsigned index) {
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

Value  ExtractElementOp::aggregate() {
  return *getODSOperands(0).begin();
}

Operation::operand_range ExtractElementOp::indices() {
  return getODSOperands(1);
}

Operation::result_range ExtractElementOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ExtractElementOp::build(Builder *builder, OperationState &result, Value aggregate,ValueRange indices ) {
      auto resType = aggregate.getType().cast<ShapedType>()
                                         .getElementType();
      build(builder, result, resType, aggregate, indices);
    
}

void ExtractElementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value aggregate, ValueRange indices) {
  tblgen_state.addOperands(aggregate);
  tblgen_state.addOperands(indices);
  tblgen_state.addTypes(resultType0);
}

void ExtractElementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value aggregate, ValueRange indices) {
  tblgen_state.addOperands(aggregate);
  tblgen_state.addOperands(indices);
  tblgen_state.addTypes(resultTypes);
}

void ExtractElementOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ExtractElementOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseExtractElementOp(parser, result);
}

void ExtractElementOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ExtractElementOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && ((true))) || (((v.getType().isa<TensorType>())) && ((true))))) {
        return emitOpError("operand #") << index << " must be vector of any type values or tensor of any type values, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// FPExtOp definitions
//===----------------------------------------------------------------------===//

FPExtOpOperandAdaptor::FPExtOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FPExtOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FPExtOpOperandAdaptor::in() {
  return *getODSOperands(0).begin();
}

StringRef FPExtOp::getOperationName() {
  return "std.fpext";
}

Operation::operand_range FPExtOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FPExtOp::in() {
  return *getODSOperands(0).begin();
}

Operation::result_range FPExtOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void FPExtOp::build(Builder *builder, OperationState &result, Value source, Type destType) {
       impl::buildCastOp(builder, result, source, destType);
  
}

void FPExtOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(resultType0);
}

void FPExtOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in) {
  tblgen_state.addOperands(in);
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
  return impl::parseCastOp(parser, result);
}

void FPExtOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult FPExtOp::verify() {
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyCastOp(*this);
}


//===----------------------------------------------------------------------===//
// FPTruncOp definitions
//===----------------------------------------------------------------------===//

FPTruncOpOperandAdaptor::FPTruncOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FPTruncOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FPTruncOpOperandAdaptor::in() {
  return *getODSOperands(0).begin();
}

StringRef FPTruncOp::getOperationName() {
  return "std.fptrunc";
}

Operation::operand_range FPTruncOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FPTruncOp::in() {
  return *getODSOperands(0).begin();
}

Operation::result_range FPTruncOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void FPTruncOp::build(Builder *builder, OperationState &result, Value source, Type destType) {
       impl::buildCastOp(builder, result, source, destType);
  
}

void FPTruncOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(resultType0);
}

void FPTruncOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in) {
  tblgen_state.addOperands(in);
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
  return impl::parseCastOp(parser, result);
}

void FPTruncOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult FPTruncOp::verify() {
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyCastOp(*this);
}


//===----------------------------------------------------------------------===//
// IndexCastOp definitions
//===----------------------------------------------------------------------===//

IndexCastOpOperandAdaptor::IndexCastOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> IndexCastOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  IndexCastOpOperandAdaptor::in() {
  return *getODSOperands(0).begin();
}

StringRef IndexCastOp::getOperationName() {
  return "std.index_cast";
}

Operation::operand_range IndexCastOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  IndexCastOp::in() {
  return *getODSOperands(0).begin();
}

Operation::result_range IndexCastOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void IndexCastOp::build(Builder *builder, OperationState &result, Value source, Type destType) {
       impl::buildCastOp(builder, result, source, destType);
  
}

void IndexCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(resultType0);
}

void IndexCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(resultTypes);
}

void IndexCastOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult IndexCastOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void IndexCastOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult IndexCastOp::verify() {
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyCastOp(*this);
}


//===----------------------------------------------------------------------===//
// LoadOp definitions
//===----------------------------------------------------------------------===//

LoadOpOperandAdaptor::LoadOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LoadOpOperandAdaptor::getODSOperands(unsigned index) {
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

Value  LoadOpOperandAdaptor::memref() {
  return *getODSOperands(0).begin();
}

ArrayRef<Value> LoadOpOperandAdaptor::indices() {
  return getODSOperands(1);
}

StringRef LoadOp::getOperationName() {
  return "std.load";
}

Operation::operand_range LoadOp::getODSOperands(unsigned index) {
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

Value  LoadOp::memref() {
  return *getODSOperands(0).begin();
}

Operation::operand_range LoadOp::indices() {
  return getODSOperands(1);
}

Operation::result_range LoadOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void LoadOp::build(Builder *, OperationState &result, Value memref,ValueRange indices ) {
      auto memrefType = memref.getType().cast<MemRefType>();
      result.addOperands(memref);
      result.addOperands(indices);
      result.types.push_back(memrefType.getElementType());
  
}

void LoadOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value memref, ValueRange indices) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addTypes(resultType0);
}

void LoadOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref, ValueRange indices) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addTypes(resultTypes);
}

void LoadOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult LoadOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLoadOp(parser, result);
}

void LoadOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult LoadOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// Log10Op definitions
//===----------------------------------------------------------------------===//

Log10OpOperandAdaptor::Log10OpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> Log10OpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  Log10OpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef Log10Op::getOperationName() {
  return "std.log10";
}

Operation::operand_range Log10Op::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  Log10Op::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range Log10Op::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void Log10Op::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultType0);
}

void Log10Op::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void Log10Op::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void Log10Op::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void Log10Op::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult Log10Op::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void Log10Op::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult Log10Op::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// Log2Op definitions
//===----------------------------------------------------------------------===//

Log2OpOperandAdaptor::Log2OpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> Log2OpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  Log2OpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef Log2Op::getOperationName() {
  return "std.log2";
}

Operation::operand_range Log2Op::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  Log2Op::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range Log2Op::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void Log2Op::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultType0);
}

void Log2Op::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void Log2Op::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void Log2Op::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void Log2Op::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult Log2Op::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void Log2Op::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult Log2Op::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LogOp definitions
//===----------------------------------------------------------------------===//

LogOpOperandAdaptor::LogOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LogOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  LogOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef LogOp::getOperationName() {
  return "std.log";
}

Operation::operand_range LogOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  LogOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range LogOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void LogOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultType0);
}

void LogOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void LogOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void LogOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void LogOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult LogOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void LogOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult LogOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// MemRefCastOp definitions
//===----------------------------------------------------------------------===//

MemRefCastOpOperandAdaptor::MemRefCastOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> MemRefCastOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  MemRefCastOpOperandAdaptor::source() {
  return *getODSOperands(0).begin();
}

StringRef MemRefCastOp::getOperationName() {
  return "std.memref_cast";
}

Operation::operand_range MemRefCastOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  MemRefCastOp::source() {
  return *getODSOperands(0).begin();
}

Operation::result_range MemRefCastOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void MemRefCastOp::build(Builder *builder, OperationState &result, Value source, Type destType) {
       impl::buildCastOp(builder, result, source, destType);
  
}

void MemRefCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value source) {
  tblgen_state.addOperands(source);
  tblgen_state.addTypes(resultType0);
}

void MemRefCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value source) {
  tblgen_state.addOperands(source);
  tblgen_state.addTypes(resultTypes);
}

void MemRefCastOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult MemRefCastOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void MemRefCastOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult MemRefCastOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<UnrankedMemRefType>())) && ((true))) || (((v.getType().isa<MemRefType>())) && ((true))))) {
        return emitOpError("operand #") << index << " must be unranked.memref of any type values or memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<UnrankedMemRefType>())) && ((true))) || (((v.getType().isa<MemRefType>())) && ((true))))) {
        return emitOpError("result #") << index << " must be unranked.memref of any type values or memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyCastOp(*this);
}




//===----------------------------------------------------------------------===//
// MulFOp definitions
//===----------------------------------------------------------------------===//

MulFOpOperandAdaptor::MulFOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> MulFOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  MulFOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  MulFOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef MulFOp::getOperationName() {
  return "std.mulf";
}

Operation::operand_range MulFOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  MulFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  MulFOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range MulFOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void MulFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void MulFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void MulFOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void MulFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void MulFOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult MulFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void MulFOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult MulFOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// MulIOp definitions
//===----------------------------------------------------------------------===//

MulIOpOperandAdaptor::MulIOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> MulIOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  MulIOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  MulIOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef MulIOp::getOperationName() {
  return "std.muli";
}

Operation::operand_range MulIOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  MulIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  MulIOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range MulIOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void MulIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void MulIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void MulIOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void MulIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void MulIOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult MulIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void MulIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult MulIOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// NegFOp definitions
//===----------------------------------------------------------------------===//

NegFOpOperandAdaptor::NegFOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> NegFOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  NegFOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef NegFOp::getOperationName() {
  return "std.negf";
}

Operation::operand_range NegFOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  NegFOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range NegFOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void NegFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultType0);
}

void NegFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void NegFOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void NegFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void NegFOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult NegFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void NegFOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult NegFOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// OrOp definitions
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
  return "std.or";
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

void OrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
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
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult OrOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// PrefetchOp definitions
//===----------------------------------------------------------------------===//

PrefetchOpOperandAdaptor::PrefetchOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> PrefetchOpOperandAdaptor::getODSOperands(unsigned index) {
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

Value  PrefetchOpOperandAdaptor::memref() {
  return *getODSOperands(0).begin();
}

ArrayRef<Value> PrefetchOpOperandAdaptor::indices() {
  return getODSOperands(1);
}

StringRef PrefetchOp::getOperationName() {
  return "std.prefetch";
}

Operation::operand_range PrefetchOp::getODSOperands(unsigned index) {
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

Value  PrefetchOp::memref() {
  return *getODSOperands(0).begin();
}

Operation::operand_range PrefetchOp::indices() {
  return getODSOperands(1);
}

Operation::result_range PrefetchOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

BoolAttr PrefetchOp::isWriteAttr() {
  return this->getAttr("isWrite").cast<BoolAttr>();
}

bool PrefetchOp::isWrite() {
  auto attr = isWriteAttr();
  return attr.getValue();
}

IntegerAttr PrefetchOp::localityHintAttr() {
  return this->getAttr("localityHint").cast<IntegerAttr>();
}

APInt PrefetchOp::localityHint() {
  auto attr = localityHintAttr();
  return attr.getValue();
}

BoolAttr PrefetchOp::isDataCacheAttr() {
  return this->getAttr("isDataCache").cast<BoolAttr>();
}

bool PrefetchOp::isDataCache() {
  auto attr = isDataCacheAttr();
  return attr.getValue();
}

void PrefetchOp::build(Builder *builder, OperationState &result, Value memref,ArrayRef<Value> indices, bool isWrite, unsigned hint, bool isData) {
      auto hintAttr = builder->getI32IntegerAttr(hint);
      auto isWriteAttr = builder->getBoolAttr(isWrite);
      auto isDataCacheAttr = builder->getBoolAttr(isData);
      result.addOperands(memref);
      result.addOperands(indices);
      result.addAttribute("localityHint", hintAttr);
      result.addAttribute("isWrite", isWriteAttr);
      result.addAttribute("isDataCache", isDataCacheAttr);
    
}

void PrefetchOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addAttribute("isWrite", isWrite);
  tblgen_state.addAttribute("localityHint", localityHint);
  tblgen_state.addAttribute("isDataCache", isDataCache);
}

void PrefetchOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addAttribute("isWrite", isWrite);
  tblgen_state.addAttribute("localityHint", localityHint);
  tblgen_state.addAttribute("isDataCache", isDataCache);
  tblgen_state.addTypes(resultTypes);
}

void PrefetchOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addAttribute("isWrite", (*tblgen_builder).getBoolAttr(isWrite));
  tblgen_state.addAttribute("localityHint", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(32), localityHint));
  tblgen_state.addAttribute("isDataCache", (*tblgen_builder).getBoolAttr(isDataCache));
}

void PrefetchOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addAttribute("isWrite", (*tblgen_builder).getBoolAttr(isWrite));
  tblgen_state.addAttribute("localityHint", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(32), localityHint));
  tblgen_state.addAttribute("isDataCache", (*tblgen_builder).getBoolAttr(isDataCache));
  tblgen_state.addTypes(resultTypes);
}

void PrefetchOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult PrefetchOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parsePrefetchOp(parser, result);
}

void PrefetchOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult PrefetchOp::verify() {
  auto tblgen_isWrite = this->getAttr("isWrite");
  if (!tblgen_isWrite) return emitOpError("requires attribute 'isWrite'");
  {
    if (!((tblgen_isWrite.isa<BoolAttr>()))) return emitOpError("attribute 'isWrite' failed to satisfy constraint: bool attribute");
  }
  auto tblgen_localityHint = this->getAttr("localityHint");
  if (!tblgen_localityHint) return emitOpError("requires attribute 'localityHint'");
  {
    if (!((((tblgen_localityHint.isa<IntegerAttr>())) && ((tblgen_localityHint.cast<IntegerAttr>().getType().isInteger(32)))) && ((tblgen_localityHint.cast<IntegerAttr>().getInt() >= 0)) && ((tblgen_localityHint.cast<IntegerAttr>().getInt() <= 3)))) return emitOpError("attribute 'localityHint' failed to satisfy constraint: 32-bit integer attribute whose minimum value is 0 whose maximum value is 3");
  }
  auto tblgen_isDataCache = this->getAttr("isDataCache");
  if (!tblgen_isDataCache) return emitOpError("requires attribute 'isDataCache'");
  {
    if (!((tblgen_isDataCache.isa<BoolAttr>()))) return emitOpError("attribute 'isDataCache' failed to satisfy constraint: bool attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
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
// RankOp definitions
//===----------------------------------------------------------------------===//

RankOpOperandAdaptor::RankOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> RankOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef RankOp::getOperationName() {
  return "std.rank";
}

Operation::operand_range RankOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range RankOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void RankOp::build(Builder *builder, OperationState &result, Value tensor) {
      auto indexType = builder->getIndexType();
      build(builder, result, indexType, tensor);
    
}

void RankOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value tblgen_arg_0) {
  tblgen_state.addOperands(tblgen_arg_0);
  tblgen_state.addTypes(resultType0);
}

void RankOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value tblgen_arg_0) {
  tblgen_state.addOperands(tblgen_arg_0);
  tblgen_state.addTypes(resultTypes);
}

void RankOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult RankOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseRankOp(parser, result);
}

void RankOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult RankOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
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
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// RemFOp definitions
//===----------------------------------------------------------------------===//

RemFOpOperandAdaptor::RemFOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> RemFOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  RemFOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  RemFOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef RemFOp::getOperationName() {
  return "std.remf";
}

Operation::operand_range RemFOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  RemFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  RemFOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range RemFOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void RemFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void RemFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void RemFOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void RemFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void RemFOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult RemFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void RemFOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult RemFOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ReturnOp definitions
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

ArrayRef<Value> ReturnOpOperandAdaptor::operands() {
  return getODSOperands(0);
}

StringRef ReturnOp::getOperationName() {
  return "std.return";
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

Operation::operand_range ReturnOp::operands() {
  return getODSOperands(0);
}

Operation::result_range ReturnOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ReturnOp::build(Builder *b, OperationState &result) {
 build(b, result, llvm::None); 
}

void ReturnOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange operands) {
  tblgen_state.addOperands(operands);
}

void ReturnOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands) {
  tblgen_state.addOperands(operands);
  tblgen_state.addTypes(resultTypes);
}

void ReturnOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ReturnOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseReturnOp(parser, result);
}

void ReturnOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ReturnOp::verify() {
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
// SIToFPOp definitions
//===----------------------------------------------------------------------===//

SIToFPOpOperandAdaptor::SIToFPOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SIToFPOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SIToFPOpOperandAdaptor::in() {
  return *getODSOperands(0).begin();
}

StringRef SIToFPOp::getOperationName() {
  return "std.sitofp";
}

Operation::operand_range SIToFPOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SIToFPOp::in() {
  return *getODSOperands(0).begin();
}

Operation::result_range SIToFPOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void SIToFPOp::build(Builder *builder, OperationState &result, Value source, Type destType) {
       impl::buildCastOp(builder, result, source, destType);
  
}

void SIToFPOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value in) {
  tblgen_state.addOperands(in);
  tblgen_state.addTypes(resultType0);
}

void SIToFPOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in) {
  tblgen_state.addOperands(in);
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
  return impl::parseCastOp(parser, result);
}

void SIToFPOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult SIToFPOp::verify() {
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyCastOp(*this);
}


//===----------------------------------------------------------------------===//
// SelectOp definitions
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

Value  SelectOpOperandAdaptor::true_value() {
  return *getODSOperands(1).begin();
}

Value  SelectOpOperandAdaptor::false_value() {
  return *getODSOperands(2).begin();
}

StringRef SelectOp::getOperationName() {
  return "std.select";
}

Operation::operand_range SelectOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SelectOp::condition() {
  return *getODSOperands(0).begin();
}

Value  SelectOp::true_value() {
  return *getODSOperands(1).begin();
}

Value  SelectOp::false_value() {
  return *getODSOperands(2).begin();
}

Operation::result_range SelectOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void SelectOp::build(Builder *builder, OperationState &result, Value condition,Value trueValue, Value falseValue) {
      result.addOperands({condition, trueValue, falseValue});
      result.addTypes(trueValue.getType());
  
}

void SelectOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value condition, Value true_value, Value false_value) {
  tblgen_state.addOperands(condition);
  tblgen_state.addOperands(true_value);
  tblgen_state.addOperands(false_value);
  tblgen_state.addTypes(resultType0);
}

void SelectOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value condition, Value true_value, Value false_value) {
  tblgen_state.addOperands(condition);
  tblgen_state.addOperands(true_value);
  tblgen_state.addOperands(false_value);
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
  return ::parseSelectOp(parser, result);
}

void SelectOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult SelectOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))))) {
        return emitOpError("operand #") << index << " must be bool-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// ShiftLeftOp definitions
//===----------------------------------------------------------------------===//

ShiftLeftOpOperandAdaptor::ShiftLeftOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ShiftLeftOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ShiftLeftOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  ShiftLeftOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef ShiftLeftOp::getOperationName() {
  return "std.shift_left";
}

Operation::operand_range ShiftLeftOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ShiftLeftOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  ShiftLeftOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range ShiftLeftOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ShiftLeftOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void ShiftLeftOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void ShiftLeftOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void ShiftLeftOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void ShiftLeftOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult ShiftLeftOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void ShiftLeftOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult ShiftLeftOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// SignExtendIOp definitions
//===----------------------------------------------------------------------===//

SignExtendIOpOperandAdaptor::SignExtendIOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SignExtendIOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SignExtendIOpOperandAdaptor::value() {
  return *getODSOperands(0).begin();
}

StringRef SignExtendIOp::getOperationName() {
  return "std.sexti";
}

Operation::operand_range SignExtendIOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SignExtendIOp::value() {
  return *getODSOperands(0).begin();
}

Operation::result_range SignExtendIOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void SignExtendIOp::build(Builder *builder, OperationState &result, Value value, Type destType) {
      result.addOperands(value);
      result.addTypes(destType);
  
}

void SignExtendIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value value) {
  tblgen_state.addOperands(value);
  tblgen_state.addTypes(resultType0);
}

void SignExtendIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value) {
  tblgen_state.addOperands(value);
  tblgen_state.addTypes(resultTypes);
}

void SignExtendIOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SignExtendIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void SignExtendIOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult SignExtendIOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("result #") << index << " must be integer-like, but got " << v.getType();
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
// SignedDivIOp definitions
//===----------------------------------------------------------------------===//

SignedDivIOpOperandAdaptor::SignedDivIOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SignedDivIOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SignedDivIOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  SignedDivIOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef SignedDivIOp::getOperationName() {
  return "std.divi_signed";
}

Operation::operand_range SignedDivIOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SignedDivIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  SignedDivIOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range SignedDivIOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void SignedDivIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void SignedDivIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void SignedDivIOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void SignedDivIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void SignedDivIOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult SignedDivIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SignedDivIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult SignedDivIOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// SignedRemIOp definitions
//===----------------------------------------------------------------------===//

SignedRemIOpOperandAdaptor::SignedRemIOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SignedRemIOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SignedRemIOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  SignedRemIOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef SignedRemIOp::getOperationName() {
  return "std.remi_signed";
}

Operation::operand_range SignedRemIOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SignedRemIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  SignedRemIOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range SignedRemIOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void SignedRemIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void SignedRemIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void SignedRemIOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void SignedRemIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void SignedRemIOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult SignedRemIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SignedRemIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult SignedRemIOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// SignedShiftRightOp definitions
//===----------------------------------------------------------------------===//

SignedShiftRightOpOperandAdaptor::SignedShiftRightOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SignedShiftRightOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SignedShiftRightOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  SignedShiftRightOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef SignedShiftRightOp::getOperationName() {
  return "std.shift_right_signed";
}

Operation::operand_range SignedShiftRightOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SignedShiftRightOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  SignedShiftRightOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range SignedShiftRightOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void SignedShiftRightOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void SignedShiftRightOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void SignedShiftRightOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void SignedShiftRightOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void SignedShiftRightOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult SignedShiftRightOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SignedShiftRightOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult SignedShiftRightOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// SplatOp definitions
//===----------------------------------------------------------------------===//

SplatOpOperandAdaptor::SplatOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SplatOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SplatOpOperandAdaptor::input() {
  return *getODSOperands(0).begin();
}

StringRef SplatOp::getOperationName() {
  return "std.splat";
}

Operation::operand_range SplatOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SplatOp::input() {
  return *getODSOperands(0).begin();
}

Operation::result_range SplatOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SplatOp::aggregate() {
  return *getODSResults(0).begin();
}

void SplatOp::build(Builder *builder, OperationState &result, Value element, Type aggregateType) {
 build(builder, result, aggregateType, element); 
}

void SplatOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type aggregate, Value input) {
  tblgen_state.addOperands(input);
  tblgen_state.addTypes(aggregate);
}

void SplatOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value input) {
  tblgen_state.addOperands(input);
  tblgen_state.addTypes(resultTypes);
}

void SplatOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SplatOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseSplatOp(parser, result);
}

void SplatOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult SplatOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<FloatType>())))) {
        return emitOpError("operand #") << index << " must be integer or float type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && ((true))) || ((((v.getType().isa<TensorType>())) && ((true))) && ((v.getType().cast<ShapedType>().hasStaticShape()))))) {
        return emitOpError("result #") << index << " must be vector of any type values or statically shaped tensor of any type values, but got " << v.getType();
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
// StoreOp definitions
//===----------------------------------------------------------------------===//

StoreOpOperandAdaptor::StoreOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> StoreOpOperandAdaptor::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (tblgen_operands.size() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(tblgen_operands.begin(), offset), std::next(tblgen_operands.begin(), offset + size)};
}

Value  StoreOpOperandAdaptor::value() {
  return *getODSOperands(0).begin();
}

Value  StoreOpOperandAdaptor::memref() {
  return *getODSOperands(1).begin();
}

ArrayRef<Value> StoreOpOperandAdaptor::indices() {
  return getODSOperands(2);
}

StringRef StoreOp::getOperationName() {
  return "std.store";
}

Operation::operand_range StoreOp::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->operand_begin(), offset), std::next(getOperation()->operand_begin(), offset + size)};
}

Value  StoreOp::value() {
  return *getODSOperands(0).begin();
}

Value  StoreOp::memref() {
  return *getODSOperands(1).begin();
}

Operation::operand_range StoreOp::indices() {
  return getODSOperands(2);
}

Operation::result_range StoreOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void StoreOp::build(Builder *, OperationState &result, Value valueToStore, Value memref) {
      result.addOperands(valueToStore);
      result.addOperands(memref);
  
}

void StoreOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value value, Value memref, ValueRange indices) {
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
}

void StoreOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value, Value memref, ValueRange indices) {
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addTypes(resultTypes);
}

void StoreOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult StoreOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseStoreOp(parser, result);
}

void StoreOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult StoreOp::verify() {
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
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// SubFOp definitions
//===----------------------------------------------------------------------===//

SubFOpOperandAdaptor::SubFOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SubFOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SubFOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  SubFOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef SubFOp::getOperationName() {
  return "std.subf";
}

Operation::operand_range SubFOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SubFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  SubFOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range SubFOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void SubFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void SubFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void SubFOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void SubFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void SubFOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult SubFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SubFOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult SubFOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// SubIOp definitions
//===----------------------------------------------------------------------===//

SubIOpOperandAdaptor::SubIOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SubIOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SubIOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  SubIOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef SubIOp::getOperationName() {
  return "std.subi";
}

Operation::operand_range SubIOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SubIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  SubIOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range SubIOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void SubIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void SubIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void SubIOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void SubIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void SubIOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult SubIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SubIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult SubIOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// SubViewOp definitions
//===----------------------------------------------------------------------===//

StringRef SubViewOp::getOperationName() {
  return "std.subview";
}

Operation::operand_range SubViewOp::getODSOperands(unsigned index) {
  auto sizeAttr = getAttrOfType<DenseIntElementsAttr>("operand_segment_sizes");
  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned end = start + (*(sizeAttr.begin() + index)).getZExtValue();
  return {std::next(getOperation()->operand_begin(), start), std::next(getOperation()->operand_begin(), end)};
}

Value  SubViewOp::source() {
  return *getODSOperands(0).begin();
}

Operation::operand_range SubViewOp::offsets() {
  return getODSOperands(1);
}

Operation::operand_range SubViewOp::sizes() {
  return getODSOperands(2);
}

Operation::operand_range SubViewOp::strides() {
  return getODSOperands(3);
}

Operation::result_range SubViewOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

DenseIntElementsAttr SubViewOp::operand_segment_sizesAttr() {
  return this->getAttr("operand_segment_sizes").cast<DenseIntElementsAttr>();
}

DenseIntElementsAttr SubViewOp::operand_segment_sizes() {
  auto attr = operand_segment_sizesAttr();
  return attr;
}





void SubViewOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value source, ValueRange offsets, ValueRange sizes, ValueRange strides, DenseIntElementsAttr operand_segment_sizes) {
  tblgen_state.addOperands(source);
  tblgen_state.addOperands(offsets);
  tblgen_state.addOperands(sizes);
  tblgen_state.addOperands(strides);
  tblgen_state.addAttribute("operand_segment_sizes", operand_segment_sizes);
  tblgen_state.addTypes(resultType0);
}

void SubViewOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value source, ValueRange offsets, ValueRange sizes, ValueRange strides, DenseIntElementsAttr operand_segment_sizes) {
  tblgen_state.addOperands(source);
  tblgen_state.addOperands(offsets);
  tblgen_state.addOperands(sizes);
  tblgen_state.addOperands(strides);
  tblgen_state.addAttribute("operand_segment_sizes", operand_segment_sizes);
  tblgen_state.addTypes(resultTypes);
}

void SubViewOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SubViewOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseSubViewOp(parser, result);
}

void SubViewOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult SubViewOp::verify() {
  auto tblgen_operand_segment_sizes = this->getAttr("operand_segment_sizes");
  if (!tblgen_operand_segment_sizes) return emitOpError("requires attribute 'operand_segment_sizes'");
  {
    if (!((tblgen_operand_segment_sizes.isa<DenseIntElementsAttr>() &&tblgen_operand_segment_sizes.cast<DenseIntElementsAttr>().getType().getElementType().isInteger(32)))) return emitOpError("attribute 'operand_segment_sizes' failed to satisfy constraint: 32-bit integer elements attribute");
  }

  auto sizeAttr = getAttrOfType<DenseIntElementsAttr>("operand_segment_sizes");
  auto numElements = sizeAttr.getType().cast<ShapedType>().getNumElements();
  if (numElements != 4) {
    return emitOpError("'operand_segment_sizes' attribute for specifying operand segments "
                       "must have 4 elements");
  }
    {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
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
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be memref of any type values, but got " << v.getType();
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
// TanhOp definitions
//===----------------------------------------------------------------------===//

TanhOpOperandAdaptor::TanhOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> TanhOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  TanhOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef TanhOp::getOperationName() {
  return "std.tanh";
}

Operation::operand_range TanhOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  TanhOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range TanhOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void TanhOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultType0);
}

void TanhOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void TanhOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void TanhOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void TanhOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult TanhOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void TanhOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult TanhOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// TensorCastOp definitions
//===----------------------------------------------------------------------===//

TensorCastOpOperandAdaptor::TensorCastOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> TensorCastOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef TensorCastOp::getOperationName() {
  return "std.tensor_cast";
}

Operation::operand_range TensorCastOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range TensorCastOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void TensorCastOp::build(Builder *builder, OperationState &result, Value source, Type destType) {
       impl::buildCastOp(builder, result, source, destType);
  
}

void TensorCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value tblgen_arg_0) {
  tblgen_state.addOperands(tblgen_arg_0);
  tblgen_state.addTypes(resultType0);
}

void TensorCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value tblgen_arg_0) {
  tblgen_state.addOperands(tblgen_arg_0);
  tblgen_state.addTypes(resultTypes);
}

void TensorCastOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult TensorCastOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void TensorCastOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult TensorCastOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyCastOp(*this);
}




//===----------------------------------------------------------------------===//
// TensorLoadOp definitions
//===----------------------------------------------------------------------===//

TensorLoadOpOperandAdaptor::TensorLoadOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> TensorLoadOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef TensorLoadOp::getOperationName() {
  return "std.tensor_load";
}

Operation::operand_range TensorLoadOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range TensorLoadOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void TensorLoadOp::build(Builder *builder, OperationState &result, Value memref) {
      auto memrefType = memref.getType().cast<MemRefType>();
      auto resultType = RankedTensorType::get(memrefType.getShape(),
                                              memrefType.getElementType());
      result.addOperands(memref);
      result.addTypes(resultType);
  
}

void TensorLoadOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value tblgen_arg_0) {
  tblgen_state.addOperands(tblgen_arg_0);
  tblgen_state.addTypes(resultType0);
}

void TensorLoadOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value tblgen_arg_0) {
  tblgen_state.addOperands(tblgen_arg_0);
  tblgen_state.addTypes(resultTypes);
}

void TensorLoadOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult TensorLoadOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseTensorLoadOp(parser, result);
}

void TensorLoadOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TensorLoadOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be tensor of any type values, but got " << v.getType();
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
// TensorStoreOp definitions
//===----------------------------------------------------------------------===//

TensorStoreOpOperandAdaptor::TensorStoreOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> TensorStoreOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  TensorStoreOpOperandAdaptor::tensor() {
  return *getODSOperands(0).begin();
}

Value  TensorStoreOpOperandAdaptor::memref() {
  return *getODSOperands(1).begin();
}

StringRef TensorStoreOp::getOperationName() {
  return "std.tensor_store";
}

Operation::operand_range TensorStoreOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  TensorStoreOp::tensor() {
  return *getODSOperands(0).begin();
}

Value  TensorStoreOp::memref() {
  return *getODSOperands(1).begin();
}

Operation::result_range TensorStoreOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void TensorStoreOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value tensor, Value memref) {
  tblgen_state.addOperands(tensor);
  tblgen_state.addOperands(memref);
}

void TensorStoreOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value tensor, Value memref) {
  tblgen_state.addOperands(tensor);
  tblgen_state.addOperands(memref);
  tblgen_state.addTypes(resultTypes);
}

void TensorStoreOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult TensorStoreOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseTensorStoreOp(parser, result);
}

void TensorStoreOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TensorStoreOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
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
// TruncateIOp definitions
//===----------------------------------------------------------------------===//

TruncateIOpOperandAdaptor::TruncateIOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> TruncateIOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  TruncateIOpOperandAdaptor::value() {
  return *getODSOperands(0).begin();
}

StringRef TruncateIOp::getOperationName() {
  return "std.trunci";
}

Operation::operand_range TruncateIOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  TruncateIOp::value() {
  return *getODSOperands(0).begin();
}

Operation::result_range TruncateIOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void TruncateIOp::build(Builder *builder, OperationState &result, Value value, Type destType) {
      result.addOperands(value);
      result.addTypes(destType);
  
}

void TruncateIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value value) {
  tblgen_state.addOperands(value);
  tblgen_state.addTypes(resultType0);
}

void TruncateIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value) {
  tblgen_state.addOperands(value);
  tblgen_state.addTypes(resultTypes);
}

void TruncateIOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult TruncateIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void TruncateIOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult TruncateIOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("result #") << index << " must be integer-like, but got " << v.getType();
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
// UnsignedDivIOp definitions
//===----------------------------------------------------------------------===//

UnsignedDivIOpOperandAdaptor::UnsignedDivIOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UnsignedDivIOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  UnsignedDivIOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  UnsignedDivIOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef UnsignedDivIOp::getOperationName() {
  return "std.divi_unsigned";
}

Operation::operand_range UnsignedDivIOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  UnsignedDivIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  UnsignedDivIOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range UnsignedDivIOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void UnsignedDivIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void UnsignedDivIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void UnsignedDivIOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void UnsignedDivIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void UnsignedDivIOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult UnsignedDivIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void UnsignedDivIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult UnsignedDivIOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// UnsignedRemIOp definitions
//===----------------------------------------------------------------------===//

UnsignedRemIOpOperandAdaptor::UnsignedRemIOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UnsignedRemIOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  UnsignedRemIOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  UnsignedRemIOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef UnsignedRemIOp::getOperationName() {
  return "std.remi_unsigned";
}

Operation::operand_range UnsignedRemIOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  UnsignedRemIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  UnsignedRemIOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range UnsignedRemIOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void UnsignedRemIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void UnsignedRemIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void UnsignedRemIOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void UnsignedRemIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void UnsignedRemIOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult UnsignedRemIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void UnsignedRemIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult UnsignedRemIOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// UnsignedShiftRightOp definitions
//===----------------------------------------------------------------------===//

UnsignedShiftRightOpOperandAdaptor::UnsignedShiftRightOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UnsignedShiftRightOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  UnsignedShiftRightOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  UnsignedShiftRightOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef UnsignedShiftRightOp::getOperationName() {
  return "std.shift_right_unsigned";
}

Operation::operand_range UnsignedShiftRightOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  UnsignedShiftRightOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  UnsignedShiftRightOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range UnsignedShiftRightOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void UnsignedShiftRightOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
}

void UnsignedShiftRightOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void UnsignedShiftRightOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void UnsignedShiftRightOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes({lhs.getType()});

}

void UnsignedShiftRightOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult UnsignedShiftRightOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void UnsignedShiftRightOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult UnsignedShiftRightOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ViewOp definitions
//===----------------------------------------------------------------------===//

ViewOpOperandAdaptor::ViewOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ViewOpOperandAdaptor::getODSOperands(unsigned index) {
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

Value  ViewOpOperandAdaptor::source() {
  return *getODSOperands(0).begin();
}

ArrayRef<Value> ViewOpOperandAdaptor::operands() {
  return getODSOperands(1);
}

StringRef ViewOp::getOperationName() {
  return "std.view";
}

Operation::operand_range ViewOp::getODSOperands(unsigned index) {
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

Value  ViewOp::source() {
  return *getODSOperands(0).begin();
}

Operation::operand_range ViewOp::operands() {
  return getODSOperands(1);
}

Operation::result_range ViewOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ViewOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value source, ValueRange operands) {
  tblgen_state.addOperands(source);
  tblgen_state.addOperands(operands);
  tblgen_state.addTypes(resultType0);
}

void ViewOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value source, ValueRange operands) {
  tblgen_state.addOperands(source);
  tblgen_state.addOperands(operands);
  tblgen_state.addTypes(resultTypes);
}

void ViewOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ViewOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseViewOp(parser, result);
}

void ViewOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ViewOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(8)))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 1))))) {
        return emitOpError("operand #") << index << " must be 1D memref of 8-bit integer values, but got " << v.getType();
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
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be memref of any type values, but got " << v.getType();
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
// XOrOp definitions
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
  return "std.xor";
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

void XOrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultType0);
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
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult XOrOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
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
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// ZeroExtendIOp definitions
//===----------------------------------------------------------------------===//

ZeroExtendIOpOperandAdaptor::ZeroExtendIOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ZeroExtendIOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ZeroExtendIOpOperandAdaptor::value() {
  return *getODSOperands(0).begin();
}

StringRef ZeroExtendIOp::getOperationName() {
  return "std.zexti";
}

Operation::operand_range ZeroExtendIOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ZeroExtendIOp::value() {
  return *getODSOperands(0).begin();
}

Operation::result_range ZeroExtendIOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ZeroExtendIOp::build(Builder *builder, OperationState &result, Value value, Type destType) {
      result.addOperands(value);
      result.addTypes(destType);
  
}

void ZeroExtendIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value value) {
  tblgen_state.addOperands(value);
  tblgen_state.addTypes(resultType0);
}

void ZeroExtendIOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value) {
  tblgen_state.addOperands(value);
  tblgen_state.addTypes(resultTypes);
}

void ZeroExtendIOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ZeroExtendIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void ZeroExtendIOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult ZeroExtendIOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("operand #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<IntegerType>())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>()))))) {
        return emitOpError("result #") << index << " must be integer-like, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}


#endif  // GET_OP_CLASSES

