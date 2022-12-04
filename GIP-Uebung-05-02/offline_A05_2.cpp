#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int zero = int('0');
    int input_arr[6];
    int buffer_int = 0;
    int search_val = 0;
    bool check = false;
    for (uint16_t i = 0; i < 6; i++)
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
        }
    }

    cout << "Bitte geben Sie die Suchzahl ein: ? ";
    cin >> search_val;

    for (uint16_t i = 0; i < 6; i++)
    {
        if (search_val == input_arr[i])
            check = true;
    }
    if (check)
    {
        cout << "Die Suchzahl kam unter den Eingaben vor." << endl;
    }
    else
    {
        cout << "Die Suchzahl kam NICHT unter den Eingaben vor." << endl;
    }

    system("pause");
    return 0;
}

/*
Die Übergabe bei einem 2D-Array hat int array[][][], da das erste [] als * interpretiert werden kann. also ist die übegabe ein Pointer zu einem 2D-Array, da es nicht kopierbar ist. Also quasi int &array[][]
*/