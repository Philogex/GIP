//#include "createWebsite.h"

/*
namespace std
{
    string **extractData(FileData data, char separator, uint16_t columns)
    {
        uint16_t x = 0;
        uint16_t y = 0;
        string buffer = "";
        static string **output_arr = new string *[data.rows];
        output_arr[0] = new string[columns];
        for (uint16_t i = 0; i < data.data.length(); i++)
        {

            if (data.data.at(i) == separator)
            {
                output_arr[y][x++] = buffer;
                buffer = "";
                i++;
                continue;
            }
            else if (data.data.at(i) == '\n')
            {
                output_arr[y][x] = buffer;
                output_arr[++y] = new string[columns];
                buffer = "";
                x = 0;
                continue;
            }

            buffer += data.data.at(i);
        }

        return output_arr;
    }
}
*/