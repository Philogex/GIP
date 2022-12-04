#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int zero = int('0');
    int input_arr[4];
    int buffer_int = 0;
    int compare_val = 0;
    uint16_t equal = 0;
    uint16_t not_equal = 0;
    for (uint16_t i = 0; i < 4; i++)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> buffer_int;
        input_arr[i] = buffer_int;
    }

    cout << "Bitte geben Sie die Vergleichszahl ein: ? ";
    cin >> compare_val;

    for (uint16_t i = 0; i < 4; i++)
    {
        if (input_arr[i] == compare_val)
        {
            equal += 1;
        }
        else
        {
            not_equal += 1;
        }
    }
    cout << equal << " Eingabezahlen waren gleich der Vergleichszahl." << endl
         << not_equal << " Eingabezahlen waren ungleich der Vergleichszahl." << endl;

    system("pause");
    return 0;
}

/*
Die Übergabe bei einem 2D-Array hat int array[][][], da das erste [] als * interpretiert werden kann. also ist die übegabe ein Pointer zu einem 2D-Array, da es nicht kopierbar ist. Also quasi int &array[][]
*/