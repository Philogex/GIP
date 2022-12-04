#include <iostream>
using namespace std;

int main()
{
    int16_t numbers[5];
    int16_t comparator_max = INT16_MIN;
    int16_t comparator_max_pos = 1;
    int16_t comparator_min = INT16_MAX;
    int16_t comparator_min_pos = 1;
    for (uint16_t i = 0; i < 5; i++)
    {
        cout << i + 1 << ". Zahl:\t";
        cin >> numbers[i];
        if (comparator_max < numbers[i])
        {
            comparator_max = numbers[i];
            comparator_max_pos = i + 1;
        }
        if (comparator_min > numbers[i])
        {
            comparator_min = numbers[i];
            comparator_min_pos = i + 1;
        }
    }
    cout << comparator_min << " min, pos: " << comparator_min_pos << endl
         << comparator_max << " max, pos: " << comparator_max_pos << endl;
    system("pause");
    return 0;
}