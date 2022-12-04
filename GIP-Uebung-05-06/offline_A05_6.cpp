#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
    const int zero = int('0');
    int input_arr[5];
    int minValue = INT_MAX;
    int maxValue = INT_MIN;
    int buffer_int = 0;

    for (uint16_t i = 0; i < 5; i++)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> input_arr[i];
        if (input_arr[i] < minValue)
        {
            minValue = input_arr[i];
        }
        else if (input_arr[i] > maxValue)
        {
            maxValue = input_arr[i];
        }
    }

    for (uint16_t i = 0; i < 5; i++)
    {
        cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << input_arr[i] << endl;
    }
    cout << "Die kleinste eingegebene Zahl lautete: " << minValue << endl
         << "Die groesste eingegebene Zahl lautete: " << maxValue << endl;

    system("pause");
    return 0;
}

/*
Die Übergabe bei einem 2D-Array hat int array[][][], da das erste [] als * interpretiert werden kann. also ist die übegabe ein Pointer zu einem 2D-Array, da es nicht kopierbar ist. Also quasi int &array[][]
*/