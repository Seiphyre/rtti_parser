

#ifndef VDENGINE_META_HEADER
#define VDENGINE_META_HEADER

#include "metaStuff/Meta.h"

#endif /* VDENGINE_META_HEADER */

#ifndef VDENGINE_TRANSFORM_H_
#define VDENGINE_TRANSFORM_H_

// C++ Standard libs
#include <iostream>

// Internal headers
#include "VDEngine/Core/GameObject.h"
#include "VDEngine/Math/Vector3.h"
#include "VDEngine/Math/Quaternion.h"
#include "VDEngine/Math/Matrix4.h"

namespace VDEngine
{

enum Space
{
    LOCAL,
    GLOBAL
};

// #define WORLD_RIGHT glm::vec3(1.0f, 0.0f, 0.0f)
// #define WORLD_UP glm::vec3(0.0f, 1.0f, 0.0f)
// #define WORLD_FORWARD glm::vec3(0.0f, 0.0f, 1.0f)

class Transform : public Component
{
    friend auto meta::registerMembers<VDEngine::Transform>();

  public:
    Vector3    position;
    Vector3    scale;
    Quaternion rotation;

    Transform();
    ~Transform();

    Matrix4 GetModelMatrix(Space space = LOCAL) const;
    Matrix4 GetNormalMatrix(Space space = LOCAL) const;

    Vector3 GetForwardDir() const;
    Vector3 GetUpDir() const;
    Vector3 GetRightDir() const;

    void Translate(float x, float y, float z);
    void Translate(const Vector3 & translation);

    void Rotate(float x, float y, float z);
    void Rotate(const Vector3 & eulers);
    void Rotate(float angle, const Vector3 & rotation_axis);

    void LookAt(const Vector3 & target, const Vector3 & up = Vector3::VecPosY());

  private:
    Matrix4 GetGlobalModelMatrix() const;
};

} // namespace VDEngine

#endif /* VDENGINE_TRANSFORM_H_ */

#ifndef META_REGISTER_VDENGINE_TRANSFORM
#define META_REGISTER_VDENGINE_TRANSFORM

template <>
inline auto meta::registerMembers< VDEngine::Transform >() 
{
    return std::tuple_cat(
        meta::getMembers< VDEngine::Component >(),
        meta::members(
meta::member("position", &VDEngine::Transform::position),
meta::member("scale", &VDEngine::Transform::scale),
meta::member("rotation", &VDEngine::Transform::rotation) 
    ));
}

#endif /* META_REGISTER_VDENGINE_TRANSFORM */
