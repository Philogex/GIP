#include <iostream>
#include <string>
using namespace std;

int main()
{
    uint16_t width = 0;
    uint16_t height = 0;
    string output_str = "";

    cout << "Bitte geben Sie die Breite des Rechtecks ein: ? ";
    cin >> width;
    cout << "Bitte geben Sie die Hoehe des Rechtecks ein: ? ";
    cin >> height;

    for (int i = height; i > 0; i--)
    {
        output_str.append("*");
        for (int n = width - 2; n > 0; n--)
        {
            if (i == 1 || i == height)
            {
                output_str.append("*");
            }
            else
            {
                output_str.append("+");
            }
        }
        output_str.append("*\n");
    }

    cout << output_str;

    system("pause");
    return 0;
}