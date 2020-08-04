/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

fxpmath::ClampISOp,
fxpmath::ConvertISOp,
fxpmath::ConvertISToFOp,
fxpmath::RealAddEwOp,
fxpmath::RealCompareZeroEwOp,
fxpmath::RealDivEwOp,
fxpmath::RealMatMulBiasOp,
fxpmath::RealMatMulOp,
fxpmath::RealMulEwOp,
fxpmath::RealSubEwOp,
fxpmath::RealUnaryEwOp,
fxpmath::RoundingDivideByPotISOp,
fxpmath::VecScalarSaturatingRoundingDoublingHighMulISOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// fxpmath::ClampISOp definitions
//===----------------------------------------------------------------------===//

ClampISOpOperandAdaptor::ClampISOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ClampISOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ClampISOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef ClampISOp::getOperationName() {
  return "fxpmath.clampis";
}

Operation::operand_range ClampISOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ClampISOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range ClampISOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

IntegerAttr ClampISOp::clamp_minAttr() {
  return this->getAttr("clamp_min").cast<IntegerAttr>();
}

APInt ClampISOp::clamp_min() {
  auto attr = clamp_minAttr();
  return attr.getValue();
}

IntegerAttr ClampISOp::clamp_maxAttr() {
  return this->getAttr("clamp_max").cast<IntegerAttr>();
}

APInt ClampISOp::clamp_max() {
  auto attr = clamp_maxAttr();
  return attr.getValue();
}

void ClampISOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand, IntegerAttr clamp_min, IntegerAttr clamp_max) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("clamp_min", clamp_min);
  tblgen_state.addAttribute("clamp_max", clamp_max);
  tblgen_state.addTypes(resultType0);
}

void ClampISOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand, IntegerAttr clamp_min, IntegerAttr clamp_max) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("clamp_min", clamp_min);
  tblgen_state.addAttribute("clamp_max", clamp_max);
  tblgen_state.addTypes(resultTypes);
}

void ClampISOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void ClampISOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand, IntegerAttr clamp_min, IntegerAttr clamp_max) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("clamp_min", clamp_min);
  tblgen_state.addAttribute("clamp_max", clamp_max);
  tblgen_state.addTypes({operand.getType()});

}

void ClampISOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult ClampISOp::verify() {
  auto tblgen_clamp_min = this->getAttr("clamp_min");
  if (!tblgen_clamp_min) return emitOpError("requires attribute 'clamp_min'");
  {
    if (!((tblgen_clamp_min.isa<IntegerAttr>()))) return emitOpError("attribute 'clamp_min' failed to satisfy constraint: arbitrary integer attribute");
  }
  auto tblgen_clamp_max = this->getAttr("clamp_max");
  if (!tblgen_clamp_max) return emitOpError("requires attribute 'clamp_max'");
  {
    if (!((tblgen_clamp_max.isa<IntegerAttr>()))) return emitOpError("attribute 'clamp_max' failed to satisfy constraint: arbitrary integer attribute");
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// fxpmath::ConvertISOp definitions
//===----------------------------------------------------------------------===//

ConvertISOpOperandAdaptor::ConvertISOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ConvertISOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ConvertISOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef ConvertISOp::getOperationName() {
  return "fxpmath.convertis";
}

Operation::operand_range ConvertISOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ConvertISOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range ConvertISOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ConvertISOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultType0);
}

void ConvertISOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void ConvertISOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult ConvertISOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// fxpmath::ConvertISToFOp definitions
//===----------------------------------------------------------------------===//

ConvertISToFOpOperandAdaptor::ConvertISToFOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ConvertISToFOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ConvertISToFOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef ConvertISToFOp::getOperationName() {
  return "fxpmath.convertistof";
}

Operation::operand_range ConvertISToFOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ConvertISToFOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range ConvertISToFOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ConvertISToFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultType0);
}

void ConvertISToFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void ConvertISToFOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult ConvertISToFOp::verify() {
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
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("result #") << index << " must be floating-point-like, but got " << v.getType();
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
// fxpmath::RealAddEwOp definitions
//===----------------------------------------------------------------------===//

RealAddEwOpOperandAdaptor::RealAddEwOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> RealAddEwOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  RealAddEwOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  RealAddEwOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef RealAddEwOp::getOperationName() {
  return "fxpmath.real_add_ew";
}

Operation::operand_range RealAddEwOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  RealAddEwOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  RealAddEwOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range RealAddEwOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  RealAddEwOp::res() {
  return *getODSResults(0).begin();
}

FloatAttr RealAddEwOp::clamp_minAttr() {
  return this->getAttr("clamp_min").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealAddEwOp::clamp_min() {
  auto attr = clamp_minAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

FloatAttr RealAddEwOp::clamp_maxAttr() {
  return this->getAttr("clamp_max").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealAddEwOp::clamp_max() {
  auto attr = clamp_maxAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

void RealAddEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(res);
}

void RealAddEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(resultTypes);
}

void RealAddEwOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult RealAddEwOp::verify() {
  auto tblgen_clamp_min = this->getAttr("clamp_min");
  if (tblgen_clamp_min) {
    if (!(((tblgen_clamp_min.isa<FloatAttr>())) && ((tblgen_clamp_min.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_min' failed to satisfy constraint: 64-bit float attribute");
  }
  auto tblgen_clamp_max = this->getAttr("clamp_max");
  if (tblgen_clamp_max) {
    if (!(((tblgen_clamp_max.isa<FloatAttr>())) && ((tblgen_clamp_max.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_max' failed to satisfy constraint: 64-bit float attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
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
// fxpmath::RealCompareZeroEwOp definitions
//===----------------------------------------------------------------------===//

RealCompareZeroEwOpOperandAdaptor::RealCompareZeroEwOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> RealCompareZeroEwOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  RealCompareZeroEwOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef RealCompareZeroEwOp::getOperationName() {
  return "fxpmath.compare";
}

Operation::operand_range RealCompareZeroEwOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  RealCompareZeroEwOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range RealCompareZeroEwOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  RealCompareZeroEwOp::res() {
  return *getODSResults(0).begin();
}

StringAttr RealCompareZeroEwOp::fnAttr() {
  return this->getAttr("fn").cast<StringAttr>();
}

StringRef RealCompareZeroEwOp::fn() {
  auto attr = fnAttr();
  return attr.getValue();
}

void RealCompareZeroEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value operand, StringAttr fn) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("fn", fn);
  tblgen_state.addTypes(res);
}

void RealCompareZeroEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand, StringAttr fn) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("fn", fn);
  tblgen_state.addTypes(resultTypes);
}

void RealCompareZeroEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value operand, StringRef fn) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("fn", (*tblgen_builder).getStringAttr("fn"));
  tblgen_state.addTypes(res);
}

void RealCompareZeroEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand, StringRef fn) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("fn", (*tblgen_builder).getStringAttr("fn"));
  tblgen_state.addTypes(resultTypes);
}

void RealCompareZeroEwOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult RealCompareZeroEwOp::verify() {
  auto tblgen_fn = this->getAttr("fn");
  if (!tblgen_fn) return emitOpError("requires attribute 'fn'");
  {
    if (!(((tblgen_fn.isa<StringAttr>())) && (((tblgen_fn.cast<StringAttr>().getValue() == "CMPZ")) || ((tblgen_fn.cast<StringAttr>().getValue() == "CMPNZ")) || ((tblgen_fn.cast<StringAttr>().getValue() == "CMPLZ")) || ((tblgen_fn.cast<StringAttr>().getValue() == "CMPLZE")) || ((tblgen_fn.cast<StringAttr>().getValue() == "CMPGZ")) || ((tblgen_fn.cast<StringAttr>().getValue() == "CMPGZE"))))) return emitOpError("attribute 'fn' failed to satisfy constraint: Type of subtraction-result comparison to perform.");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1))))) {
        return emitOpError("result #") << index << " must be tensor of 1-bit integer values, but got " << v.getType();
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
// fxpmath::RealDivEwOp definitions
//===----------------------------------------------------------------------===//

RealDivEwOpOperandAdaptor::RealDivEwOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> RealDivEwOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  RealDivEwOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  RealDivEwOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef RealDivEwOp::getOperationName() {
  return "fxpmath.real_div_ew";
}

Operation::operand_range RealDivEwOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  RealDivEwOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  RealDivEwOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range RealDivEwOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  RealDivEwOp::res() {
  return *getODSResults(0).begin();
}

FloatAttr RealDivEwOp::clamp_minAttr() {
  return this->getAttr("clamp_min").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealDivEwOp::clamp_min() {
  auto attr = clamp_minAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

FloatAttr RealDivEwOp::clamp_maxAttr() {
  return this->getAttr("clamp_max").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealDivEwOp::clamp_max() {
  auto attr = clamp_maxAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

void RealDivEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(res);
}

void RealDivEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(resultTypes);
}

void RealDivEwOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult RealDivEwOp::verify() {
  auto tblgen_clamp_min = this->getAttr("clamp_min");
  if (tblgen_clamp_min) {
    if (!(((tblgen_clamp_min.isa<FloatAttr>())) && ((tblgen_clamp_min.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_min' failed to satisfy constraint: 64-bit float attribute");
  }
  auto tblgen_clamp_max = this->getAttr("clamp_max");
  if (tblgen_clamp_max) {
    if (!(((tblgen_clamp_max.isa<FloatAttr>())) && ((tblgen_clamp_max.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_max' failed to satisfy constraint: 64-bit float attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
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
// fxpmath::RealMatMulBiasOp definitions
//===----------------------------------------------------------------------===//

RealMatMulBiasOpOperandAdaptor::RealMatMulBiasOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> RealMatMulBiasOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  RealMatMulBiasOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  RealMatMulBiasOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

Value  RealMatMulBiasOpOperandAdaptor::bias() {
  return *getODSOperands(2).begin();
}

StringRef RealMatMulBiasOp::getOperationName() {
  return "fxpmath.real_matmul_bias";
}

Operation::operand_range RealMatMulBiasOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  RealMatMulBiasOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  RealMatMulBiasOp::rhs() {
  return *getODSOperands(1).begin();
}

Value  RealMatMulBiasOp::bias() {
  return *getODSOperands(2).begin();
}

Operation::result_range RealMatMulBiasOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  RealMatMulBiasOp::res() {
  return *getODSResults(0).begin();
}

FloatAttr RealMatMulBiasOp::clamp_minAttr() {
  return this->getAttr("clamp_min").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealMatMulBiasOp::clamp_min() {
  auto attr = clamp_minAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

FloatAttr RealMatMulBiasOp::clamp_maxAttr() {
  return this->getAttr("clamp_max").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealMatMulBiasOp::clamp_max() {
  auto attr = clamp_maxAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

void RealMatMulBiasOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs, Value bias, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addOperands(bias);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(res);
}

void RealMatMulBiasOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value bias, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addOperands(bias);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(resultTypes);
}

void RealMatMulBiasOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult RealMatMulBiasOp::verify() {
  auto tblgen_clamp_min = this->getAttr("clamp_min");
  if (tblgen_clamp_min) {
    if (!(((tblgen_clamp_min.isa<FloatAttr>())) && ((tblgen_clamp_min.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_min' failed to satisfy constraint: 64-bit float attribute");
  }
  auto tblgen_clamp_max = this->getAttr("clamp_max");
  if (tblgen_clamp_max) {
    if (!(((tblgen_clamp_max.isa<FloatAttr>())) && ((tblgen_clamp_max.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_max' failed to satisfy constraint: 64-bit float attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
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
// fxpmath::RealMatMulOp definitions
//===----------------------------------------------------------------------===//

RealMatMulOpOperandAdaptor::RealMatMulOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> RealMatMulOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  RealMatMulOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  RealMatMulOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef RealMatMulOp::getOperationName() {
  return "fxpmath.real_matmul";
}

Operation::operand_range RealMatMulOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  RealMatMulOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  RealMatMulOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range RealMatMulOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  RealMatMulOp::res() {
  return *getODSResults(0).begin();
}

FloatAttr RealMatMulOp::clamp_minAttr() {
  return this->getAttr("clamp_min").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealMatMulOp::clamp_min() {
  auto attr = clamp_minAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

FloatAttr RealMatMulOp::clamp_maxAttr() {
  return this->getAttr("clamp_max").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealMatMulOp::clamp_max() {
  auto attr = clamp_maxAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

void RealMatMulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(res);
}

void RealMatMulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(resultTypes);
}

void RealMatMulOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult RealMatMulOp::verify() {
  auto tblgen_clamp_min = this->getAttr("clamp_min");
  if (tblgen_clamp_min) {
    if (!(((tblgen_clamp_min.isa<FloatAttr>())) && ((tblgen_clamp_min.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_min' failed to satisfy constraint: 64-bit float attribute");
  }
  auto tblgen_clamp_max = this->getAttr("clamp_max");
  if (tblgen_clamp_max) {
    if (!(((tblgen_clamp_max.isa<FloatAttr>())) && ((tblgen_clamp_max.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_max' failed to satisfy constraint: 64-bit float attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
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
// fxpmath::RealMulEwOp definitions
//===----------------------------------------------------------------------===//

RealMulEwOpOperandAdaptor::RealMulEwOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> RealMulEwOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  RealMulEwOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  RealMulEwOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef RealMulEwOp::getOperationName() {
  return "fxpmath.real_mul_ew";
}

Operation::operand_range RealMulEwOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  RealMulEwOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  RealMulEwOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range RealMulEwOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  RealMulEwOp::res() {
  return *getODSResults(0).begin();
}

FloatAttr RealMulEwOp::clamp_minAttr() {
  return this->getAttr("clamp_min").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealMulEwOp::clamp_min() {
  auto attr = clamp_minAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

FloatAttr RealMulEwOp::clamp_maxAttr() {
  return this->getAttr("clamp_max").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealMulEwOp::clamp_max() {
  auto attr = clamp_maxAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

void RealMulEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(res);
}

void RealMulEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(resultTypes);
}

void RealMulEwOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult RealMulEwOp::verify() {
  auto tblgen_clamp_min = this->getAttr("clamp_min");
  if (tblgen_clamp_min) {
    if (!(((tblgen_clamp_min.isa<FloatAttr>())) && ((tblgen_clamp_min.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_min' failed to satisfy constraint: 64-bit float attribute");
  }
  auto tblgen_clamp_max = this->getAttr("clamp_max");
  if (tblgen_clamp_max) {
    if (!(((tblgen_clamp_max.isa<FloatAttr>())) && ((tblgen_clamp_max.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_max' failed to satisfy constraint: 64-bit float attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
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
// fxpmath::RealSubEwOp definitions
//===----------------------------------------------------------------------===//

RealSubEwOpOperandAdaptor::RealSubEwOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> RealSubEwOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  RealSubEwOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  RealSubEwOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef RealSubEwOp::getOperationName() {
  return "fxpmath.real_sub_ew";
}

Operation::operand_range RealSubEwOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  RealSubEwOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  RealSubEwOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range RealSubEwOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  RealSubEwOp::res() {
  return *getODSResults(0).begin();
}

FloatAttr RealSubEwOp::clamp_minAttr() {
  return this->getAttr("clamp_min").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealSubEwOp::clamp_min() {
  auto attr = clamp_minAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

FloatAttr RealSubEwOp::clamp_maxAttr() {
  return this->getAttr("clamp_max").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealSubEwOp::clamp_max() {
  auto attr = clamp_maxAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

void RealSubEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(res);
}

void RealSubEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(resultTypes);
}

void RealSubEwOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult RealSubEwOp::verify() {
  auto tblgen_clamp_min = this->getAttr("clamp_min");
  if (tblgen_clamp_min) {
    if (!(((tblgen_clamp_min.isa<FloatAttr>())) && ((tblgen_clamp_min.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_min' failed to satisfy constraint: 64-bit float attribute");
  }
  auto tblgen_clamp_max = this->getAttr("clamp_max");
  if (tblgen_clamp_max) {
    if (!(((tblgen_clamp_max.isa<FloatAttr>())) && ((tblgen_clamp_max.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_max' failed to satisfy constraint: 64-bit float attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
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
// fxpmath::RealUnaryEwOp definitions
//===----------------------------------------------------------------------===//

RealUnaryEwOpOperandAdaptor::RealUnaryEwOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> RealUnaryEwOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  RealUnaryEwOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef RealUnaryEwOp::getOperationName() {
  return "fxpmath.real_unary_ew";
}

Operation::operand_range RealUnaryEwOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  RealUnaryEwOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range RealUnaryEwOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  RealUnaryEwOp::res() {
  return *getODSResults(0).begin();
}

StringAttr RealUnaryEwOp::fnAttr() {
  return this->getAttr("fn").dyn_cast_or_null<StringAttr>();
}

StringRef RealUnaryEwOp::fn() {
  auto attr = fnAttr();
    if (!attr)
      return mlir::Builder(this->getContext()).getStringAttr("IDENTITY").getValue();
  return attr.getValue();
}

FloatAttr RealUnaryEwOp::clamp_minAttr() {
  return this->getAttr("clamp_min").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealUnaryEwOp::clamp_min() {
  auto attr = clamp_minAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

FloatAttr RealUnaryEwOp::clamp_maxAttr() {
  return this->getAttr("clamp_max").dyn_cast_or_null<FloatAttr>();
}

Optional< APFloat > RealUnaryEwOp::clamp_max() {
  auto attr = clamp_maxAttr();
  return attr ? Optional< APFloat >(attr.getValue()) : (llvm::None);
}

void RealUnaryEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value operand, StringAttr fn, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("fn", fn);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(res);
}

void RealUnaryEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand, StringAttr fn, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("fn", fn);
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(resultTypes);
}

void RealUnaryEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value operand, StringRef fn, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("fn", (*tblgen_builder).getStringAttr("fn"));
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(res);
}

void RealUnaryEwOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand, StringRef fn, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("fn", (*tblgen_builder).getStringAttr("fn"));
  if (clamp_min) {
  tblgen_state.addAttribute("clamp_min", clamp_min);
  }
  if (clamp_max) {
  tblgen_state.addAttribute("clamp_max", clamp_max);
  }
  tblgen_state.addTypes(resultTypes);
}

void RealUnaryEwOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult RealUnaryEwOp::verify() {
  auto tblgen_fn = this->getAttr("fn");
  if (tblgen_fn) {
    if (!((true))) return emitOpError("attribute 'fn' failed to satisfy constraint: element-wise unary function");
  }
  auto tblgen_clamp_min = this->getAttr("clamp_min");
  if (tblgen_clamp_min) {
    if (!(((tblgen_clamp_min.isa<FloatAttr>())) && ((tblgen_clamp_min.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_min' failed to satisfy constraint: 64-bit float attribute");
  }
  auto tblgen_clamp_max = this->getAttr("clamp_max");
  if (tblgen_clamp_max) {
    if (!(((tblgen_clamp_max.isa<FloatAttr>())) && ((tblgen_clamp_max.cast<FloatAttr>().getType().isF64())))) return emitOpError("attribute 'clamp_max' failed to satisfy constraint: 64-bit float attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
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
// fxpmath::RoundingDivideByPotISOp definitions
//===----------------------------------------------------------------------===//

RoundingDivideByPotISOpOperandAdaptor::RoundingDivideByPotISOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> RoundingDivideByPotISOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  RoundingDivideByPotISOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef RoundingDivideByPotISOp::getOperationName() {
  return "fxpmath.rounding_divide_by_potis";
}

Operation::operand_range RoundingDivideByPotISOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  RoundingDivideByPotISOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range RoundingDivideByPotISOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  RoundingDivideByPotISOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr RoundingDivideByPotISOp::exponentAttr() {
  return this->getAttr("exponent").cast<IntegerAttr>();
}

APInt RoundingDivideByPotISOp::exponent() {
  auto attr = exponentAttr();
  return attr.getValue();
}

void RoundingDivideByPotISOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value operand, IntegerAttr exponent) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("exponent", exponent);
  tblgen_state.addTypes(res);
}

void RoundingDivideByPotISOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand, IntegerAttr exponent) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("exponent", exponent);
  tblgen_state.addTypes(resultTypes);
}

void RoundingDivideByPotISOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void RoundingDivideByPotISOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand, IntegerAttr exponent) {
  tblgen_state.addOperands(operand);
  tblgen_state.addAttribute("exponent", exponent);
  tblgen_state.addTypes({operand.getType()});

}

void RoundingDivideByPotISOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult RoundingDivideByPotISOp::verify() {
  auto tblgen_exponent = this->getAttr("exponent");
  if (!tblgen_exponent) return emitOpError("requires attribute 'exponent'");
  {
    if (!((tblgen_exponent.isa<IntegerAttr>()))) return emitOpError("attribute 'exponent' failed to satisfy constraint: arbitrary integer attribute");
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
  auto verifyExponent = exponent().getSExtValue();
    if (verifyExponent < 0 || verifyExponent > 31) {
      return emitOpError("exponent must be in range [0..31]");
    }
    return success();
}


//===----------------------------------------------------------------------===//
// fxpmath::VecScalarSaturatingRoundingDoublingHighMulISOp definitions
//===----------------------------------------------------------------------===//

VecScalarSaturatingRoundingDoublingHighMulISOpOperandAdaptor::VecScalarSaturatingRoundingDoublingHighMulISOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> VecScalarSaturatingRoundingDoublingHighMulISOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  VecScalarSaturatingRoundingDoublingHighMulISOpOperandAdaptor::a() {
  return *getODSOperands(0).begin();
}

StringRef VecScalarSaturatingRoundingDoublingHighMulISOp::getOperationName() {
  return "fxpmath.vs_saturating_rounding_doubling_high_mulis";
}

Operation::operand_range VecScalarSaturatingRoundingDoublingHighMulISOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  VecScalarSaturatingRoundingDoublingHighMulISOp::a() {
  return *getODSOperands(0).begin();
}

Operation::result_range VecScalarSaturatingRoundingDoublingHighMulISOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

IntegerAttr VecScalarSaturatingRoundingDoublingHighMulISOp::bAttr() {
  return this->getAttr("b").cast<IntegerAttr>();
}

APInt VecScalarSaturatingRoundingDoublingHighMulISOp::b() {
  auto attr = bAttr();
  return attr.getValue();
}

void VecScalarSaturatingRoundingDoublingHighMulISOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value a, IntegerAttr b) {
  tblgen_state.addOperands(a);
  tblgen_state.addAttribute("b", b);
  tblgen_state.addTypes(resultType0);
}

void VecScalarSaturatingRoundingDoublingHighMulISOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value a, IntegerAttr b) {
  tblgen_state.addOperands(a);
  tblgen_state.addAttribute("b", b);
  tblgen_state.addTypes(resultTypes);
}

void VecScalarSaturatingRoundingDoublingHighMulISOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void VecScalarSaturatingRoundingDoublingHighMulISOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value a, IntegerAttr b) {
  tblgen_state.addOperands(a);
  tblgen_state.addAttribute("b", b);
  tblgen_state.addTypes({a.getType()});

}

void VecScalarSaturatingRoundingDoublingHighMulISOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult VecScalarSaturatingRoundingDoublingHighMulISOp::verify() {
  auto tblgen_b = this->getAttr("b");
  if (!tblgen_b) return emitOpError("requires attribute 'b'");
  {
    if (!((tblgen_b.isa<IntegerAttr>()))) return emitOpError("attribute 'b' failed to satisfy constraint: arbitrary integer attribute");
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
  return mlir::success();
}


#endif  // GET_OP_CLASSES

