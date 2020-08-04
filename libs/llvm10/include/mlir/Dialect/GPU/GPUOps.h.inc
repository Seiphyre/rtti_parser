/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class AllReduceOp;
class BarrierOp;
class BlockDimOp;
class BlockIdOp;
class GPUFuncOp;
class GridDimOp;
class LaunchFuncOp;
class LaunchOp;
class ReturnOp;
class ShuffleOp;
class ThreadIdOp;
class YieldOp;

//===----------------------------------------------------------------------===//
// gpu::AllReduceOp declarations
//===----------------------------------------------------------------------===//

class AllReduceOpOperandAdaptor {
public:
  AllReduceOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class AllReduceOp : public Op<AllReduceOp, OpTrait::OneResult, OpTrait::SameOperandsAndResultType, OpTrait::IsIsolatedFromAbove, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = AllReduceOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  StringAttr opAttr();
  Optional< StringRef > op();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value value, /*optional*/StringAttr op);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value, /*optional*/StringAttr op);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value value, /*optional*/StringAttr op);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// gpu::BarrierOp declarations
//===----------------------------------------------------------------------===//

class BarrierOpOperandAdaptor {
public:
  BarrierOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class BarrierOp : public Op<BarrierOp, OpTrait::ZeroResult, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = BarrierOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// gpu::BlockDimOp declarations
//===----------------------------------------------------------------------===//

class BlockDimOpOperandAdaptor {
public:
  BlockDimOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class BlockDimOp : public Op<BlockDimOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = BlockDimOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr dimensionAttr();
  StringRef dimension();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringAttr dimension);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringAttr dimension);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringRef dimension);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef dimension);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// gpu::BlockIdOp declarations
//===----------------------------------------------------------------------===//

class BlockIdOpOperandAdaptor {
public:
  BlockIdOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class BlockIdOp : public Op<BlockIdOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = BlockIdOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr dimensionAttr();
  StringRef dimension();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringAttr dimension);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringAttr dimension);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringRef dimension);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef dimension);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// gpu::GPUFuncOp declarations
//===----------------------------------------------------------------------===//

class GPUFuncOpOperandAdaptor {
public:
  GPUFuncOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class GPUFuncOp : public Op<GPUFuncOp, OpTrait::ZeroResult, OpTrait::FunctionLike, OpTrait::IsIsolatedFromAbove, OpTrait::Symbol, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = GPUFuncOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  static void build(Builder *builder, OperationState &result, StringRef name, FunctionType type, ArrayRef<Type> workgroupAttributions = {}, ArrayRef<Type> privateAttributions = {}, ArrayRef<NamedAttribute> attrs = {});
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    /// Adds a workgroup attribution of the MemRef type with the given shape and
    /// element type.
    Value addWorkgroupAttribution(ArrayRef<int64_t> shape, Type elementType);

    /// Returns `true` if the GPU function defined by this Op is a kernel, i.e.
    /// it is intended to be launched from host.
    bool isKernel() {
      return getAttrOfType<UnitAttr>(GPUDialect::getKernelFuncAttrName()) !=
             nullptr;
    }

    /// Returns the type of the function this Op defines.
    FunctionType getType() {
      return getTypeAttr().getValue().cast<FunctionType>();
    }

    /// Change the type of this function in place. This is an extremely
    /// dangerous operation and it is up to the caller to ensure that this is
    /// legal for this function, and to restore invariants:
    ///  - the entry block args must be updated to match the function params.
    ///  - the argument/result attributes may need an update: if the new type
    ///  has less parameters we drop the extra attributes, if there are more
    ///  parameters they won't have any attributes.
    // TODO(b/146349912): consider removing this function thanks to rewrite
    // patterns.
    void setType(FunctionType newType);

    /// Returns the number of buffers located in the workgroup memory.
    unsigned getNumWorkgroupAttributions() {
      return getAttrOfType<IntegerAttr>(getNumWorkgroupAttributionsAttrName())
          .getInt();
    }

    /// Returns a list of block arguments that correspond to buffers located in
    /// the workgroup memory
    ArrayRef<BlockArgument> getWorkgroupAttributions() {
      auto begin =
          std::next(getBody().front().args_begin(), getType().getNumInputs());
      auto end = std::next(begin, getNumWorkgroupAttributions());
      return {begin, end};
    }

