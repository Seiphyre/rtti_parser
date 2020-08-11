#ifndef VDENGINE_TRANSFORM_GENERATED_HPP_
#define VDENGINE_TRANSFORM_GENERATED_HPP_

#include <Meta.h>

namespace meta 
{

template <>
inline auto registerMembers< VDEngine::Transform >() 
{
    return members( 
        member("position", &VDEngine::Transform::position)
        member("scale", &VDEngine::Transform::scale)
        member("rotation", &VDEngine::Transform::rotation) 
    );
}

} // end namespace

#endif
