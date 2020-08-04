/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* SPIR-V Enum Availability Definitions                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace spirv {
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Capability, 1>> getCapabilities(AddressingModel value) {
  switch (value) {
  case AddressingModel::Physical32: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Addresses});
  case AddressingModel::Physical64: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Addresses});
  case AddressingModel::PhysicalStorageBuffer64: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::PhysicalStorageBufferAddresses});
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::mlir::spirv::Version> getMinVersion(AddressingModel value) {
  switch (value) {
  case AddressingModel::PhysicalStorageBuffer64: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Extension, 1>> getExtensions(AddressingModel value) {
  switch (value) {
  case AddressingModel::PhysicalStorageBuffer64: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_physical_storage_buffer, ::mlir::spirv::Extension::SPV_KHR_physical_storage_buffer});
  default: break;
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Capability, 1>> getCapabilities(BuiltIn value) {
  switch (value) {
  case BuiltIn::Position: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case BuiltIn::PointSize: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case BuiltIn::ClipDistance: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ClipDistance});
  case BuiltIn::CullDistance: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::CullDistance});
  case BuiltIn::VertexId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case BuiltIn::InstanceId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case BuiltIn::PrimitiveId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry, ::mlir::spirv::Capability::RayTracingNV, ::mlir::spirv::Capability::Tessellation});
  case BuiltIn::InvocationId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry, ::mlir::spirv::Capability::Tessellation});
  case BuiltIn::Layer: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry, ::mlir::spirv::Capability::ShaderLayer, ::mlir::spirv::Capability::ShaderViewportIndexLayerEXT});
  case BuiltIn::ViewportIndex: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MultiViewport, ::mlir::spirv::Capability::ShaderViewportIndex, ::mlir::spirv::Capability::ShaderViewportIndexLayerEXT});
  case BuiltIn::TessLevelOuter: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case BuiltIn::TessLevelInner: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case BuiltIn::TessCoord: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case BuiltIn::PatchVertices: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case BuiltIn::FragCoord: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case BuiltIn::PointCoord: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case BuiltIn::FrontFacing: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case BuiltIn::SampleId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::SampleRateShading});
  case BuiltIn::SamplePosition: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::SampleRateShading});
  case BuiltIn::SampleMask: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case BuiltIn::FragDepth: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case BuiltIn::HelperInvocation: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case BuiltIn::WorkDim: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case BuiltIn::GlobalSize: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case BuiltIn::EnqueuedWorkgroupSize: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case BuiltIn::GlobalOffset: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case BuiltIn::GlobalLinearId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case BuiltIn::SubgroupSize: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::GroupNonUniform, ::mlir::spirv::Capability::Kernel, ::mlir::spirv::Capability::SubgroupBallotKHR});
  case BuiltIn::SubgroupMaxSize: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case BuiltIn::NumSubgroups: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::GroupNonUniform, ::mlir::spirv::Capability::Kernel});
  case BuiltIn::NumEnqueuedSubgroups: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case BuiltIn::SubgroupId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::GroupNonUniform, ::mlir::spirv::Capability::Kernel});
  case BuiltIn::SubgroupLocalInvocationId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::GroupNonUniform, ::mlir::spirv::Capability::Kernel, ::mlir::spirv::Capability::SubgroupBallotKHR});
  case BuiltIn::VertexIndex: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case BuiltIn::InstanceIndex: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case BuiltIn::SubgroupEqMask: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::GroupNonUniformBallot, ::mlir::spirv::Capability::SubgroupBallotKHR});
  case BuiltIn::SubgroupGeMask: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::GroupNonUniformBallot, ::mlir::spirv::Capability::SubgroupBallotKHR});
  case BuiltIn::SubgroupGtMask: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::GroupNonUniformBallot, ::mlir::spirv::Capability::SubgroupBallotKHR});
  case BuiltIn::SubgroupLeMask: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::GroupNonUniformBallot, ::mlir::spirv::Capability::SubgroupBallotKHR});
  case BuiltIn::SubgroupLtMask: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::GroupNonUniformBallot, ::mlir::spirv::Capability::SubgroupBallotKHR});
  case BuiltIn::BaseVertex: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::DrawParameters});
  case BuiltIn::BaseInstance: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::DrawParameters});
  case BuiltIn::DrawIndex: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::DrawParameters, ::mlir::spirv::Capability::MeshShadingNV});
  case BuiltIn::DeviceIndex: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::DeviceGroup});
  case BuiltIn::ViewIndex: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MultiView});
  case BuiltIn::FragStencilRefEXT: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StencilExportEXT});
  case BuiltIn::ViewportMaskNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV, ::mlir::spirv::Capability::ShaderViewportMaskNV});
  case BuiltIn::SecondaryPositionNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ShaderStereoViewNV});
  case BuiltIn::SecondaryViewportMaskNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ShaderStereoViewNV});
  case BuiltIn::PositionPerViewNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV, ::mlir::spirv::Capability::PerViewAttributesNV});
  case BuiltIn::ViewportMaskPerViewNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV, ::mlir::spirv::Capability::PerViewAttributesNV});
  case BuiltIn::FullyCoveredEXT: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::FragmentFullyCoveredEXT});
  case BuiltIn::TaskCountNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case BuiltIn::PrimitiveCountNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case BuiltIn::PrimitiveIndicesNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case BuiltIn::ClipDistancePerViewNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case BuiltIn::CullDistancePerViewNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case BuiltIn::LayerPerViewNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case BuiltIn::MeshViewCountNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case BuiltIn::MeshViewIndicesNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case BuiltIn::BaryCoordNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::FragmentBarycentricNV});
  case BuiltIn::BaryCoordNoPerspNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::FragmentBarycentricNV});
  case BuiltIn::FragSizeEXT: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::FragmentDensityEXT});
  case BuiltIn::FragInvocationCountEXT: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::FragmentDensityEXT});
  case BuiltIn::LaunchIdNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::LaunchSizeNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::WorldRayOriginNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::WorldRayDirectionNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::ObjectRayOriginNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::ObjectRayDirectionNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::RayTminNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::RayTmaxNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::InstanceCustomIndexNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::ObjectToWorldNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::WorldToObjectNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::HitTNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::HitKindNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::IncomingRayFlagsNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case BuiltIn::WarpsPerSMNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ShaderSMBuiltinsNV});
  case BuiltIn::SMCountNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ShaderSMBuiltinsNV});
  case BuiltIn::WarpIDNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ShaderSMBuiltinsNV});
  case BuiltIn::SMIDNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ShaderSMBuiltinsNV});
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::mlir::spirv::Version> getMinVersion(BuiltIn value) {
  switch (value) {
  case BuiltIn::SubgroupEqMask: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_3);
  case BuiltIn::SubgroupGeMask: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_3);
  case BuiltIn::SubgroupGtMask: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_3);
  case BuiltIn::SubgroupLeMask: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_3);
  case BuiltIn::SubgroupLtMask: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_3);
  case BuiltIn::BaseVertex: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_3);
  case BuiltIn::BaseInstance: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_3);
  case BuiltIn::DrawIndex: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_3);
  case BuiltIn::DeviceIndex: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_3);
  case BuiltIn::ViewIndex: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_3);
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Extension, 1>> getExtensions(BuiltIn value) {
  switch (value) {
  case BuiltIn::BaseVertex: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_shader_draw_parameters});
  case BuiltIn::BaseInstance: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_shader_draw_parameters});
  case BuiltIn::DrawIndex: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_shader_draw_parameters, ::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case BuiltIn::DeviceIndex: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_device_group});
  case BuiltIn::ViewIndex: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_multiview});
  case BuiltIn::BaryCoordNoPerspAMD: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_AMD_shader_explicit_vertex_parameter});
  case BuiltIn::BaryCoordNoPerspCentroidAMD: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_AMD_shader_explicit_vertex_parameter});
  case BuiltIn::BaryCoordNoPerspSampleAMD: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_AMD_shader_explicit_vertex_parameter});
  case BuiltIn::BaryCoordSmoothAMD: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_AMD_shader_explicit_vertex_parameter});
  case BuiltIn::BaryCoordSmoothCentroidAMD: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_AMD_shader_explicit_vertex_parameter});
  case BuiltIn::BaryCoordSmoothSampleAMD: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_AMD_shader_explicit_vertex_parameter});
  case BuiltIn::BaryCoordPullModelAMD: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_AMD_shader_explicit_vertex_parameter});
  case BuiltIn::FragStencilRefEXT: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_shader_stencil_export});
  case BuiltIn::ViewportMaskNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader, ::mlir::spirv::Extension::SPV_NV_viewport_array2});
  case BuiltIn::SecondaryPositionNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_stereo_view_rendering});
  case BuiltIn::SecondaryViewportMaskNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_stereo_view_rendering});
  case BuiltIn::PositionPerViewNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NVX_multiview_per_view_attributes, ::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case BuiltIn::ViewportMaskPerViewNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NVX_multiview_per_view_attributes, ::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case BuiltIn::FullyCoveredEXT: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_fragment_fully_covered});
  case BuiltIn::TaskCountNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case BuiltIn::PrimitiveCountNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case BuiltIn::PrimitiveIndicesNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case BuiltIn::ClipDistancePerViewNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case BuiltIn::CullDistancePerViewNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case BuiltIn::LayerPerViewNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case BuiltIn::MeshViewCountNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case BuiltIn::MeshViewIndicesNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case BuiltIn::BaryCoordNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_fragment_shader_barycentric});
  case BuiltIn::BaryCoordNoPerspNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_fragment_shader_barycentric});
  case BuiltIn::FragSizeEXT: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_fragment_invocation_density, ::mlir::spirv::Extension::SPV_NV_shading_rate});
  case BuiltIn::FragInvocationCountEXT: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_fragment_invocation_density, ::mlir::spirv::Extension::SPV_NV_shading_rate});
  case BuiltIn::LaunchIdNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::LaunchSizeNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::WorldRayOriginNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::WorldRayDirectionNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::ObjectRayOriginNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::ObjectRayDirectionNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::RayTminNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::RayTmaxNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::InstanceCustomIndexNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::ObjectToWorldNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::WorldToObjectNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::HitTNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::HitKindNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::IncomingRayFlagsNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case BuiltIn::WarpsPerSMNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_shader_sm_builtins});
  case BuiltIn::SMCountNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_shader_sm_builtins});
  case BuiltIn::WarpIDNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_shader_sm_builtins});
  case BuiltIn::SMIDNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_shader_sm_builtins});
  default: break;
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Capability, 1>> getCapabilities(Decoration value) {
  switch (value) {
  case Decoration::RelaxedPrecision: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::SpecId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel, ::mlir::spirv::Capability::Shader});
  case Decoration::Block: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::BufferBlock: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::RowMajor: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Matrix});
  case Decoration::ColMajor: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Matrix});
  case Decoration::ArrayStride: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::MatrixStride: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Matrix});
  case Decoration::GLSLShared: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::GLSLPacked: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::CPacked: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case Decoration::NoPerspective: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::Flat: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::Patch: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case Decoration::Centroid: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::Sample: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::SampleRateShading});
  case Decoration::Invariant: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::Constant: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case Decoration::Uniform: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::UniformId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::SaturatedConversion: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case Decoration::Stream: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::GeometryStreams});
  case Decoration::Location: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::Component: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::Index: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::Binding: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::DescriptorSet: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::Offset: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::XfbBuffer: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::TransformFeedback});
  case Decoration::XfbStride: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::TransformFeedback});
  case Decoration::FuncParamAttr: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case Decoration::FPFastMathMode: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case Decoration::LinkageAttributes: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Linkage});
  case Decoration::NoContraction: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case Decoration::InputAttachmentIndex: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::InputAttachment});
  case Decoration::Alignment: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case Decoration::MaxByteOffset: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Addresses});
  case Decoration::AlignmentId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case Decoration::MaxByteOffsetId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Addresses});
  case Decoration::OverrideCoverageNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::SampleMaskOverrideCoverageNV});
  case Decoration::PassthroughNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::GeometryShaderPassthroughNV});
  case Decoration::ViewportRelativeNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ShaderViewportMaskNV});
  case Decoration::SecondaryViewportRelativeNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ShaderStereoViewNV});
  case Decoration::PerPrimitiveNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case Decoration::PerViewNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case Decoration::PerTaskNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case Decoration::PerVertexNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::FragmentBarycentricNV});
  case Decoration::NonUniform: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ShaderNonUniform});
  case Decoration::RestrictPointer: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::PhysicalStorageBufferAddresses});
  case Decoration::AliasedPointer: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::PhysicalStorageBufferAddresses});
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::mlir::spirv::Version> getMinVersion(Decoration value) {
  switch (value) {
  case Decoration::UniformId: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  case Decoration::MaxByteOffset: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_1);
  case Decoration::AlignmentId: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_2);
  case Decoration::MaxByteOffsetId: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_2);
  case Decoration::NoSignedWrap: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  case Decoration::NoUnsignedWrap: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  case Decoration::NonUniform: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  case Decoration::RestrictPointer: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  case Decoration::AliasedPointer: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  case Decoration::CounterBuffer: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  case Decoration::UserSemantic: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::mlir::spirv::Version> getMaxVersion(Decoration value) {
  switch (value) {
  case Decoration::BufferBlock: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_3);
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Extension, 1>> getExtensions(Decoration value) {
  switch (value) {
  case Decoration::NoSignedWrap: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_no_integer_wrap_decoration});
  case Decoration::NoUnsignedWrap: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_no_integer_wrap_decoration});
  case Decoration::ExplicitInterpAMD: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_AMD_shader_explicit_vertex_parameter});
  case Decoration::OverrideCoverageNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_sample_mask_override_coverage});
  case Decoration::PassthroughNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_geometry_shader_passthrough});
  case Decoration::SecondaryViewportRelativeNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_stereo_view_rendering});
  case Decoration::PerPrimitiveNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case Decoration::PerViewNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case Decoration::PerTaskNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case Decoration::PerVertexNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_fragment_shader_barycentric});
  case Decoration::RestrictPointer: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_physical_storage_buffer, ::mlir::spirv::Extension::SPV_KHR_physical_storage_buffer});
  case Decoration::AliasedPointer: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_physical_storage_buffer, ::mlir::spirv::Extension::SPV_KHR_physical_storage_buffer});
  case Decoration::UserTypeGOOGLE: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_GOOGLE_user_type});
  default: break;
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Capability, 1>> getCapabilities(Dim value) {
  switch (value) {
  case Dim::Dim1D: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Image1D, ::mlir::spirv::Capability::Sampled1D});
  case Dim::Dim2D: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ImageMSArray, ::mlir::spirv::Capability::Kernel, ::mlir::spirv::Capability::Shader});
  case Dim::Cube: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ImageCubeArray, ::mlir::spirv::Capability::Shader});
  case Dim::Rect: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ImageRect, ::mlir::spirv::Capability::SampledRect});
  case Dim::Buffer: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ImageBuffer, ::mlir::spirv::Capability::SampledBuffer});
  case Dim::SubpassData: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::InputAttachment});
  default: break;
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Capability, 1>> getCapabilities(ExecutionMode value) {
  switch (value) {
  case ExecutionMode::Invocations: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry});
  case ExecutionMode::SpacingEqual: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case ExecutionMode::SpacingFractionalEven: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case ExecutionMode::SpacingFractionalOdd: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case ExecutionMode::VertexOrderCw: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case ExecutionMode::VertexOrderCcw: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case ExecutionMode::PixelCenterInteger: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ExecutionMode::OriginUpperLeft: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ExecutionMode::OriginLowerLeft: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ExecutionMode::EarlyFragmentTests: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ExecutionMode::PointMode: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case ExecutionMode::Xfb: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::TransformFeedback});
  case ExecutionMode::DepthReplacing: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ExecutionMode::DepthGreater: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ExecutionMode::DepthLess: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ExecutionMode::DepthUnchanged: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ExecutionMode::LocalSizeHint: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case ExecutionMode::InputPoints: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry});
  case ExecutionMode::InputLines: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry});
  case ExecutionMode::InputLinesAdjacency: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry});
  case ExecutionMode::Triangles: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry, ::mlir::spirv::Capability::Tessellation});
  case ExecutionMode::InputTrianglesAdjacency: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry});
  case ExecutionMode::Quads: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case ExecutionMode::Isolines: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case ExecutionMode::OutputVertices: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry, ::mlir::spirv::Capability::MeshShadingNV, ::mlir::spirv::Capability::Tessellation});
  case ExecutionMode::OutputPoints: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry, ::mlir::spirv::Capability::MeshShadingNV});
  case ExecutionMode::OutputLineStrip: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry});
  case ExecutionMode::OutputTriangleStrip: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry});
  case ExecutionMode::VecTypeHint: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case ExecutionMode::ContractionOff: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case ExecutionMode::Initializer: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case ExecutionMode::Finalizer: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case ExecutionMode::SubgroupSize: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::SubgroupDispatch});
  case ExecutionMode::SubgroupsPerWorkgroup: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::SubgroupDispatch});
  case ExecutionMode::SubgroupsPerWorkgroupId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::SubgroupDispatch});
  case ExecutionMode::LocalSizeHintId: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case ExecutionMode::PostDepthCoverage: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::SampleMaskPostDepthCoverage});
  case ExecutionMode::DenormPreserve: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::DenormPreserve});
  case ExecutionMode::DenormFlushToZero: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::DenormFlushToZero});
  case ExecutionMode::SignedZeroInfNanPreserve: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::SignedZeroInfNanPreserve});
  case ExecutionMode::RoundingModeRTE: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RoundingModeRTE});
  case ExecutionMode::RoundingModeRTZ: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RoundingModeRTZ});
  case ExecutionMode::StencilRefReplacingEXT: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StencilExportEXT});
  case ExecutionMode::OutputLinesNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case ExecutionMode::OutputPrimitivesNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case ExecutionMode::DerivativeGroupQuadsNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ComputeDerivativeGroupQuadsNV});
  case ExecutionMode::DerivativeGroupLinearNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::ComputeDerivativeGroupLinearNV});
  case ExecutionMode::OutputTrianglesNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case ExecutionMode::PixelInterlockOrderedEXT: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::FragmentShaderPixelInterlockEXT});
  case ExecutionMode::PixelInterlockUnorderedEXT: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::FragmentShaderPixelInterlockEXT});
  case ExecutionMode::SampleInterlockOrderedEXT: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::FragmentShaderSampleInterlockEXT});
  case ExecutionMode::SampleInterlockUnorderedEXT: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::FragmentShaderSampleInterlockEXT});
  case ExecutionMode::ShadingRateInterlockOrderedEXT: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::FragmentShaderShadingRateInterlockEXT});
  case ExecutionMode::ShadingRateInterlockUnorderedEXT: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::FragmentShaderShadingRateInterlockEXT});
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::mlir::spirv::Version> getMinVersion(ExecutionMode value) {
  switch (value) {
  case ExecutionMode::Initializer: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_1);
  case ExecutionMode::Finalizer: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_1);
  case ExecutionMode::SubgroupSize: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_1);
  case ExecutionMode::SubgroupsPerWorkgroup: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_1);
  case ExecutionMode::SubgroupsPerWorkgroupId: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_2);
  case ExecutionMode::LocalSizeId: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_2);
  case ExecutionMode::LocalSizeHintId: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_2);
  case ExecutionMode::DenormPreserve: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  case ExecutionMode::DenormFlushToZero: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  case ExecutionMode::SignedZeroInfNanPreserve: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  case ExecutionMode::RoundingModeRTE: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  case ExecutionMode::RoundingModeRTZ: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Extension, 1>> getExtensions(ExecutionMode value) {
  switch (value) {
  case ExecutionMode::PostDepthCoverage: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_post_depth_coverage});
  case ExecutionMode::DenormPreserve: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_float_controls});
  case ExecutionMode::DenormFlushToZero: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_float_controls});
  case ExecutionMode::SignedZeroInfNanPreserve: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_float_controls});
  case ExecutionMode::RoundingModeRTE: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_float_controls});
  case ExecutionMode::RoundingModeRTZ: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_float_controls});
  case ExecutionMode::StencilRefReplacingEXT: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_shader_stencil_export});
  case ExecutionMode::OutputLinesNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case ExecutionMode::OutputPrimitivesNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case ExecutionMode::DerivativeGroupQuadsNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_compute_shader_derivatives});
  case ExecutionMode::DerivativeGroupLinearNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_compute_shader_derivatives});
  case ExecutionMode::OutputTrianglesNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_mesh_shader});
  case ExecutionMode::PixelInterlockOrderedEXT: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_fragment_shader_interlock});
  case ExecutionMode::PixelInterlockUnorderedEXT: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_fragment_shader_interlock});
  case ExecutionMode::SampleInterlockOrderedEXT: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_fragment_shader_interlock});
  case ExecutionMode::SampleInterlockUnorderedEXT: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_fragment_shader_interlock});
  case ExecutionMode::ShadingRateInterlockOrderedEXT: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_fragment_shader_interlock});
  case ExecutionMode::ShadingRateInterlockUnorderedEXT: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_fragment_shader_interlock});
  default: break;
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Capability, 1>> getCapabilities(ExecutionModel value) {
  switch (value) {
  case ExecutionModel::Vertex: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ExecutionModel::TessellationControl: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case ExecutionModel::TessellationEvaluation: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Tessellation});
  case ExecutionModel::Geometry: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Geometry});
  case ExecutionModel::Fragment: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ExecutionModel::GLCompute: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ExecutionModel::Kernel: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case ExecutionModel::TaskNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case ExecutionModel::MeshNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::MeshShadingNV});
  case ExecutionModel::RayGenerationNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case ExecutionModel::IntersectionNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case ExecutionModel::AnyHitNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case ExecutionModel::ClosestHitNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case ExecutionModel::MissNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case ExecutionModel::CallableNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Capability, 1>> getCapabilities(ImageFormat value) {
  switch (value) {
  case ImageFormat::Rgba32f: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ImageFormat::Rgba16f: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ImageFormat::R32f: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ImageFormat::Rgba8: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ImageFormat::Rgba8Snorm: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ImageFormat::Rg32f: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rg16f: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::R11fG11fB10f: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::R16f: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rgba16: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rgb10A2: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rg16: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rg8: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::R16: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::R8: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rgba16Snorm: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rg16Snorm: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rg8Snorm: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::R16Snorm: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::R8Snorm: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rgba32i: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ImageFormat::Rgba16i: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ImageFormat::Rgba8i: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ImageFormat::R32i: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ImageFormat::Rg32i: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rg16i: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rg8i: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::R16i: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::R8i: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rgba32ui: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ImageFormat::Rgba16ui: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ImageFormat::Rgba8ui: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ImageFormat::R32ui: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case ImageFormat::Rgb10a2ui: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rg32ui: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rg16ui: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::Rg8ui: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::R16ui: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  case ImageFormat::R8ui: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::StorageImageExtendedFormats});
  default: break;
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Capability, 1>> getCapabilities(LinkageType value) {
  switch (value) {
  case LinkageType::Export: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Linkage});
  case LinkageType::Import: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Linkage});
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
llvm::Optional<::mlir::spirv::Version> getMinVersion(LoopControl value) {
  assert(::llvm::countPopulation(static_cast<uint32_t>(value)) <= 1 && "cannot have more than one bit set");
  switch (value) {
  case LoopControl::DependencyInfinite: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_1);
  case LoopControl::DependencyLength: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_1);
  case LoopControl::MinIterations: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  case LoopControl::MaxIterations: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  case LoopControl::IterationMultiple: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  case LoopControl::PeelCount: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  case LoopControl::PartialCount: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_4);
  default: break;
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Capability, 1>> getCapabilities(MemoryAccess value) {
  assert(::llvm::countPopulation(static_cast<uint32_t>(value)) <= 1 && "cannot have more than one bit set");
  switch (value) {
  case MemoryAccess::MakePointerAvailable: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::VulkanMemoryModel});
  case MemoryAccess::MakePointerVisible: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::VulkanMemoryModel});
  case MemoryAccess::NonPrivatePointer: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::VulkanMemoryModel});
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::mlir::spirv::Version> getMinVersion(MemoryAccess value) {
  assert(::llvm::countPopulation(static_cast<uint32_t>(value)) <= 1 && "cannot have more than one bit set");
  switch (value) {
  case MemoryAccess::MakePointerAvailable: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  case MemoryAccess::MakePointerVisible: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  case MemoryAccess::NonPrivatePointer: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  default: break;
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Capability, 1>> getCapabilities(MemoryModel value) {
  switch (value) {
  case MemoryModel::Simple: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case MemoryModel::GLSL450: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case MemoryModel::OpenCL: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  case MemoryModel::Vulkan: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::VulkanMemoryModel});
  }
  return llvm::None;
}
llvm::Optional<::mlir::spirv::Version> getMinVersion(MemoryModel value) {
  switch (value) {
  case MemoryModel::Vulkan: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  default: break;
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Capability, 1>> getCapabilities(MemorySemantics value) {
  assert(::llvm::countPopulation(static_cast<uint32_t>(value)) <= 1 && "cannot have more than one bit set");
  switch (value) {
  case MemorySemantics::UniformMemory: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case MemorySemantics::AtomicCounterMemory: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::AtomicStorage});
  case MemorySemantics::OutputMemory: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::VulkanMemoryModel});
  case MemorySemantics::MakeAvailable: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::VulkanMemoryModel});
  case MemorySemantics::MakeVisible: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::VulkanMemoryModel});
  case MemorySemantics::Volatile: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::VulkanMemoryModel});
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::mlir::spirv::Version> getMinVersion(MemorySemantics value) {
  assert(::llvm::countPopulation(static_cast<uint32_t>(value)) <= 1 && "cannot have more than one bit set");
  switch (value) {
  case MemorySemantics::OutputMemory: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  case MemorySemantics::MakeAvailable: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  case MemorySemantics::MakeVisible: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  case MemorySemantics::Volatile: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Extension, 1>> getExtensions(MemorySemantics value) {
  assert(::llvm::countPopulation(static_cast<uint32_t>(value)) <= 1 && "cannot have more than one bit set");
  switch (value) {
  case MemorySemantics::Volatile: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_vulkan_memory_model});
  default: break;
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Capability, 1>> getCapabilities(Scope value) {
  switch (value) {
  case Scope::QueueFamily: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::VulkanMemoryModel});
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::mlir::spirv::Version> getMinVersion(Scope value) {
  switch (value) {
  case Scope::QueueFamily: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  default: break;
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Capability, 1>> getCapabilities(StorageClass value) {
  switch (value) {
  case StorageClass::Uniform: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case StorageClass::Output: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case StorageClass::Private: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case StorageClass::Generic: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::GenericPointer});
  case StorageClass::PushConstant: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case StorageClass::AtomicCounter: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::AtomicStorage});
  case StorageClass::StorageBuffer: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  case StorageClass::CallableDataNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case StorageClass::IncomingCallableDataNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case StorageClass::RayPayloadNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case StorageClass::HitAttributeNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case StorageClass::IncomingRayPayloadNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case StorageClass::ShaderRecordBufferNV: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::RayTracingNV});
  case StorageClass::PhysicalStorageBuffer: return ::llvm::SmallVector<::mlir::spirv::Capability, 1>(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::PhysicalStorageBufferAddresses});
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::mlir::spirv::Version> getMinVersion(StorageClass value) {
  switch (value) {
  case StorageClass::StorageBuffer: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_3);
  case StorageClass::PhysicalStorageBuffer: return ::mlir::spirv::Version(::mlir::spirv::Version::V_1_5);
  default: break;
  }
  return llvm::None;
}
llvm::Optional<::llvm::SmallVector<::mlir::spirv::Extension, 1>> getExtensions(StorageClass value) {
  switch (value) {
  case StorageClass::StorageBuffer: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_storage_buffer_storage_class, ::mlir::spirv::Extension::SPV_KHR_variable_pointers});
  case StorageClass::CallableDataNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case StorageClass::IncomingCallableDataNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case StorageClass::RayPayloadNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case StorageClass::HitAttributeNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case StorageClass::IncomingRayPayloadNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case StorageClass::ShaderRecordBufferNV: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_NV_ray_tracing});
  case StorageClass::PhysicalStorageBuffer: return ::llvm::SmallVector<::mlir::spirv::Extension, 1>(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_EXT_physical_storage_buffer, ::mlir::spirv::Extension::SPV_KHR_physical_storage_buffer});
  default: break;
  }
  return llvm::None;
}
} // namespace spirv
} // namespace mlir

namespace mlir {
namespace spirv {
} // namespace spirv
} // namespace mlir

