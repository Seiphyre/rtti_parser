/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class AffineForOp;
class AffineIfOp;
class AffineMinOp;
class AffinePrefetchOp;
class AffineTerminatorOp;

//===----------------------------------------------------------------------===//
// AffineForOp declarations
//===----------------------------------------------------------------------===//

class AffineForOpOperandAdaptor {
public:
  AffineForOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class AffineForOp : public Op<AffineForOp, OpTrait::ZeroResult, OpTrait::SingleBlockImplicitTerminator<AffineTerminatorOp>::Impl, LoopLikeOpInterface::Trait, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = AffineForOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &region();
  static void build(Builder *builder, OperationState &result, int64_t lowerBound, int64_t upperBound, int64_t step = 1);
  static void build(Builder *builder, OperationState &result, ValueRange lbOperands, AffineMap lbMap, ValueRange ubOperands, AffineMap ubMap, int64_t step = 1);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  bool isDefinedOutsideOfLoop(Value  value);
  Region &getLoopBody();
  LogicalResult moveOutOfLoop(ArrayRef<Operation *> ops);

    static StringRef getStepAttrName() { return "step"; }
    static StringRef getLowerBoundAttrName() { return "lower_bound"; }
    static StringRef getUpperBoundAttrName() { return "upper_bound"; }

    Block *getBody() { return &region().front(); }
    Value getInductionVar() { return getBody()->getArgument(0); }
    OpBuilder getBodyBuilder() {
      return OpBuilder(getBody(), std::prev(getBody()->end()));
    }

    // TODO: provide iterators for the lower and upper bound operands
    // if the current access via getLowerBound(), getUpperBound() is too slow.

    /// Returns operands for the lower bound map.
    operand_range getLowerBoundOperands();

    /// Returns operands for the upper bound map.
    operand_range getUpperBoundOperands();

    /// Returns information about the lower bound as a single object.
    AffineBound getLowerBound();

    /// Returns information about the upper bound as a single object.
    AffineBound getUpperBound();

    /// Returns loop step.
    int64_t getStep() {
      return getAttr(getStepAttrName()).cast<IntegerAttr>().getInt();
    }

    /// Returns affine map for the lower bound.
    AffineMap getLowerBoundMap() { return getLowerBoundMapAttr().getValue(); }
    AffineMapAttr getLowerBoundMapAttr() {
      return getAttr(getLowerBoundAttrName()).cast<AffineMapAttr>();
    }
    /// Returns affine map for the upper bound. The upper bound is exclusive.
    AffineMap getUpperBoundMap() { return getUpperBoundMapAttr().getValue(); }
    AffineMapAttr getUpperBoundMapAttr() {
      return getAttr(getUpperBoundAttrName()).cast<AffineMapAttr>();
    }

    /// Set lower bound. The new bound must have the same number of operands as
    /// the current bound map. Otherwise, 'replaceForLowerBound' should be used.
    void setLowerBound(ValueRange operands, AffineMap map);
    /// Set upper bound. The new bound must not have more operands than the
    /// current bound map. Otherwise, 'replaceForUpperBound' should be used.
    void setUpperBound(ValueRange operands, AffineMap map);

    /// Set the lower bound map without changing operands.
    void setLowerBoundMap(AffineMap map);

    /// Set the upper bound map without changing operands.
    void setUpperBoundMap(AffineMap map);

    /// Set loop step.
    void setStep(int64_t step) {
      assert(step > 0 && "step has to be a positive integer constant");
      auto *context = getLowerBoundMap().getContext();
      setAttr(Identifier::get(getStepAttrName(), context),
              IntegerAttr::get(IndexType::get(context), step));
    }

    /// Returns true if the lower bound is constant.
    bool hasConstantLowerBound();
    /// Returns true if the upper bound is constant.
    bool hasConstantUpperBound();
    /// Returns true if both bounds are constant.
    bool hasConstantBounds() {
      return hasConstantLowerBound() && hasConstantUpperBound();
    }
    /// Returns the value of the constant lower bound.
    /// Fails assertion if the bound is non-constant.
    int64_t getConstantLowerBound();
    /// Returns the value of the constant upper bound. The upper bound is
    /// exclusive. Fails assertion if the bound is non-constant.
    int64_t getConstantUpperBound();
    /// Sets the lower bound to the given constant value.
    void setConstantLowerBound(int64_t value);
    /// Sets the upper bound to the given constant value.
    void setConstantUpperBound(int64_t value);

