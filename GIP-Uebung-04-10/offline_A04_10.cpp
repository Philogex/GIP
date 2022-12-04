#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input_str = "";
    string buffer = "";
    char check_character;
    uint16_t check_counter = 0;
    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, input_str, '\n');
    cout << "Bitte Buchstaben eingeben: ? ";
    getline(cin, buffer, '\n');
    check_character = buffer.at(0);

    for (uint16_t i = input_str.length(); i > 0; --i)
    {
        if (input_str.at(i - 1) == check_character)
        {
            check_counter++;
        }
    }

    cout << "Der Buchstabe " << check_character << " kommt " << check_counter << " mal im Text vor.\n";
    system("pause");
    return 0;
}