#include "RGB_Color.h"

int pow(int base, int exponent)
{
    int output_int = 1;
    if (exponent == 0)
        return 1;
    for (uint16_t i = 0; i < exponent; i++)
    {
        output_int *= base;
    }
    return output_int;
}

int read_number(std::string number_str)
{
    int output_int = 0;
    int zero = int('0');
    int cur_int = 0;
    for (uint16_t i = 0; i < number_str.length(); i++)
    {
        cur_int = int(number_str.at(number_str.length() - 1 - i)) - zero;
        output_int += cur_int * pow(10, i);
    }
    return output_int;
}

bool validate_color(int value)
{
    if (value >= 0 && value <= 255)
    {
        return true;
    }
    return false;
}

bool RGB_Color::input_color()
{
    int r, g, b;
    std::string buffer = "";
    std::cout << "rot (0...255): ? ";
    getline(std::cin, buffer);
    r = read_number(buffer);
    if (!validate_color(r))
        return false;
    std::cout << "gruen (0...255): ? ";
    getline(std::cin, buffer);
    g = read_number(buffer);
    if (!validate_color(g))
        return false;
    std::cout << "blau (0...255): ? ";
    getline(std::cin, buffer);
    b = read_number(buffer);
    if (!validate_color(b))
        return false;

    set_red(r);
    set_green(g);
    set_blue(b);
    return true;
}