    /// Returns true if both the lower and upper bound have the same operand
    /// lists (same operands in the same order).
    bool matchingBoundOperandList();
  
};

//===----------------------------------------------------------------------===//
// AffineIfOp declarations
//===----------------------------------------------------------------------===//

class AffineIfOpOperandAdaptor {
public:
  AffineIfOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class AffineIfOp : public Op<AffineIfOp, OpTrait::ZeroResult, OpTrait::SingleBlockImplicitTerminator<AffineTerminatorOp>::Impl, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = AffineIfOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &thenRegion();
  Region &elseRegion();
  static void build(Builder *builder, OperationState &result, IntegerSet set, ValueRange args, bool withElseRegion);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);

    static StringRef getConditionAttrName() { return "condition"; }

    IntegerSet getIntegerSet();
    void setIntegerSet(IntegerSet newSet);

    /// Sets the integer set with its operands. The size of 'operands' must not
    /// exceed the current number of operands for this instance, as the operands
    /// list of AffineIf is not resizable.
    void setConditional(IntegerSet set, ValueRange operands);

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
// AffineMinOp declarations
//===----------------------------------------------------------------------===//

class AffineMinOpOperandAdaptor {
public:
  AffineMinOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> operands();

private:
  ArrayRef<Value> tblgen_operands;
};
class AffineMinOp : public Op<AffineMinOp, OpTrait::OneResult, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = AffineMinOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  Operation::result_range getODSResults(unsigned index);
  AffineMapAttr mapAttr();
  AffineMap map();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, AffineMapAttr map, ValueRange operands);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, AffineMapAttr map, ValueRange operands);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, AffineMap map, ValueRange operands);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, AffineMap map, ValueRange operands);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);

    static StringRef getMapAttrName() { return "map"; }
  
};

//===----------------------------------------------------------------------===//
// AffinePrefetchOp declarations
//===----------------------------------------------------------------------===//

class AffinePrefetchOpOperandAdaptor {
public:
  AffinePrefetchOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  memref();
  ArrayRef<Value> indices();

private:
  ArrayRef<Value> tblgen_operands;
};
class AffinePrefetchOp : public Op<AffinePrefetchOp, OpTrait::ZeroResult, OpTrait::AtLeastNOperands<1>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AffinePrefetchOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  memref();
  Operation::operand_range indices();
  Operation::result_range getODSResults(unsigned index);
  BoolAttr isWriteAttr();
  bool isWrite();
  IntegerAttr localityHintAttr();
  APInt localityHint();
  BoolAttr isDataCacheAttr();
  bool isDataCache();
  static void build(Builder *builder, OperationState &result, Value memref,AffineMap map, ArrayRef<Value> mapOperands, bool isWrite,unsigned localityHint, bool isDataCache);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);

    MemRefType getMemRefType() {
      return memref().getType().cast<MemRefType>();
    }

    /// Returns the affine map used to index the memref for this operation.
    AffineMap getAffineMap() { return getAffineMapAttr().getValue(); }
    AffineMapAttr getAffineMapAttr() {
      return getAttr(getMapAttrName()).cast<AffineMapAttr>();
    }

    /// Returns the AffineMapAttr associated with 'memref'.
    NamedAttribute getAffineMapAttrForMemRef(Value mref) {
      assert(mref == memref());
      return {Identifier::get(getMapAttrName(), getContext()),
        getAffineMapAttr()};
    }

    /// Get affine map operands.
    operand_range getMapOperands() {
      return {operand_begin() + 1, operand_end()};
    }

    static StringRef getMapAttrName() { return "map"; }
    static StringRef getLocalityHintAttrName() { return "localityHint"; }
    static StringRef getIsWriteAttrName() { return "isWrite"; }
    static StringRef getIsDataCacheAttrName() { return "isDataCache"; }
  
};

//===----------------------------------------------------------------------===//
// AffineTerminatorOp declarations
//===----------------------------------------------------------------------===//

class AffineTerminatorOpOperandAdaptor {
public:
  AffineTerminatorOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class AffineTerminatorOp : public Op<AffineTerminatorOp, OpTrait::ZeroResult, OpTrait::IsTerminator, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = AffineTerminatorOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

#endif  // GET_OP_CLASSES

