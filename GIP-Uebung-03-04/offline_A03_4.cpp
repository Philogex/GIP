#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Bitte geben Sie die Stunde der aktuellen Uhrzeit ein: ? ";
    cin >> input;
    if (input == 23 || input >= 0 && input <= 5)
    {
        cout << "Gute Nacht.\n";
    }
    else if (input >= 6 && input <= 10)
    {
        cout << "Guten Morgen.\n";
    }
    else if (input >= 11 && input <= 13)
    {
        cout << "Mahlzeit.\n";
    }
    else if (input >= 14 && input <= 17)
    {
        cout << "Guten Tag.\n";
    }
    else if (input >= 18 && input <= 22)
    {
        cout << "Guten Abend.\n";
    }
    else
    {
        cout << "Keine erlaubte Stundenangabe.\n";
    }
    system("pause");
    return 0;
}