/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* SPIR-V Op Utilities                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef SPIRV_OP_UTILS_H_
#define SPIRV_OP_UTILS_H_
template <typename EnumClass> inline constexpr StringRef attributeName();
template <typename EnumClass> using SymbolizeFnTy = llvm::Optional<EnumClass> (*)(StringRef);
template <typename EnumClass> inline constexpr SymbolizeFnTy<EnumClass> symbolizeEnum();
template <> inline StringRef attributeName<AddressingModel>() {
  static constexpr const char attrName[] = "addressing_model";
  return attrName;
}
template <> inline SymbolizeFnTy<AddressingModel> symbolizeEnum<AddressingModel>() {
  return symbolizeAddressingModel;
}
template <> inline StringRef attributeName<ImageArrayedInfo>() {
  static constexpr const char attrName[] = "image_arrayed_info";
  return attrName;
}
template <> inline SymbolizeFnTy<ImageArrayedInfo> symbolizeEnum<ImageArrayedInfo>() {
  return symbolizeImageArrayedInfo;
}
template <> inline StringRef attributeName<BuiltIn>() {
  static constexpr const char attrName[] = "built_in";
  return attrName;
}
template <> inline SymbolizeFnTy<BuiltIn> symbolizeEnum<BuiltIn>() {
  return symbolizeBuiltIn;
}
template <> inline StringRef attributeName<Capability>() {
  static constexpr const char attrName[] = "capability";
  return attrName;
}
template <> inline SymbolizeFnTy<Capability> symbolizeEnum<Capability>() {
  return symbolizeCapability;
}
template <> inline StringRef attributeName<Decoration>() {
  static constexpr const char attrName[] = "decoration";
  return attrName;
}
template <> inline SymbolizeFnTy<Decoration> symbolizeEnum<Decoration>() {
  return symbolizeDecoration;
}
template <> inline StringRef attributeName<ImageDepthInfo>() {
  static constexpr const char attrName[] = "image_depth_info";
  return attrName;
}
template <> inline SymbolizeFnTy<ImageDepthInfo> symbolizeEnum<ImageDepthInfo>() {
  return symbolizeImageDepthInfo;
}
template <> inline StringRef attributeName<Dim>() {
  static constexpr const char attrName[] = "dim";
  return attrName;
}
template <> inline SymbolizeFnTy<Dim> symbolizeEnum<Dim>() {
  return symbolizeDim;
}
template <> inline StringRef attributeName<ExecutionMode>() {
  static constexpr const char attrName[] = "execution_mode";
  return attrName;
}
template <> inline SymbolizeFnTy<ExecutionMode> symbolizeEnum<ExecutionMode>() {
  return symbolizeExecutionMode;
}
template <> inline StringRef attributeName<ExecutionModel>() {
  static constexpr const char attrName[] = "execution_model";
  return attrName;
}
template <> inline SymbolizeFnTy<ExecutionModel> symbolizeEnum<ExecutionModel>() {
  return symbolizeExecutionModel;
}
template <> inline StringRef attributeName<Extension>() {
  static constexpr const char attrName[] = "extension";
  return attrName;
}
template <> inline SymbolizeFnTy<Extension> symbolizeEnum<Extension>() {
  return symbolizeExtension;
}
template <> inline StringRef attributeName<FunctionControl>() {
  static constexpr const char attrName[] = "function_control";
  return attrName;
}
template <> inline SymbolizeFnTy<FunctionControl> symbolizeEnum<FunctionControl>() {
  return symbolizeFunctionControl;
}
template <> inline StringRef attributeName<ImageFormat>() {
  static constexpr const char attrName[] = "image_format";
  return attrName;
}
template <> inline SymbolizeFnTy<ImageFormat> symbolizeEnum<ImageFormat>() {
  return symbolizeImageFormat;
}
template <> inline StringRef attributeName<LinkageType>() {
  static constexpr const char attrName[] = "linkage_type";
  return attrName;
}
template <> inline SymbolizeFnTy<LinkageType> symbolizeEnum<LinkageType>() {
  return symbolizeLinkageType;
}
template <> inline StringRef attributeName<LoopControl>() {
  static constexpr const char attrName[] = "loop_control";
  return attrName;
}
template <> inline SymbolizeFnTy<LoopControl> symbolizeEnum<LoopControl>() {
  return symbolizeLoopControl;
}
template <> inline StringRef attributeName<MemoryAccess>() {
  static constexpr const char attrName[] = "memory_access";
  return attrName;
}
template <> inline SymbolizeFnTy<MemoryAccess> symbolizeEnum<MemoryAccess>() {
  return symbolizeMemoryAccess;
}
template <> inline StringRef attributeName<MemoryModel>() {
  static constexpr const char attrName[] = "memory_model";
  return attrName;
}
template <> inline SymbolizeFnTy<MemoryModel> symbolizeEnum<MemoryModel>() {
  return symbolizeMemoryModel;
}
template <> inline StringRef attributeName<MemorySemantics>() {
  static constexpr const char attrName[] = "memory_semantics";
  return attrName;
}
template <> inline SymbolizeFnTy<MemorySemantics> symbolizeEnum<MemorySemantics>() {
  return symbolizeMemorySemantics;
}
template <> inline StringRef attributeName<Opcode>() {
  static constexpr const char attrName[] = "opcode";
  return attrName;
}
template <> inline SymbolizeFnTy<Opcode> symbolizeEnum<Opcode>() {
  return symbolizeOpcode;
}
template <> inline StringRef attributeName<ImageSamplerUseInfo>() {
  static constexpr const char attrName[] = "image_sampler_use_info";
  return attrName;
}
template <> inline SymbolizeFnTy<ImageSamplerUseInfo> symbolizeEnum<ImageSamplerUseInfo>() {
  return symbolizeImageSamplerUseInfo;
}
template <> inline StringRef attributeName<ImageSamplingInfo>() {
  static constexpr const char attrName[] = "image_sampling_info";
  return attrName;
}
template <> inline SymbolizeFnTy<ImageSamplingInfo> symbolizeEnum<ImageSamplingInfo>() {
  return symbolizeImageSamplingInfo;
}
template <> inline StringRef attributeName<Scope>() {
  static constexpr const char attrName[] = "scope";
  return attrName;
}
template <> inline SymbolizeFnTy<Scope> symbolizeEnum<Scope>() {
  return symbolizeScope;
}
template <> inline StringRef attributeName<SelectionControl>() {
  static constexpr const char attrName[] = "selection_control";
  return attrName;
}
template <> inline SymbolizeFnTy<SelectionControl> symbolizeEnum<SelectionControl>() {
  return symbolizeSelectionControl;
}
template <> inline StringRef attributeName<StorageClass>() {
  static constexpr const char attrName[] = "storage_class";
  return attrName;
}
template <> inline SymbolizeFnTy<StorageClass> symbolizeEnum<StorageClass>() {
  return symbolizeStorageClass;
}
template <> inline StringRef attributeName<Version>() {
  static constexpr const char attrName[] = "version";
  return attrName;
}
template <> inline SymbolizeFnTy<Version> symbolizeEnum<Version>() {
  return symbolizeVersion;
}
#endif // SPIRV_OP_UTILS_H
