#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input = "";
    cout << "Bitte geben Sie die Zeichenkette (6 Zeichen) ein: ? ";
    cin >> input;
    if (input.length() != 6)
        return 0;
    for (int i = input.length() / 2; i > 0; i--)
    {
        if (input.at(i - 1) != input.at(input.length() - i))
        {
            cout << "Das eingegebene Wort ist KEIN Palindrom.\n";
            system("pause");
            return 0;
        }
    }
    cout << "Das eingegebene Wort ist ein Palindrom.\n";
    system("pause");
    return 0;
}