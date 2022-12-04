#include "createWebsite.h"

PersonData *extractData(FileData data, char separator, uint16_t columns)
{
    uint16_t y = 0;
    std::string buffer = "";
    bool name = true;
    static PersonData *output_arr = new PersonData[data.rows];
    for (uint16_t i = 0; i < data.data.length(); i++)
    {

        if ((data.data.at(i) == separator) && name)
        {
            output_arr[y].secondname = buffer;
            buffer = "";
            name = false;
            i++;
            continue;
        }
        else if ((data.data.at(i) == separator) && !name)
        {
            output_arr[y].firstname = buffer;
            buffer = "";
            name = true;
            i++;
            continue;
        }
        else if (data.data.at(i) == '\n')
        {
            output_arr[y++].birthday = buffer;
            buffer = "";
            continue;
        }
        buffer += data.data.at(i);
    }

    return output_arr;
}