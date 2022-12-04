#include "binaerer_suchbaum.h"

void print_wert(unsigned int times, int wert)
{
    for (uint16_t i = 0; i < times; i++)
    {
        std::cout << "++";
    }
    std::cout << wert << std::endl;
}

void suchbaum::einfuegen(suchbaum::BaumKnoten *&anker, int wert)
{
    if (anker == nullptr)
    {
        anker = new suchbaum::BaumKnoten{wert};
        return;
    }

    if (anker->wert < wert)
    {
        return suchbaum::einfuegen(anker->rechts, wert);
    }
    else if (anker->wert > wert)
    {
        return suchbaum::einfuegen(anker->links, wert);
    }
}

void knoten_ausgeben(suchbaum::BaumKnoten *knoten, unsigned int tiefe)
{
    if (knoten->rechts != nullptr)
    {
        knoten_ausgeben(knoten->rechts, tiefe + 1);
    }
    print_wert(tiefe, knoten->wert);
    if (knoten->links != nullptr)
    {
        return knoten_ausgeben(knoten->links, tiefe + 1);
    }
}

void suchbaum::ausgeben(suchbaum::BaumKnoten *anker)
{
    if (anker == nullptr)
    {
        std::cout << "Leerer Baum." << std::endl;
        return;
    }
    knoten_ausgeben(anker, 0);
}