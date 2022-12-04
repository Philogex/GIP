#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input_str = "";
    string output_str = "";
    string buffer = "";
    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, input_str, '\n');
    cout << "Eingabetext: " << input_str << endl;

    for (uint16_t i = input_str.length(); i > 0; --i)
    {
        buffer = input_str.at(i - 1);
        output_str.append(buffer);
    }

    cout << "Ergebnis: " << output_str << endl;

    system("pause");
    return 0;
}