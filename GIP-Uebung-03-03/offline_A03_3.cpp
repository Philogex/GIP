#include <iostream>
using namespace std;

int main()
{
    char input = 'a';
    int zero = int('0');
    int a = int('a') - 1;
    cout << "Bitte geben Sie das Zeichen ein: ? ";
    cin >> input;
    if (int(input) == a + 5)
    {
        cout << "Das Programm beendet sich jetzt." << endl;
        system("pause");
        return 0;
    }
    else if (int(input) < zero || int(input) > zero + 9)
    {
        cout << "Weder 'e' noch Ziffer" << endl;
        system("pause");
    }
    else
    {
        cout << input << " + 5 = " << int(input) - zero + 5 << endl;
        system("pause");
    }
}