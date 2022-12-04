#include <iostream>
#include "swap_vars.h"

int main()
{
    int x = 0;
    int y = 0;
    std::string a = "";
    std::string b = "";
    std::string buffer = "";

    std::cout << "Bitte geben Sie die erste int Zahl ein: ? ";
    getline(std::cin, buffer);
    x = readNumber(buffer);
    std::cout << "Bitte geben Sie die zweite int Zahl ein: ? ";
    getline(std::cin, buffer);
    y = readNumber(buffer);

    swap_vars<int>(x, y);

    std::cout << "Erste Zahl nachher: " << x << std::endl;
    std::cout << "Zweite Zahl nachher: " << y << std::endl;

    std::cout << "Bitte geben Sie den ersten String ein: ? ";
    getline(std::cin, a);
    std::cout << "Bitte geben Sie den zweiten String ein: ? ";
    getline(std::cin, b);

    swap_vars<std::string>(a, b);

    std::cout << "Erster String nachher: " << a << std::endl;
    std::cout << "Zweiter String nachher: " << b << std::endl;

    system("pause");
    return 0;
}