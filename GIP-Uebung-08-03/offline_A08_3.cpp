#include <iostream>

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

char *my_strconcat(const char *ptr1, const char *ptr2)
{
    uint16_t len_one = my_strlen(ptr1);
    uint16_t len_two = my_strlen(ptr2);
    char *text = new char[len_one + len_two + 2];

    for (uint16_t i = 0; i < len_one; i++)
    {
        text[i] = ptr1[i];
    }

    for (uint16_t i = 0; i < len_two; i++)
    {
        text[i + len_one] = ptr2[i];
    }

    text[len_one + len_two] = '\n';
    text[len_one + len_two + 1] = '\000';
    return text;
}

int main()
{
    char text_one[21];
    char text_two[21];
    for (uint16_t i = 0; i < 21; i++)
    {
        text_one[i] = 0;
        text_two[i] = 0;
    }

    std::cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
    std::cin.get(text_one, 20);
    std::cin.clear();
    std::cin.ignore();
    std::cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
    std::cin.get(text_two, 20);

    std::cout << "Ergebnis my_strconcat(): " << my_strconcat(text_one, text_two);

    system("pause");
    return 0;
}