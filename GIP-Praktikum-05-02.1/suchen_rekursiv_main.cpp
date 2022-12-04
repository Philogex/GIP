// Datei: suchen_rekursiv_main.cpp

#define CATCH_CONFIG_RUNNER
#include "catch.h"

#include <iostream>
#include <string>
using namespace std;

#include "suchen_rekursiv.h"

int main()
{
    Catch::Session().run();

    // Ihr Code ab hier ...
    cout << zeichenkette_suchen_rekursiv("aaa", "aa", 0, 0, 0);
    system("PAUSE");
    return 0;
}