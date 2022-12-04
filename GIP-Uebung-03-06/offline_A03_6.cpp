#include <iostream>
using namespace std;

int main()
{
    int16_t numbers[3];
    int16_t comparator_max = INT16_MIN;
    int16_t comparator_min = INT16_MAX;
    for (uint16_t i = 0; i < 3; i++)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> numbers[i];
        if (comparator_max < numbers[i])
        {
            comparator_max = numbers[i];
        }
        if (comparator_min > numbers[i])
        {
            comparator_min = numbers[i];
        }
    }
    cout << "Die kleinste eingegebene Zahl lautet: " << comparator_min << endl
         << "Die groesste eingegebene Zahl lautet: " << comparator_max << endl;
    system("pause");
    return 0;
}