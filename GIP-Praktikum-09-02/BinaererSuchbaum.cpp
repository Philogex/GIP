#include "BinaererSuchbaum.h"

void BinaererSuchbaum::einfuegen(int wert)
{
    BaumKnoten *neuer_knoten = new BaumKnoten{wert};

    if (root == nullptr)
    {
        root = neuer_knoten;
        return;
    }

    BaumKnoten *ptr = root;

    while (true)
    {
        if (ptr->get_data() < wert)
        {
            if (ptr->get_rechts() == nullptr)
            {
                ptr->set_rechts(neuer_knoten);
                return;
            }
            ptr = (BaumKnoten *)ptr->get_rechts();
        }
        else if (ptr->get_data() > wert)
        {
            if (ptr->get_links() == nullptr)
            {
                ptr->set_links(neuer_knoten);
                return;
            }
            ptr = (BaumKnoten *)ptr->get_links();
        }
        else
        {
            delete neuer_knoten;
            return;
        }
    }
}

void BinaererSuchbaum::ausgeben()
{
    if (root == nullptr)
    {
        std::cout << "Leerer Baum." << std::endl;
        return;
    }
    root->ausgeben(0);
}