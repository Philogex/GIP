#include "BaumKnoten.h"

void print_wert(unsigned int times, int wert)
{
    for (uint16_t i = 0; i < times; i++)
    {
        std::cout << "++";
    }
    std::cout << wert << std::endl;
}

void BaumKnoten::ausgeben(unsigned int tiefe) // warum nicht rekursiv?
{
    if (rechts != nullptr)
    {
        rechts->ausgeben(tiefe + 1);
    }
    print_wert(tiefe, get_data());
    if (links != nullptr)
    {
        return links->ausgeben(tiefe + 1);
    }
}