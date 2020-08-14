#include "file_gen_functions.h"

std::string CreateIncludeGuardName(std::string class_type)
{
    // class_name format namespace::type
    std::string              out;
    std::vector<std::string> type_split;
    std::string              delimiter = "::";

    size_t      pos = 0;
    std::string token;
    while ((pos = class_type.find(delimiter)) != std::string::npos)
    {
        token = class_type.substr(0, pos);
        type_split.push_back(token);
        class_type.erase(0, pos + delimiter.length());

        out += token + "_";
    }
    type_split.push_back(class_type);
    out += class_type;

    std::transform(out.begin(), out.end(), out.begin(), [](unsigned char c) { return std::toupper(c); });

    out += +"_GENERATED_HPP_";

    return out;
}

std::string CreateFileContent(const FileInfo & file_info)
{
    std::string out = "";

    std::string includes_tmpl_filled = "";

    for (int j = 0; j < file_info.includes.size(); j++)
    {
        std::string name = file_info.includes[j]->name;

        if (file_info.includes[j]->isAngled)
            includes_tmpl_filled += string_format(AngledIncludeTemplate, name.c_str());
        else
            includes_tmpl_filled += string_format(IncludeTemplate, name.c_str());

        if (j + 1 < file_info.includes.size())
            includes_tmpl_filled += "\n";
    }

    for (auto class_info = file_info.classes.begin(); class_info != file_info.classes.end(); class_info++)
    {
        // ---------------------------------------------------------------------------
        std::string members_tmpl_filled = "";

        for (int j = 0; j < (*class_info)->attributes.size(); j++)
        {
            std::string name = (*class_info)->attributes[j]->name;
            std::string type = (*class_info)->attributes[j]->full_name;

            // std::cout << " Attribut " << name << " of type " << type << std::endl;

            members_tmpl_filled += "        ";
            members_tmpl_filled += string_format(MembersTemplate, name.c_str(), type.c_str());

            if (j + 1 < (*class_info)->attributes.size())
                members_tmpl_filled += "\n";
        }

        // ----------------------------------------------------------------------------

        std::string class_type = (*class_info)->type;
        // std::cout << " Class type: " << class_type << std::endl;

        std::string register_member_tmpl_filled =
            string_format(RegisterMemberTemplate, class_type.c_str(), members_tmpl_filled.c_str());

        // -----------------------------------------------------------------------------

        std::string include_guard_name = CreateIncludeGuardName(class_type);

        out = string_format(FileTemplate, include_guard_name.c_str(), include_guard_name.c_str(),
                            includes_tmpl_filled.c_str(), register_member_tmpl_filled.c_str());
    }

    return out;
}