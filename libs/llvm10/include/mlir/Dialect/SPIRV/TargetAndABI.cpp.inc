/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Struct Utility Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace spirv {
EntryPointABIAttr EntryPointABIAttr::get(
    DenseIntElementsAttr local_size,
    mlir::MLIRContext* context) {
  llvm::SmallVector<mlir::NamedAttribute, 1> fields;

  assert(local_size);
  auto local_size_id = mlir::Identifier::get("local_size", context);
  fields.emplace_back(local_size_id, local_size);

  Attribute dict = mlir::DictionaryAttr::get(fields, context);
  return dict.dyn_cast<EntryPointABIAttr>();
}

bool EntryPointABIAttr::classof(mlir::Attribute attr) {
   auto derived = attr.dyn_cast<mlir::DictionaryAttr>();
   if (!derived)
     return false;
   if (derived.size() != 1)
     return false;

  auto local_size = derived.get("local_size");
  if (!local_size || !((local_size.isa<DenseIntElementsAttr>() &&local_size.cast<DenseIntElementsAttr>().getType().getElementType().isInteger(32))))
    return false;

  return true;
}

DenseIntElementsAttr EntryPointABIAttr::local_size() const {
  auto derived = this->cast<mlir::DictionaryAttr>();
  auto local_size = derived.get("local_size");
  assert(local_size && "attribute not found.");
  assert(local_size.isa<DenseIntElementsAttr>() && "incorrect Attribute type found.");
  return local_size.cast<DenseIntElementsAttr>();
}
} // namespace spirv
namespace spirv {
InterfaceVarABIAttr InterfaceVarABIAttr::get(
    IntegerAttr descriptor_set,
    IntegerAttr binding,
    IntegerAttr storage_class,
    mlir::MLIRContext* context) {
  llvm::SmallVector<mlir::NamedAttribute, 3> fields;

  assert(descriptor_set);
  auto descriptor_set_id = mlir::Identifier::get("descriptor_set", context);
  fields.emplace_back(descriptor_set_id, descriptor_set);

  assert(binding);
  auto binding_id = mlir::Identifier::get("binding", context);
  fields.emplace_back(binding_id, binding);

  assert(storage_class);
  auto storage_class_id = mlir::Identifier::get("storage_class", context);
  fields.emplace_back(storage_class_id, storage_class);

  Attribute dict = mlir::DictionaryAttr::get(fields, context);
  return dict.dyn_cast<InterfaceVarABIAttr>();
}

bool InterfaceVarABIAttr::classof(mlir::Attribute attr) {
   auto derived = attr.dyn_cast<mlir::DictionaryAttr>();
   if (!derived)
     return false;
   if (derived.size() != 3)
     return false;

  auto descriptor_set = derived.get("descriptor_set");
  if (!descriptor_set || !(((descriptor_set.isa<IntegerAttr>())) && ((descriptor_set.cast<IntegerAttr>().getType().isInteger(32)))))
    return false;

  auto binding = derived.get("binding");
  if (!binding || !(((binding.isa<IntegerAttr>())) && ((binding.cast<IntegerAttr>().getType().isInteger(32)))))
    return false;

  auto storage_class = derived.get("storage_class");
  if (!storage_class || !((((storage_class.isa<IntegerAttr>())) && ((storage_class.cast<IntegerAttr>().getType().isInteger(32)))) && (((storage_class.cast<IntegerAttr>().getInt() == 0)) || ((storage_class.cast<IntegerAttr>().getInt() == 1)) || ((storage_class.cast<IntegerAttr>().getInt() == 2)) || ((storage_class.cast<IntegerAttr>().getInt() == 3)) || ((storage_class.cast<IntegerAttr>().getInt() == 4)) || ((storage_class.cast<IntegerAttr>().getInt() == 5)) || ((storage_class.cast<IntegerAttr>().getInt() == 6)) || ((storage_class.cast<IntegerAttr>().getInt() == 7)) || ((storage_class.cast<IntegerAttr>().getInt() == 8)) || ((storage_class.cast<IntegerAttr>().getInt() == 9)) || ((storage_class.cast<IntegerAttr>().getInt() == 10)) || ((storage_class.cast<IntegerAttr>().getInt() == 11)) || ((storage_class.cast<IntegerAttr>().getInt() == 12)) || ((storage_class.cast<IntegerAttr>().getInt() == 5328)) || ((storage_class.cast<IntegerAttr>().getInt() == 5329)) || ((storage_class.cast<IntegerAttr>().getInt() == 5338)) || ((storage_class.cast<IntegerAttr>().getInt() == 5339)) || ((storage_class.cast<IntegerAttr>().getInt() == 5342)) || ((storage_class.cast<IntegerAttr>().getInt() == 5343)) || ((storage_class.cast<IntegerAttr>().getInt() == 5349)))))
    return false;

  return true;
}

IntegerAttr InterfaceVarABIAttr::descriptor_set() const {
  auto derived = this->cast<mlir::DictionaryAttr>();
  auto descriptor_set = derived.get("descriptor_set");
  assert(descriptor_set && "attribute not found.");
  assert(descriptor_set.isa<IntegerAttr>() && "incorrect Attribute type found.");
  return descriptor_set.cast<IntegerAttr>();
}

IntegerAttr InterfaceVarABIAttr::binding() const {
  auto derived = this->cast<mlir::DictionaryAttr>();
  auto binding = derived.get("binding");
  assert(binding && "attribute not found.");
  assert(binding.isa<IntegerAttr>() && "incorrect Attribute type found.");
  return binding.cast<IntegerAttr>();
}

IntegerAttr InterfaceVarABIAttr::storage_class() const {
  auto derived = this->cast<mlir::DictionaryAttr>();
  auto storage_class = derived.get("storage_class");
  assert(storage_class && "attribute not found.");
  assert(storage_class.isa<IntegerAttr>() && "incorrect Attribute type found.");
  return storage_class.cast<IntegerAttr>();
}
} // namespace spirv
namespace spirv {
TargetEnvAttr TargetEnvAttr::get(
    IntegerAttr version,
    ArrayAttr extensions,
    ArrayAttr capabilities,
    mlir::MLIRContext* context) {
  llvm::SmallVector<mlir::NamedAttribute, 3> fields;

  assert(version);
  auto version_id = mlir::Identifier::get("version", context);
  fields.emplace_back(version_id, version);

  assert(extensions);
  auto extensions_id = mlir::Identifier::get("extensions", context);
  fields.emplace_back(extensions_id, extensions);

  assert(capabilities);
  auto capabilities_id = mlir::Identifier::get("capabilities", context);
  fields.emplace_back(capabilities_id, capabilities);

  Attribute dict = mlir::DictionaryAttr::get(fields, context);
  return dict.dyn_cast<TargetEnvAttr>();
}

bool TargetEnvAttr::classof(mlir::Attribute attr) {
   auto derived = attr.dyn_cast<mlir::DictionaryAttr>();
   if (!derived)
     return false;
   if (derived.size() != 3)
     return false;

  auto version = derived.get("version");
  if (!version || !((((version.isa<IntegerAttr>())) && ((version.cast<IntegerAttr>().getType().isInteger(32)))) && (((version.cast<IntegerAttr>().getInt() == 0)) || ((version.cast<IntegerAttr>().getInt() == 1)) || ((version.cast<IntegerAttr>().getInt() == 2)) || ((version.cast<IntegerAttr>().getInt() == 3)) || ((version.cast<IntegerAttr>().getInt() == 4)) || ((version.cast<IntegerAttr>().getInt() == 5)))))
    return false;

  auto extensions = derived.get("extensions");
  if (!extensions || !(((extensions.isa<ArrayAttr>())) && (llvm::all_of(extensions.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<StringAttr>())) && (((attr.cast<StringAttr>().getValue() == "SPV_KHR_16bit_storage")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_8bit_storage")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_device_group")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_float_controls")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_physical_storage_buffer")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_multiview")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_no_integer_wrap_decoration")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_post_depth_coverage")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_shader_atomic_counter_ops")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_shader_ballot")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_shader_draw_parameters")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_storage_buffer_storage_class")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_subgroup_vote")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_variable_pointers")) || ((attr.cast<StringAttr>().getValue() == "SPV_KHR_vulkan_memory_model")) || ((attr.cast<StringAttr>().getValue() == "SPV_EXT_fragment_fully_covered")) || ((attr.cast<StringAttr>().getValue() == "SPV_EXT_fragment_invocation_density")) || ((attr.cast<StringAttr>().getValue() == "SPV_EXT_fragment_shader_interlock")) || ((attr.cast<StringAttr>().getValue() == "SPV_EXT_physical_storage_buffer")) || ((attr.cast<StringAttr>().getValue() == "SPV_EXT_shader_stencil_export")) || ((attr.cast<StringAttr>().getValue() == "SPV_AMD_shader_explicit_vertex_parameter")) || ((attr.cast<StringAttr>().getValue() == "SPV_GOOGLE_user_type")) || ((attr.cast<StringAttr>().getValue() == "SPV_NV_compute_shader_derivatives")) || ((attr.cast<StringAttr>().getValue() == "SPV_NV_fragment_shader_barycentric")) || ((attr.cast<StringAttr>().getValue() == "SPV_NV_geometry_shader_passthrough")) || ((attr.cast<StringAttr>().getValue() == "SPV_NV_mesh_shader")) || ((attr.cast<StringAttr>().getValue() == "SPV_NV_ray_tracing")) || ((attr.cast<StringAttr>().getValue() == "SPV_NV_sample_mask_override_coverage")) || ((attr.cast<StringAttr>().getValue() == "SPV_NV_shader_sm_builtins")) || ((attr.cast<StringAttr>().getValue() == "SPV_NV_shading_rate")) || ((attr.cast<StringAttr>().getValue() == "SPV_NV_stereo_view_rendering")) || ((attr.cast<StringAttr>().getValue() == "SPV_NV_viewport_array2")) || ((attr.cast<StringAttr>().getValue() == "SPV_NVX_multiview_per_view_attributes"))); }))))
    return false;

  auto capabilities = derived.get("capabilities");
  if (!capabilities || !(((capabilities.isa<ArrayAttr>())) && (llvm::all_of(capabilities.cast<ArrayAttr>(), [](Attribute attr) { return (((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(32)))) && (((attr.cast<IntegerAttr>().getInt() == 0)) || ((attr.cast<IntegerAttr>().getInt() == 1)) || ((attr.cast<IntegerAttr>().getInt() == 2)) || ((attr.cast<IntegerAttr>().getInt() == 3)) || ((attr.cast<IntegerAttr>().getInt() == 4)) || ((attr.cast<IntegerAttr>().getInt() == 5)) || ((attr.cast<IntegerAttr>().getInt() == 6)) || ((attr.cast<IntegerAttr>().getInt() == 7)) || ((attr.cast<IntegerAttr>().getInt() == 8)) || ((attr.cast<IntegerAttr>().getInt() == 9)) || ((attr.cast<IntegerAttr>().getInt() == 10)) || ((attr.cast<IntegerAttr>().getInt() == 11)) || ((attr.cast<IntegerAttr>().getInt() == 12)) || ((attr.cast<IntegerAttr>().getInt() == 13)) || ((attr.cast<IntegerAttr>().getInt() == 14)) || ((attr.cast<IntegerAttr>().getInt() == 15)) || ((attr.cast<IntegerAttr>().getInt() == 17)) || ((attr.cast<IntegerAttr>().getInt() == 18)) || ((attr.cast<IntegerAttr>().getInt() == 19)) || ((attr.cast<IntegerAttr>().getInt() == 20)) || ((attr.cast<IntegerAttr>().getInt() == 21)) || ((attr.cast<IntegerAttr>().getInt() == 22)) || ((attr.cast<IntegerAttr>().getInt() == 23)) || ((attr.cast<IntegerAttr>().getInt() == 24)) || ((attr.cast<IntegerAttr>().getInt() == 25)) || ((attr.cast<IntegerAttr>().getInt() == 27)) || ((attr.cast<IntegerAttr>().getInt() == 28)) || ((attr.cast<IntegerAttr>().getInt() == 29)) || ((attr.cast<IntegerAttr>().getInt() == 30)) || ((attr.cast<IntegerAttr>().getInt() == 31)) || ((attr.cast<IntegerAttr>().getInt() == 32)) || ((attr.cast<IntegerAttr>().getInt() == 33)) || ((attr.cast<IntegerAttr>().getInt() == 34)) || ((attr.cast<IntegerAttr>().getInt() == 35)) || ((attr.cast<IntegerAttr>().getInt() == 36)) || ((attr.cast<IntegerAttr>().getInt() == 37)) || ((attr.cast<IntegerAttr>().getInt() == 38)) || ((attr.cast<IntegerAttr>().getInt() == 39)) || ((attr.cast<IntegerAttr>().getInt() == 40)) || ((attr.cast<IntegerAttr>().getInt() == 41)) || ((attr.cast<IntegerAttr>().getInt() == 42)) || ((attr.cast<IntegerAttr>().getInt() == 43)) || ((attr.cast<IntegerAttr>().getInt() == 44)) || ((attr.cast<IntegerAttr>().getInt() == 45)) || ((attr.cast<IntegerAttr>().getInt() == 46)) || ((attr.cast<IntegerAttr>().getInt() == 47)) || ((attr.cast<IntegerAttr>().getInt() == 48)) || ((attr.cast<IntegerAttr>().getInt() == 49)) || ((attr.cast<IntegerAttr>().getInt() == 50)) || ((attr.cast<IntegerAttr>().getInt() == 51)) || ((attr.cast<IntegerAttr>().getInt() == 52)) || ((attr.cast<IntegerAttr>().getInt() == 53)) || ((attr.cast<IntegerAttr>().getInt() == 54)) || ((attr.cast<IntegerAttr>().getInt() == 55)) || ((attr.cast<IntegerAttr>().getInt() == 56)) || ((attr.cast<IntegerAttr>().getInt() == 57)) || ((attr.cast<IntegerAttr>().getInt() == 58)) || ((attr.cast<IntegerAttr>().getInt() == 59)) || ((attr.cast<IntegerAttr>().getInt() == 60)) || ((attr.cast<IntegerAttr>().getInt() == 61)) || ((attr.cast<IntegerAttr>().getInt() == 62)) || ((attr.cast<IntegerAttr>().getInt() == 63)) || ((attr.cast<IntegerAttr>().getInt() == 64)) || ((attr.cast<IntegerAttr>().getInt() == 65)) || ((attr.cast<IntegerAttr>().getInt() == 66)) || ((attr.cast<IntegerAttr>().getInt() == 67)) || ((attr.cast<IntegerAttr>().getInt() == 68)) || ((attr.cast<IntegerAttr>().getInt() == 69)) || ((attr.cast<IntegerAttr>().getInt() == 70)) || ((attr.cast<IntegerAttr>().getInt() == 4423)) || ((attr.cast<IntegerAttr>().getInt() == 4427)) || ((attr.cast<IntegerAttr>().getInt() == 4431)) || ((attr.cast<IntegerAttr>().getInt() == 4433)) || ((attr.cast<IntegerAttr>().getInt() == 4434)) || ((attr.cast<IntegerAttr>().getInt() == 4435)) || ((attr.cast<IntegerAttr>().getInt() == 4436)) || ((attr.cast<IntegerAttr>().getInt() == 4437)) || ((attr.cast<IntegerAttr>().getInt() == 4439)) || ((attr.cast<IntegerAttr>().getInt() == 4441)) || ((attr.cast<IntegerAttr>().getInt() == 4442)) || ((attr.cast<IntegerAttr>().getInt() == 4445)) || ((attr.cast<IntegerAttr>().getInt() == 4447)) || ((attr.cast<IntegerAttr>().getInt() == 4448)) || ((attr.cast<IntegerAttr>().getInt() == 4449)) || ((attr.cast<IntegerAttr>().getInt() == 4450)) || ((attr.cast<IntegerAttr>().getInt() == 4464)) || ((attr.cast<IntegerAttr>().getInt() == 4465)) || ((attr.cast<IntegerAttr>().getInt() == 4466)) || ((attr.cast<IntegerAttr>().getInt() == 4467)) || ((attr.cast<IntegerAttr>().getInt() == 4468)) || ((attr.cast<IntegerAttr>().getInt() == 5008)) || ((attr.cast<IntegerAttr>().getInt() == 5009)) || ((attr.cast<IntegerAttr>().getInt() == 5010)) || ((attr.cast<IntegerAttr>().getInt() == 5013)) || ((attr.cast<IntegerAttr>().getInt() == 5015)) || ((attr.cast<IntegerAttr>().getInt() == 5055)) || ((attr.cast<IntegerAttr>().getInt() == 5249)) || ((attr.cast<IntegerAttr>().getInt() == 5251)) || ((attr.cast<IntegerAttr>().getInt() == 5254)) || ((attr.cast<IntegerAttr>().getInt() == 5255)) || ((attr.cast<IntegerAttr>().getInt() == 5259)) || ((attr.cast<IntegerAttr>().getInt() == 5260)) || ((attr.cast<IntegerAttr>().getInt() == 5265)) || ((attr.cast<IntegerAttr>().getInt() == 5266)) || ((attr.cast<IntegerAttr>().getInt() == 5282)) || ((attr.cast<IntegerAttr>().getInt() == 5284)) || ((attr.cast<IntegerAttr>().getInt() == 5288)) || ((attr.cast<IntegerAttr>().getInt() == 5291)) || ((attr.cast<IntegerAttr>().getInt() == 5297)) || ((attr.cast<IntegerAttr>().getInt() == 5301)) || ((attr.cast<IntegerAttr>().getInt() == 5302)) || ((attr.cast<IntegerAttr>().getInt() == 5303)) || ((attr.cast<IntegerAttr>().getInt() == 5304)) || ((attr.cast<IntegerAttr>().getInt() == 5305)) || ((attr.cast<IntegerAttr>().getInt() == 5306)) || ((attr.cast<IntegerAttr>().getInt() == 5307)) || ((attr.cast<IntegerAttr>().getInt() == 5308)) || ((attr.cast<IntegerAttr>().getInt() == 5309)) || ((attr.cast<IntegerAttr>().getInt() == 5310)) || ((attr.cast<IntegerAttr>().getInt() == 5311)) || ((attr.cast<IntegerAttr>().getInt() == 5312)) || ((attr.cast<IntegerAttr>().getInt() == 5340)) || ((attr.cast<IntegerAttr>().getInt() == 5345)) || ((attr.cast<IntegerAttr>().getInt() == 5346)) || ((attr.cast<IntegerAttr>().getInt() == 5347)) || ((attr.cast<IntegerAttr>().getInt() == 5350)) || ((attr.cast<IntegerAttr>().getInt() == 5357)) || ((attr.cast<IntegerAttr>().getInt() == 5363)) || ((attr.cast<IntegerAttr>().getInt() == 5372)) || ((attr.cast<IntegerAttr>().getInt() == 5373)) || ((attr.cast<IntegerAttr>().getInt() == 5378)) || ((attr.cast<IntegerAttr>().getInt() == 5379)) || ((attr.cast<IntegerAttr>().getInt() == 5568)) || ((attr.cast<IntegerAttr>().getInt() == 5569)) || ((attr.cast<IntegerAttr>().getInt() == 5570)) || ((attr.cast<IntegerAttr>().getInt() == 5579)) || ((attr.cast<IntegerAttr>().getInt() == 5584)) || ((attr.cast<IntegerAttr>().getInt() == 5696)) || ((attr.cast<IntegerAttr>().getInt() == 5697)) || ((attr.cast<IntegerAttr>().getInt() == 5698))); }))))
    return false;

  return true;
}

IntegerAttr TargetEnvAttr::version() const {
  auto derived = this->cast<mlir::DictionaryAttr>();
  auto version = derived.get("version");
  assert(version && "attribute not found.");
  assert(version.isa<IntegerAttr>() && "incorrect Attribute type found.");
  return version.cast<IntegerAttr>();
}

ArrayAttr TargetEnvAttr::extensions() const {
  auto derived = this->cast<mlir::DictionaryAttr>();
  auto extensions = derived.get("extensions");
  assert(extensions && "attribute not found.");
  assert(extensions.isa<ArrayAttr>() && "incorrect Attribute type found.");
  return extensions.cast<ArrayAttr>();
}

ArrayAttr TargetEnvAttr::capabilities() const {
  auto derived = this->cast<mlir::DictionaryAttr>();
  auto capabilities = derived.get("capabilities");
  assert(capabilities && "attribute not found.");
  assert(capabilities.isa<ArrayAttr>() && "incorrect Attribute type found.");
  return capabilities.cast<ArrayAttr>();
}
} // namespace spirv
