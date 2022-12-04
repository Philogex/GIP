#include <iostream>
using namespace std;

int main()
{
    char input = '0';
    cout << "Bitte geben Sie das Zeichen ein: ? ";
    cin >> input;
    if (input == 'j' || input == 'J')
    {
        cout << "Es handelt sich um eine Ja Eingabe.\n";
    }
    else if (input == 'n' || input == 'N')
    {
        cout << "Es handelt sich um eine Nein Eingabe.\n";
    }
    else
    {
        cout << "Es handelt sich um eine sonstige Eingabe.\n";
    }
    system("pause");
    return 0;
}