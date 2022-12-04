#include <iostream>
#include <string>
using namespace std;

string trimme(string input_str)
{
    string output_str = "";
    const char plus = '+';
    uint16_t first_char = 0;
    uint16_t last_char = 0;
    bool empty_c = true;

    for (uint16_t i = 0; i < input_str.length(); i++)
    {
        if (input_str[i] != plus)
        {
            first_char = i;
            empty_c = false;
            break;
        }
    }

    for (uint16_t i = input_str.length(); i > 0; i--)
    {
        if (input_str[i - 1] != plus)
        {
            last_char = i - 1;
            break;
        }
    }

    if (empty_c)
        return output_str;

    // cout << first_char << " - " << last_char << endl;

    for (uint16_t i = first_char; i < last_char + 1; i++)
    {
        output_str += input_str[i];
    }

    return output_str;
}

int main()
{
    string s = "";
    cout << "Bitte geben Sie die Textzeile ein: ? ";
    getline(cin, s);
    cout << "Vorher: " << s << endl;
    cout << "Nachher: " << trimme(s) << endl;
    system("PAUSE");
    return 0;
}