#include <iostream>

#include "createWebsite.h"

int main()
{
    uint16_t columns = 3;

    FileData file1 = readFile("personendaten.txt");

    PersonData *arr_ptr = extractData(file1, ',', columns);

    FileData file2 = readFile("webseite.html.tmpl");

    std::string website = generateWebsite(file2, arr_ptr, file1);

    bool result = writeFile(website);

    return 0;
}