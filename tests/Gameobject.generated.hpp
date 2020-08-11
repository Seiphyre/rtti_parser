#ifndef VDENGINE_GAMEOBJECT_GENERATED_HPP_
#define VDENGINE_GAMEOBJECT_GENERATED_HPP_

#include <Meta.h>

namespace meta 
{

template <>
inline auto registerMembers< VDEngine::GameObject >() 
{
    return members( 
        member("name", &VDEngine::GameObject::name)
        member("m_parent", &VDEngine::GameObject::m_parent)
        member("m_transform", &VDEngine::GameObject::m_transform)
        member("m_children", &VDEngine::GameObject::m_children)
        member("m_components", &VDEngine::GameObject::m_components) 
    );
}

} // end namespace

#endif
