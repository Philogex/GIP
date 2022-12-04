// Datei: liste_main.cpp

#include <iostream>
#include <string>

#define CATCH_CONFIG_RUNNER
#include "gip_mini_catch.h"

#include "liste.h"

int main()
{
    bool run_test_cases = true;
    if (run_test_cases)
    {
        Catch::Session().run();
    }
    else
    {
        std::cout << "no test cases run" << std::endl;
    }

    const size_t laenge = 10;
    TListenKnoten *anker = nullptr;

    // std::cout << liste_als_string(anker) << std::endl;
    // std::cout << liste_als_string_rueckwaerts(anker) << std::endl; // neu Aufgabe INF-08.02

    for (size_t i = 0; i < laenge; i++)
    {
        hinten_anfuegen(anker, i * i);
    }

    /*
    TListenKnoten *ptr = anker;
    while (ptr->next != nullptr)
    {
        if (ptr->prev == nullptr)
        {
            std::cout << "no previous value" << std::endl;
        }
        ptr = ptr->next;
        if (ptr->prev != nullptr)
        {
            TListenKnoten *prev_ptr = ptr->prev;
            std::cout << prev_ptr->data << std::endl;
        }
    }
    */

    std::cout << liste_als_string(anker) << std::endl;

    /*
    in_liste_einfuegen(anker, 42, 0);
    std::cout << liste_als_string(anker) << std::endl;
    std::cout << liste_als_string_rueckwaerts(anker) << std::endl;
    */

    /*
    aus_liste_loeschen(anker, 81);
    std::cout << liste_als_string(anker) << std::endl;
    std::cout << liste_als_string_rueckwaerts(anker) << std::endl;
    */

    // std::cout << liste_als_string_rueckwaerts(anker) << std::endl; // neu Aufgabe INF-08.02

    // Neu Aufgabe INF-08.03 ...
    /*
    in_liste_einfuegen(anker, 11, 0); // neu
    std::cout << liste_als_string(anker) << std::endl; // neu
    std::cout << liste_als_string_rueckwaerts(anker) << std::endl; // neu

    in_liste_einfuegen(anker, 22, 25); // neu
    std::cout << liste_als_string(anker) << std::endl; // neu
    std::cout << liste_als_string_rueckwaerts(anker) << std::endl; // neu

    in_liste_einfuegen(anker, 33, 81); // neu
    std::cout << liste_als_string(anker) << std::endl; // neu
    std::cout << liste_als_string_rueckwaerts(anker) << std::endl; // neu

    in_liste_einfuegen(anker, 44, 99); // neu
    std::cout << liste_als_string(anker) << std::endl; // neu
    std::cout << liste_als_string_rueckwaerts(anker) << std::endl; // neu
    */

    // Neu Aufgabe INF-08.04 ...
    /*
    aus_liste_loeschen(anker, 11);                                 // neu
    std::cout << liste_als_string(anker) << std::endl;             // neu
    std::cout << liste_als_string_rueckwaerts(anker) << std::endl; // neu

    aus_liste_loeschen(anker, 22);                                 // neu
    std::cout << liste_als_string(anker) << std::endl;             // neu
    std::cout << liste_als_string_rueckwaerts(anker) << std::endl; // neu

    aus_liste_loeschen(anker, 33);                                 // neu
    std::cout << liste_als_string(anker) << std::endl;             // neu
    std::cout << liste_als_string_rueckwaerts(anker) << std::endl; // neu

    aus_liste_loeschen(anker, 44);                                 // neu
    std::cout << liste_als_string(anker) << std::endl;             // neu
    std::cout << liste_als_string_rueckwaerts(anker) << std::endl; // neu
    */

    system("PAUSE");
    return 0;
}
