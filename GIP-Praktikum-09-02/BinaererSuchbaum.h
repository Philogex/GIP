#pragma once
#include <iostream>
#include "BaumKnoten.h"

class BinaererSuchbaum
{
public:
    BinaererSuchbaum(BaumKnoten *r = nullptr) : root{r} {}

    BaumKnoten *get_root() { return root; }

    void einfuegen(int wert);
    void ausgeben();

private:
    BaumKnoten *root;
};