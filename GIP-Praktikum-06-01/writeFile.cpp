#include "createWebsite.h"

bool writeFile(std::string inputData, std::string name)
{
    std::ofstream file;
    file.open(name, std::ofstream::out);
    file << inputData;
    return file.good();
}