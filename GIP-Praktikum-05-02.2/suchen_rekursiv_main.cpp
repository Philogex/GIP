// Datei: suchen_rekursiv_main.cpp

#include <iostream>
#include <string>
using namespace std;

#include "suchen_rekursiv.h"

int main()
{
    /*
    string input_str = "";
    string such_str = "";
    cout << "Bitte geben Sie den Text ein: ";
    getline(cin, input_str, '\n');
    cout << "Bitte geben Sie die zu suchende Zeichenkette ein: ";
    getline(cin, such_str, '\n');

    int output = zeichenkette_suchen_rekursiv(input_str, such_str);
    */
    string input_str = "ahskgaejgtat dfgsdh gtkjnsdg";
    string such_str = "hfj";
    int output = zeichenkette_suchen_rekursiv(input_str, such_str);

    if (output == -1)
    {
        cout << "Die Zeichenkette '" << such_str << "'  ist NICHT in dem Text '" << input_str << "' enthalten." << endl;
    }
    else
    {
        cout << "Die Zeichenkette '" << such_str << "'  ist in dem Text '" << input_str << "' enthalten." << endl
             << "Sie startet ab Zeichen " << output << " (bei Zaehlung ab 0)." << endl;
    }

    system("PAUSE");
    return 0;
}