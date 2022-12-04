#include <iostream>
using namespace std;

int main()
{
    char zeichen = '0';
    int a = int('a') - 1;
    cout << "Bitte geben Sie das Zeichen ein: ? ";
    cin >> zeichen;
    if (int(zeichen) > a + 26 || int(zeichen) < a)
    {
        cout << "KEIN Kleinbuchstabe (a-z).\n";
    }
    else
    {
        cout << "Es wurde ein Kleinbuchstabe (a-z) eingegeben.\n";
    }
    system("pause");
    return 0;
}