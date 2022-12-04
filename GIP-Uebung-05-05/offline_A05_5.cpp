#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int zero = int('0');
    int input_arr[9];
    uint16_t times_arr[6];
    uint16_t times = 0;
    int buffer_int = 0;

    for (uint16_t i = 0; i < 6; i++)
    {
        times_arr[i] = 0;
    }

    for (uint16_t i = 0; i < 9; i++)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> buffer_int;
        if (buffer_int < 1 || buffer_int > 6)
        {
            i -= 1;
        }
        else
        {
            input_arr[i] = buffer_int;
            times_arr[buffer_int - 1] += 1;
        }
    }

    for (uint16_t i = 0; i < 6; i++)
    {
        if (times_arr[i] > 0)
            times++;
    }
    cout << "In der Eingabe kamen " << times << " unterschiedliche Zahlen vor." << endl;

    system("pause");
    return 0;
}

/*
Die Übergabe bei einem 2D-Array hat int array[][][], da das erste [] als * interpretiert werden kann. also ist die übegabe ein Pointer zu einem 2D-Array, da es nicht kopierbar ist. Also quasi int &array[][]
*/