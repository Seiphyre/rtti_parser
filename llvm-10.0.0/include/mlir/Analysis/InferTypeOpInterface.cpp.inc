/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Operation Interface Definitions                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

LogicalResult InferTypeOpInterface::inferReturnTypes(Optional<Location> location, ValueRange operands, ArrayRef<NamedAttribute> attributes, RegionRange regions, SmallVectorImpl<Type>& inferedReturnTypes) {
      return getImpl()->inferReturnTypes(location, operands, attributes, regions, inferedReturnTypes);
  }
bool InferTypeOpInterface::isCompatibleReturnTypes(ArrayRef<Type> lhs, ArrayRef<Type> rhs) {
      return getImpl()->isCompatibleReturnTypes(lhs, rhs);
  }
