#include <iostream>
#include <string>
using namespace std;

/*
int main()
{
    string date_1 = "";
    string date_2 = "";
    cout << "Datum 1 (dd-mm-yyyy):";
    cin >> date_1;
    cout << "Datum 2 (dd-mm-yyyy):";
    cin >> date_2;

    for (uint16_t i = 10; i > 0; i--)
    {
        if (date_1.at(i - 1) != date_2.at(i - 1))
        {
            cout << "nicht gleich" << endl;
            system("pause");
            return 0;
        }
    }
    cout << "gleich" << endl;
    system("pause");
    return 0;
}
*/

int main()
{
    uint16_t date_1[3];
    cout << "Tag Datum 1:\t";
    cin >> date_1[0];
    cout << "Monat Datum 1:\t";
    cin >> date_1[1];
    cout << "Jahr Datum 1:\t";
    cin >> date_1[2];

    uint16_t date_2[3];
    cout << "Tag Datum 2:\t";
    cin >> date_2[0];
    cout << "Monat Datum 2:\t";
    cin >> date_2[1];
    cout << "Jahr Datum 2:\t";
    cin >> date_2[2];

    for (uint16_t i = 3; i > 0; i--)
    {
        if (date_1[i - 1] == date_2[i - 1])
        {
            continue;
        }
        else if (date_1[i - 1] > date_2[i - 1])
        {
            cout << "erstes datum ist groesser" << endl;
            system("pause");
            return 0;
        }
        else
        {
            cout << "zweites datum ist groesser" << endl;
            system("pause");
            return 0;
        }
    }
    cout << "daten sind gleich" << endl;
    system("pause");
    return 0;
}