#include <iostream>
#include <string>
using namespace std;

void spalte_ab_erstem(char zeichen, string eingabe, string &erster_teil, string &zweiter_teil)
{
    bool part = false;
    for (uint16_t i = 0; i < eingabe.length(); i++)
    {
        if (eingabe.at(i) == zeichen && not part)
        {
            part = true;
            continue;
        }
        if (part)
        {
            zweiter_teil += eingabe.at(i);
        }
        else
        {
            erster_teil += eingabe.at(i);
        }
    }
}

int main()
{
    char split_char;
    string input_str = "";
    string first_part = "";
    string second_part = "";
    cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
    getline(cin, input_str, '\n');
    cout << "Bitte geben Sie das Zeichen ein: ? ";
    cin >> split_char;
    spalte_ab_erstem(split_char, input_str, first_part, second_part);
    cout << "Der erste Teil der Zeichenkette lautet: " << first_part << endl
         << "Der zweite Teil der Zeichenkette lautet: " << second_part << endl;
    system("pause");
    return 0;
}