    /// Returns a list of block arguments that correspond to buffers located in
    /// the private memory.
    ArrayRef<BlockArgument> getPrivateAttributions() {
      auto begin =
          std::next(getBody().front().args_begin(),
                    getType().getNumInputs() + getNumWorkgroupAttributions());
      return {begin, getBody().front().args_end()};
    }

    /// Returns the name of the attribute containing the number of buffers
    /// located in the workgroup memory.
    static StringRef getNumWorkgroupAttributionsAttrName() {
      return "workgroup_attributions";
    }

    // FunctionLike trait needs access to the functions below.
    friend class OpTrait::FunctionLike<GPUFuncOp>;

    /// Hooks for the input/output type enumeration in FunctionLike .
    unsigned getNumFuncArguments() { return getType().getNumInputs(); }
    unsigned getNumFuncResults() { return getType().getNumResults(); }

    /// Returns the keywords used in the custom syntax for this Op.
    static StringRef getWorkgroupKeyword() { return "workgroup"; }
    static StringRef getPrivateKeyword() { return "private"; }
    static StringRef getKernelKeyword() { return "kernel"; }

    /// Hook for FunctionLike verifier.
    LogicalResult verifyType();

    /// Verifies the body of the function.
    LogicalResult verifyBody();
  
};

//===----------------------------------------------------------------------===//
// gpu::GridDimOp declarations
//===----------------------------------------------------------------------===//

class GridDimOpOperandAdaptor {
public:
  GridDimOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class GridDimOp : public Op<GridDimOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = GridDimOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr dimensionAttr();
  StringRef dimension();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringAttr dimension);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringAttr dimension);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringRef dimension);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef dimension);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// gpu::LaunchFuncOp declarations
//===----------------------------------------------------------------------===//

class LaunchFuncOpOperandAdaptor {
public:
  LaunchFuncOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  gridSizeX();
  Value  gridSizeY();
  Value  gridSizeZ();
  Value  blockSizeX();
  Value  blockSizeY();
  Value  blockSizeZ();
  ArrayRef<Value> operands();

private:
  ArrayRef<Value> tblgen_operands;
};
class LaunchFuncOp : public Op<LaunchFuncOp, OpTrait::ZeroResult, OpTrait::AtLeastNOperands<6>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = LaunchFuncOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  gridSizeX();
  Value  gridSizeY();
  Value  gridSizeZ();
  Value  blockSizeX();
  Value  blockSizeY();
  Value  blockSizeZ();
  Operation::operand_range operands();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *builder, OperationState &result, GPUFuncOp kernelFunc, Value gridSizeX, Value gridSizeY, Value gridSizeZ, Value blockSizeX, Value blockSizeY, Value blockSizeZ, ValueRange kernelOperands);
  static void build(Builder *builder, OperationState &result, GPUFuncOp kernelFunc, KernelDim3 gridSize, KernelDim3 blockSize, ValueRange kernelOperands);
  LogicalResult verify();

    /// The kernel function specified by the operation's `kernel` attribute.
    StringRef kernel();

    /// The number of operands passed to the kernel function.
    unsigned getNumKernelOperands();

    /// The name of the kernel module specified by the operation's
    /// `kernel_module` attribute.
    StringRef getKernelModuleName();

    /// The i-th operand passed to the kernel function.
    Value getKernelOperand(unsigned i);

    /// Get the SSA values passed as operands to specify the grid size.
    KernelDim3 getGridSizeOperandValues();

    /// Get the SSA values passed as operands to specify the block size.
    KernelDim3 getBlockSizeOperandValues();

    /// The number of launch configuration operands, placed at the leading
    /// positions of the operand list.
    static constexpr unsigned kNumConfigOperands = 6;

    // This needs to quietly verify if attributes with names defined below are
    // present since it is run before the verifier of this op.
    friend LogicalResult GPUDialect::verifyOperationAttribute(Operation *,
                                                              NamedAttribute);

    /// The name of the symbolRef attribute specifying the kernel to launch.
    static StringRef getKernelAttrName() { return "kernel"; }

    /// The name of the symbolRef attribute specifying the name of the module
    /// containing the kernel to launch.
    static StringRef getKernelModuleAttrName() { return "kernel_module"; }
  
};

//===----------------------------------------------------------------------===//
// gpu::LaunchOp declarations
//===----------------------------------------------------------------------===//

