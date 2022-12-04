#include <iostream>
#include <string>
using namespace std;

int multiply(uint16_t base, uint16_t exponent)
{
    uint16_t multiplier = base;
    if (exponent == 0)
        return 1;
    for (uint16_t i = 0; i < exponent - 1; i++)
    {
        base *= multiplier;
    }
    return base;
}

int main()
{
    string input_str = "";
    int input_int = 0;
    bool string_or_int = true;
    const int zero = int('0');
    cout << "Bitte die Zahl oder das Wort 'ende' eingeben: ? ";
    getline(cin, input_str, '\n');

    const uint16_t len = input_str.length();

    for (uint16_t i = 0; i < len; i++)
    {

        const char current_char = input_str.at(i);
        if (int(current_char) < zero || int(current_char) > zero + 9)
        {
            string_or_int = false;
            break;
        }
        input_int += (int(current_char) - zero) * multiply(10, len - i - 1);
        // 546 == 10812
    }

    if (string_or_int)
    {
        cout << "Der doppelte Wert betraegt: " << input_int * 2 << endl;
    }
    else if (not string_or_int && input_str == "ende")
    {
        cout << "Das Programm beendet sich jetzt." << endl;
    }

    system("pause");
    return 0;
}