#ifndef STRING_TEMPLATES_HPP_
#define STRING_TEMPLATES_HPP_

#include <string>

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

// 1: META_INCLUDE_PATH
const std::string meta_header_tmpl = R"(#include "%s")";

// 1: CLASS TYPE
const std::string meta_friend_register_tmpl = R"(
    friend auto meta::registerMembers<%s>();
    )";

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

// 1: SHORT_MEMBER_NAME
// 2: MEMBER_NAME
const std::string meta_register_member_tmpl = R"(meta::member("%s", &%s))";

// 1: INCLUDE_GUARD_NAME
// 2: INCLUDE_GUARD_NAME
// 3: INCLUDES
// 4: SPECIALISATION_TEMPLATE
const std::string FileTemplate =
    R"(#ifndef %s
#define %s

%s

namespace meta 
{

%s

} // end namespace

#endif
)";

// 1: INCLUDE_NAME
const std::string IncludeTemplate = R"(#include "%s")";

// 1: INCLUDE_NAME
const std::string AngledIncludeTemplate = R"(#include <%s>)";

#endif /* STRING_TEMPLATES_HPP_ */