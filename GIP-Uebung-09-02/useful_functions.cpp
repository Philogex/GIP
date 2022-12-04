/*
#include <string>

void int_swap(int &small, int &large)
{
    int temp = large;
    if (small > large)
    {
        large = small;
        small = large;
    }
}

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

void str_swap(std::string &small, std::string &large)
{
    uint16_t len_small = small.length();
    uint16_t len_large = large.length();
    std::string temp = "";

    for (uint16_t i = 0; i < len_small; i++)
    {
        if (small[i] == large[i])
        {
            continue;
        }
        else if (small[i] > large[i])
        {
            temp = small;
            small = large;
            large = temp;
        }
        else
        {
            return;
        }
    }

    if (len_small > len_large)
    {
        temp = small;
        small = large;
        large = temp;
    }
}

template <typename T>
void sort_three_vars(T &x1, T &x2, T &x3)
{
    str_swap(x1, x3);
    str_swap(x2, x3);
    str_swap(x1, x2);
};

template void sort_three_vars<int>(int &x1, int &x2, int &x3);
template void sort_three_vars<std::string>(std::string &x1, std::string &x2, std::string &x3);
*/