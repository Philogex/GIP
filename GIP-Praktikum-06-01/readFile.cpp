#include "createWebsite.h"

FileData readFile(std::string filename)
{
    std::ifstream file;
    file.open(filename, std::ifstream::in);
    FileData output;
    std::string cur_line;

    if (file.is_open())
    {
        while (getline(file, cur_line))
        {
            output.rows++;
            output.data += cur_line + '\n';
        }
        file.close();
    }

    return output;
}