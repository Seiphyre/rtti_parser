#ifndef STRING_TEMPLATES_HPP_
#define STRING_TEMPLATES_HPP_

#include <string>

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

// 1: TYPE
// 2: MEMBER_TEMPLATE
const std::string RegisterMemberTemplate =
    R"(template <>
inline auto registerMembers< %s >() 
{
    return members( 
%s 
    );
})";

// 1: TYPE
// 2: BASE_TYPE
// 3: MEMBER_TEMPLATE
const std::string RegisterMemberAndBaseTemplate =
    R"(template <>
inline auto registerMembers< %s >() 
{
    return std::tuple_cat(
        meta::getMembers< %s >(),
        members(
%s 
    ));
})";

// 1: SHORT_MEMBER_NAME
// 2: MEMBER_NAME
const std::string MembersTemplate = R"(member("%s", &%s))";

// 1: INCLUDE_NAME
const std::string IncludeTemplate = R"(#include "%s")";

// 1: INCLUDE_NAME
const std::string AngledIncludeTemplate = R"(#include <%s>)";

#endif /* STRING_TEMPLATES_HPP_ */