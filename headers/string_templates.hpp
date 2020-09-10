#ifndef STRING_TEMPLATES_HPP_
#define STRING_TEMPLATES_HPP_

#include <string>

// clang-format off

// --------------------------------------------------------------

// 1: INCLUDE_GUARD_NAME
// 2: INCLUDE_GUARD_NAME
// 3: CONTENT
// 4: INCLUDE_GUARD_NAME
const std::string include_guard_tmpl =
R"(

#ifndef %s
#define %s

%s

#endif /* %s */

)";

// --------------------------------------------------------------

// 1: SERIALIZATION_FUNC
const std::string serialization_namespace_tmpl =
    R"(
namespace boost {
namespace serialization {

%s

} // namespace serialization
} // namespace boost
)";

// --------------------------------------------------------------

// 1: META_INCLUDE_PATH
const std::string meta_header_tmpl = R"(#include "%s")";

// --------------------------------------------------------------

// 1: CLASS TYPE
const std::string meta_friend_register_tmpl = R"(
    friend auto meta::registerMembers<%s>();
    )";

// --------------------------------------------------------------

// 1: TYPE
// 2: MEMBER_TEMPLATE
const std::string meta_register_class_tmpl =
    R"(template <>
inline auto meta::registerMembers< %s >() 
{
    return meta::members( 
%s 
    );
})";

// --------------------------------------------------------------

// 1: TYPE
// 2: BASE_TYPE
// 3: MEMBER_TEMPLATE
const std::string meta_register_class_with_base_tmpl =
    R"(template <>
inline auto meta::registerMembers< %s >() 
{
    return std::tuple_cat(
        meta::getMembers< %s >(),
        meta::members(
%s 
    ));
})";

// --------------------------------------------------------------

// 1: CLASS_TYPE
// 2: CLASS_TYPE
const std::string serialization_func_tmpl =
    R"(
template <class Archive> 
void serialize(Archive & ar, %s & obj, const unsigned int version)
{
    meta::doForAllMembers<%s>([&ar, &obj](const auto & member) {
        ar & BOOST_SERIALIZATION_NVP(member.getRef(obj));
    });
}
)";

// --------------------------------------------------------------

// 1: SHORT_MEMBER_NAME
// 2: MEMBER_NAME
const std::string meta_register_member_tmpl = R"(meta::member("%s", &%s))";

// --------------------------------------------------------------

// 1: MEMBER_NAME
const std::string serialize_member_tmpl = R"(ar & BOOST_SERIALIZATION_NVP(obj.%s);)";

// clang-format on

#endif /* STRING_TEMPLATES_HPP_ */