class LaunchOpOperandAdaptor {
public:
  LaunchOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  gridSizeX();
  Value  gridSizeY();
  Value  gridSizeZ();
  Value  blockSizeX();
  Value  blockSizeY();
  Value  blockSizeZ();
  ArrayRef<Value> operands();

private:
  ArrayRef<Value> tblgen_operands;
};
class LaunchOp : public Op<LaunchOp, OpTrait::ZeroResult, OpTrait::IsIsolatedFromAbove, OpTrait::AtLeastNOperands<6>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = LaunchOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  gridSizeX();
  Value  gridSizeY();
  Value  gridSizeZ();
  Value  blockSizeX();
  Value  blockSizeY();
  Value  blockSizeZ();
  Operation::operand_range operands();
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  static void build(Builder *builder, OperationState &result, Value gridSizeX,Value gridSizeY, Value gridSizeZ, Value blockSizeX,Value blockSizeY, Value blockSizeZ,ValueRange operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);

    /// Get the SSA values corresponding to kernel block identifiers.
    KernelDim3 getBlockIds();
    /// Get the SSA values corresponding to kernel thread identifiers.
    KernelDim3 getThreadIds();
    /// Get the SSA values corresponding to kernel grid size.
    KernelDim3 getGridSize();
    /// Get the SSA values corresponding to kernel block size.
    KernelDim3 getBlockSize();
    /// Get the operand values passed as kernel arguments.
    operand_range getKernelOperandValues();
    /// Get the operand types passed as kernel arguments.
    operand_type_range getKernelOperandTypes();

    /// Get the SSA values passed as operands to specify the grid size.
    KernelDim3 getGridSizeOperandValues();
    /// Get the SSA values passed as operands to specify the block size.
    KernelDim3 getBlockSizeOperandValues();

    /// Get the SSA values of the kernel arguments.
    iterator_range<Block::args_iterator> getKernelArguments();

    /// Erase the `index`-th kernel argument.  Both the entry block argument and
    /// the operand will be dropped.  The block argument must not have any uses.
    void eraseKernelArgument(unsigned index);

    static StringRef getBlocksKeyword() { return "blocks"; }
    static StringRef getThreadsKeyword() { return "threads"; }
    static StringRef getArgsKeyword() { return "args"; }

    /// The number of launch configuration operands, placed at the leading
    /// positions of the operand list.
    static constexpr unsigned kNumConfigOperands = 6;

    /// The number of region attributes containing the launch configuration,
    /// placed in the leading positions of the argument list.
    static constexpr unsigned kNumConfigRegionAttributes = 12;
  
};

//===----------------------------------------------------------------------===//
// gpu::ReturnOp declarations
//===----------------------------------------------------------------------===//

class ReturnOpOperandAdaptor {
public:
  ReturnOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ReturnOp : public Op<ReturnOp, OpTrait::ZeroResult, OpTrait::IsTerminator, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ReturnOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// gpu::ShuffleOp declarations
//===----------------------------------------------------------------------===//

class ShuffleOpOperandAdaptor {
public:
  ShuffleOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  value();
  Value  offset();
  Value  width();

private:
  ArrayRef<Value> tblgen_operands;
};
class ShuffleOp : public Op<ShuffleOp, OpTrait::NResults<2>::Impl, OpTrait::HasNoSideEffect, OpTrait::NOperands<3>::Impl, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using OperandAdaptor = ShuffleOpOperandAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  value();
  Value  offset();
  Value  width();
  Operation::result_range getODSResults(unsigned index);
  Value  result();
  Value  valid();
  StringAttr modeAttr();
  StringRef mode();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Type valid, Value value, Value offset, Value width, StringAttr mode);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value, Value offset, Value width, StringAttr mode);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Type valid, Value value, Value offset, Value width, StringRef mode);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value, Value offset, Value width, StringRef mode);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// gpu::ThreadIdOp declarations
//===----------------------------------------------------------------------===//

class ThreadIdOpOperandAdaptor {
public:
  ThreadIdOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ThreadIdOp : public Op<ThreadIdOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ThreadIdOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr dimensionAttr();
  StringRef dimension();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringAttr dimension);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringAttr dimension);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, StringRef dimension);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef dimension);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// gpu::YieldOp declarations
//===----------------------------------------------------------------------===//

class YieldOpOperandAdaptor {
public:
  YieldOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> values();

private:
  ArrayRef<Value> tblgen_operands;
};
class YieldOp : public Op<YieldOp, OpTrait::ZeroResult, OpTrait::IsTerminator, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = YieldOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range values();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange values);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange values);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

#endif  // GET_OP_CLASSES

