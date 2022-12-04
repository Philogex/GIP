#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input_str = "";
    char c;
    string buffer = "";
    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, input_str, '\n');
    cout << "Bitte Buchstaben eingeben: ? ";
    getline(cin, buffer, '\n');
    c = buffer.at(0);

    for (uint16_t i = input_str.length(); i > 0; --i)
    {
        if (input_str.at(i - 1) == c)
        {
            cout << "Der Buchstabe " << c << " kommt im Text vor, an Position " << i - 1 << ".\n";
            system("pause");
            return 0;
        }
    }

    cout << "Der Buchstabe " << c << " kommt nicht im Text vor.\n";
    system("pause");
    return 0;
}