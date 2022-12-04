#include <iostream>

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

unsigned int my_strlen(const char *ptr)
{
    int str_len = 0;
    for (uint16_t i = 0; i < 21; i++)
    {
        if (ptr[i] != 0)
        {
            str_len++;
        }
    }
    return str_len;
}

int my_strcmp(const char *ptr1, const char *ptr2)
{
    uint16_t len_one = my_strlen(ptr1);
    uint16_t len_two = my_strlen(ptr2);

    for (uint16_t i = 0; i < len_one; i++)
    {
        if (ptr1[i] == ptr2[i])
        {
            continue;
        }
        else if (ptr1[i] > ptr2[i])
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }

    if (len_one > len_two)
    {
        return 1;
    }
    else if (len_one < len_two)
    {
        return -1;
    }

    return 0;
}

char *my_strconcat2(const char *sptr1, const char *sptr2, unsigned int count)
{
    uint16_t len_one = my_strlen(sptr1);
    uint16_t len_two = my_strlen(sptr2);
    uint16_t arr_len = len_one + len_two < count ? len_one + len_two : count;
    char *text = new char[arr_len + 2];

    for (uint16_t i = 0; i < len_one; i++)
    {
        if (i > arr_len)
        {
            break;
        }
        text[i] = sptr1[i];
    }

    for (uint16_t i = 0; i < len_two; i++)
    {
        if (i > arr_len - len_one)
        {
            break;
        }
        text[i + len_one] = sptr2[i];
    }

    text[arr_len] = '\n';
    text[arr_len + 1] = '\000';
    return text;
}

int main()
{
    char text_one[21] = "";
    char text_two[21] = "";
    char count_str[8] = "";
    int count = 0;

    std::cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
    std::cin.get(text_one, 20);
    std::cin.clear();
    std::cin.ignore();
    std::cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
    std::cin.get(text_two, 20);
    std::cin.clear();
    std::cin.ignore();
    std::cout << "Anzahl Zeichen: ? ";
    std::cin.get(count_str, 8);
    count = readNumber(count_str);

    std::cout << "Ergebnis my_strconcat2(): " << my_strconcat2(text_one, text_two, count);

    system("pause");
    return 0;
}