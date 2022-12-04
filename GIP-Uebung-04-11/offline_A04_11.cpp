#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input_str = "";
    string input_buffer = "";
    char replace_character;
    char substitute_character;
    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, input_str, '\n');
    cout << "Bitte den zu ersetzenden Buchstaben eingeben: ? ";
    getline(cin, input_buffer, '\n');
    replace_character = input_buffer.at(0);
    cout << "Bitte den Ersatz-Buchstaben eingeben: ? ";
    getline(cin, input_buffer, '\n');
    substitute_character = input_buffer.at(0);

    for (uint16_t i = input_str.length(); i > 0; --i)
    {
        if (input_str.at(i - 1) == replace_character)
        {
            input_str.at(i - 1) = substitute_character;
        }
    }

    cout << "Der Text nach der Ersetzung: " << input_str << endl;
    system("pause");
    return 0;
}