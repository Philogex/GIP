#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input_str = "";
    cout << "Bitte einzeiligen Text eingeben (ohne Leerzeichen): ? ";
    getline(cin, input_str, '\n');

    if (input_str.length() == 0)
    {
        system("pause");
        return 0;
    }

    for (uint16_t i = 0; i < input_str.length(); i++)
    {
        cout << "Position: " << i << " Buchstabe: " << input_str.at(i) << endl;
    }

    system("pause");
    return 0;
}