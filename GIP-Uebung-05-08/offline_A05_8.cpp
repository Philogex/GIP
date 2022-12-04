#include <iostream>
#include <string>
using namespace std;

string ersetze(string zeile, char zu_ersetzendes_zeichen, string ersatztext)
{
    string output_str = "";
    for (uint16_t i = 0; i < zeile.length(); i++)
    {
        const char current_char = zeile.at(i);
        if (current_char == zu_ersetzendes_zeichen)
        {
            output_str += ersatztext;
        }
        else
        {
            output_str += current_char;
        }
    }
    return output_str;
}

int main()
{
    string s1 = "", s2 = "";
    char c;
    cout << "Bitte geben Sie die Textzeile ein: ? ";
    getline(cin, s1);
    cout << "Bitte geben Sie das zu ersetzende Zeichen ein: ? ";
    cin >> c;
    cin.ignore();
    cout << "Bitte geben Sie den einzusetzenden Text ein: ? ";
    getline(cin, s2);
    cout << "Ergebnis: " << ersetze(s1, c, s2) << endl;
    system("PAUSE");
    return 0;
}