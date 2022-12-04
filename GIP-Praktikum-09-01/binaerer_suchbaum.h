#pragma once
#include <iostream>

namespace suchbaum
{
    struct BaumKnoten
    {
        int wert;
        BaumKnoten *links = nullptr;
        BaumKnoten *rechts = nullptr;
    };
    void einfuegen(BaumKnoten *&anker, int wert);

    void ausgeben(BaumKnoten *anker);
}
