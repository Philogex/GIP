#include "swap_vars.h"

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

int readNumber(std::string number_str)
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

template <typename T>
void swap_vars(T &x1, T &x2)
{
    T temp = x1;
    x1 = x2;
    x2 = temp;
}

template void swap_vars<int>(int &x1, int &x2);
template void swap_vars<std::string>(std::string &x1, std::string &x2);