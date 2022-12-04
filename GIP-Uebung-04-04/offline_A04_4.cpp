#include <iostream>
#include <string>
using namespace std;

void printString(char c, int i)
{
    for (int n = i; n > 0; n--)
    {
        cout << c;
    }
}

int main()
{
    uint16_t width = 0;
    uint16_t height = 0;

    cout << "Bitte geben Sie die Breite des Parallelogramms ein: ? ";
    cin >> width;
    cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ? ";
    cin >> height;

    printString('*', width);
    cout << endl;

    for (int i = 0; i < height - 2; i++)
    {
        printString('.', i + 1);
        cout << '*';
        printString('+', width - 2);
        cout << '*' << endl;
    }

    printString('.', height - 1);
    printString('*', width);
    cout << endl
         << endl;

    system("pause");
    return 0;
}