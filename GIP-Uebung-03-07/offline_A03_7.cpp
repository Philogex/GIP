#include <iostream>
using namespace std;

int main()
{
    int16_t numbers[4];
    int16_t nn = 0;
    int16_t not_nn = 0;
    for (uint16_t i = 0; i < 4; i++)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> numbers[i];
        if (numbers[i] == 99)
            nn++;
        else
            not_nn++;
    }
    cout << nn << " Eingabezahlen waren gleich der Vergleichszahl 99." << endl
         << not_nn << " Eingabezahlen waren ungleich der Vergleichszahl 99." << endl;
    system("pause");
    return 0;
}