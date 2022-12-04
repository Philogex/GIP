#include <iostream>
#include <string>
using namespace std;

int main()
{
    uint32_t auftrag_euro = 0;
    cin >> auftrag_euro;
    if (auftrag_euro < 300)
    {
        cout << "Betrag: " << auftrag_euro + 25 << endl;
    }
    else if (auftrag_euro < 1000)
    {
        cout << "Betrag: " << auftrag_euro + 5 << endl;
    }
    else
    {
        cout << "Betrag: " << auftrag_euro << endl;
    }
    system("pause");
    return 0;
}