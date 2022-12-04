#include <iostream>

unsigned int my_strlen(const char *ptr)
{
    int str_len = -1;
    for (uint16_t i = 0; i < 21; i++)
    {
        if (ptr[i] != '\n')
        {
            str_len++;
        }
    }
    return str_len;
}

int main()
{
    char text[21];
    for (uint16_t i = 0; i < 21; i++)
    {
        text[i] = '\n';
    }

    std::cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    std::cin.get(text, 20);

    std::cout << "Ergebnis my_strlen(): " << my_strlen(text) << std::endl;
    system("pause");
    return 0;
}