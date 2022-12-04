#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = int('a');
    string input = "";
    bool c = true;
    cout << "Text: ? ";
    getline(cin, input, '\n');

    for (int i = input.length() - 1; i >= 0; i--)
    {
        if (input.at(i) < a || input.at(i) > a + 26)
        {
            cout << "Text: ? ";
            getline(cin, input, '\n');
            i = input.length() - 1;
            c = true;
        }

        if (input.at(i) != input.at(input.length() - 1 - i))
        {
            c = false;
        }
    }

    if (c)
    {
        cout << "Das eingegebene Wort ist ein Palindrom.\n";
    }
    else
    {
        cout << "Das eingegebene Wort ist KEIN Palindrom.\n";
    }
    system("pause");
    return 0;
}