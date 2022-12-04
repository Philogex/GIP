#include "createWebsite.h"

std::string generateWebsite(FileData HTMLTemplate, PersonData *personen, FileData database)
{
    std::string output_str = "";

    std::string s_text = "";

    for (uint16_t i = 0; i < database.rows; i++)
    {
        s_text += "<b>" + personen[i].secondname + "</b>, " + personen[i].firstname + "<br>\n";
    }

    std::string l_text = "";

    for (uint16_t i = 0; i < database.rows; i++)
    {
        l_text += "<b>" + personen[i].firstname + " " + personen[i].firstname + "</b>, " + personen[i].birthday + "<br>\n";
    }

    // geht in der theorie alles noch effizienter
    for (uint16_t i = 0; i < HTMLTemplate.data.length(); i++)
    {
        if ('%' == HTMLTemplate.data.at(i))
        {
            output_str += s_text;
            continue;
        }
        else if ('$' == HTMLTemplate.data.at(i))
        {
            output_str += l_text;
            continue;
        }
        output_str += HTMLTemplate.data.at(i);
    }

    return output_str;
}