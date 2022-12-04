#pragma once
#include <iostream>

class BaumKnoten
{
public:
    BaumKnoten(int data = 0, BaumKnoten *links = nullptr, BaumKnoten *rechts = nullptr) : data{data}, links{links}, rechts{rechts} {}

    int get_data() { return data; }             // const fehlt
    BaumKnoten *get_links() { return links; }   // const fehlt
    BaumKnoten *get_rechts() { return rechts; } // const fehlt

    void set_data(int d) { data = d; }
    void set_links(BaumKnoten *l) { links = l; }
    void set_rechts(BaumKnoten *r) { rechts = r; }

    void ausgeben(unsigned int tiefe);

private:
    int data;
    BaumKnoten *links, *rechts;
};