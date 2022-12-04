#include <iostream>
#include "sort_three_vars.h"

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    std::string a = "";
    std::string b = "";
    std::string c = "";
    std::string buffer = "";

    std::cout << "Bitte geben Sie die erste int Zahl ein: ? ";
    getline(std::cin, buffer);
    x = read_number(buffer);
    std::cout << "Bitte geben Sie die zweite int Zahl ein: ? ";
    getline(std::cin, buffer);
    y = read_number(buffer);
    std::cout << "Bitte geben Sie die dritte int Zahl ein: ? ";
    getline(std::cin, buffer);
    z = read_number(buffer);
    sort_three_vars<int>(x, y, z);

    std::cout << "Erste Zahl nachher: " << x << std::endl;
    std::cout << "Zweite Zahl nachher: " << y << std::endl;
    std::cout << "Dritte Zahl nachher: " << z << std::endl;

    std::cout << "Bitte geben Sie den ersten String ein: ? ";
    getline(std::cin, a);
    std::cout << "Bitte geben Sie den zweiten String ein: ? ";
    getline(std::cin, b);
    std::cout << "Bitte geben Sie den dritten String ein: ? ";
    getline(std::cin, c);

    sort_three_vars<std::string>(a, b, c);

    std::cout << "Erster String nachher: " << a << std::endl;
    std::cout << "Zweiter String nachher: " << b << std::endl;
    std::cout << "Dritter String nachher: " << c << std::endl;

    system("pause");
    return 0;
}