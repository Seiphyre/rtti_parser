

#ifndef VDENGINE_META_HEADER
#define VDENGINE_META_HEADER

#include "metaStuff/Meta.h"

#endif /* VDENGINE_META_HEADER */

#ifndef VDENGINE_META_HEADER
#define VDENGINE_META_HEADER

#include "metaStuff/Meta.h"

#endif /* VDENGINE_META_HEADER */

#ifndef VDENGINE_META_HEADER
#define VDENGINE_META_HEADER

#include "metaStuff/Meta.h"

#endif /* VDENGINE_META_HEADER */

#ifndef VDENGINE_GAME_OBJECT_H_
#define VDENGINE_GAME_OBJECT_H_

// C++ Standard libs
#include <vector>
#include <string>
#include <iostream>

// Internal headers
// #include "VDEngine/Renderer/Model.h"
#include "VDEngine/Core/Component.h"
#include "VDEngine/Core/Transform.h"

namespace VDEngine
{

class GameObject
{
    friend auto meta::registerMembers<VDEngine::GameObject>();

    friend class Component;
    friend Vector3 Transform::GetUpDir() const;

  public:
    GameObject();
    GameObject(std::vector<Component *> components);
    ~GameObject();

    void AddComponent(Component * component) void RemoveComponent(Component * component);

    void AddChild(GameObject * child);
    void RemoveChild(GameObject * child);

    void AttachParent(GameObject * parent);
    void DetachParent();

    GameObject *           GetParent() const;
    Transform *            GetTransform() const;
    template <class T> T * GetComponent()
    {
        static_assert(std::is_base_of<Component, T>::value,
                      "Error: T in GameObject::GetComponent is not base of Component.");

        // Transform ??

        std::vector<Component *>::iterator it = m_components.begin();
        for (int i = 0; i < m_components.size(); i++)
        {
            T * component = dynamic_cast<T *>(*it);
            if (component)
            {
                return component;
            }
            it++;
        }

        return nullptr;
    }

    template <class T> std::vector<T *> GetComponentsInChildren()
    {
        static_assert(std::is_base_of<Component, T>::value,
                      "Error: T in GameObject::GetComponent is not base of Component.");

        std::vector<T *> components_found;

        ProcessGetComponentsInChildren<T>(components_found, this);

        return components_found;
    }

    std::string name;

  private:
    template <class T> void ProcessGetComponentsInChildren(std::vector<T *> & result, GameObject * go)
    {
        T * component = go->GetComponent<T>();
        if (component != nullptr)
            result.push_back(component);

        for (int i = 0; i < go->m_children.size(); i++)
        {
            ProcessGetComponentsInChildren(result, go->m_children[i]);
        }
    }

    GameObject *              m_parent;
    Transform *               m_transform;
    std::vector<GameObject *> m_children;
    std::vector<Component *>  m_components;

} // namespace VDEngine

#endif /* VDENGINE_GAME_OBJECT_H_ */

#ifndef META_REGISTER_VDENGINE_GAMEOBJECT
#define META_REGISTER_VDENGINE_GAMEOBJECT

template <>
inline auto meta::registerMembers< VDEngine::GameObject >() 
{
    return meta::members( 
meta::member("name", &VDEngine::GameObject::name),
meta::member("m_parent", &VDEngine::GameObject::m_parent),
meta::member("m_transform", &VDEngine::GameObject::m_transform),
meta::member("m_children", &VDEngine::GameObject::m_children),
meta::member("m_components", &VDEngine::GameObject::m_components) 
    );
}

#endif /* META_REGISTER_VDENGINE_GAMEOBJECT */


#ifndef META_REGISTER_VDENGINE_GAMEOBJECT
#define META_REGISTER_VDENGINE_GAMEOBJECT

template <>
inline auto meta::registerMembers< VDEngine::GameObject >() 
{
    return meta::members( 
meta::member("name", &VDEngine::GameObject::name),
meta::member("m_parent", &VDEngine::GameObject::m_parent),
meta::member("m_transform", &VDEngine::GameObject::m_transform),
meta::member("m_children", &VDEngine::GameObject::m_children),
meta::member("m_components", &VDEngine::GameObject::m_components) 
    );
}

#endif /* META_REGISTER_VDENGINE_GAMEOBJECT */

