#pragma once
#include <iostream>
#include <fstream>
#include <string>

struct PersonData
{
    std::string secondname = "";
    std::string firstname = "";
    std::string birthday = "";
};

struct FileData
{
    std::string data = "";
    uint16_t rows = 0;
};

FileData readFile(std::string filename);
PersonData *extractData(FileData database, char separator, uint16_t columns);
std::string generateWebsite(FileData HTMLTemplate, PersonData *data, FileData database);
bool writeFile(std::string inputData, std::string name = "website.html");