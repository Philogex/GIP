// Datei: liste.cpp

#include <string>
#include <iostream>
#include "liste.h"

std::string liste_als_string(TListenKnoten *anker)
{
    std::string resultat = "";

    if (anker == nullptr)
    {
        return "Leere Liste.";
    }
    else
    {
        resultat += "[ ";
        TListenKnoten *ptr = anker;
        do
        {
            resultat += std::to_string(ptr->data);

            if (ptr->next != nullptr)
            {
                resultat += " , ";
            }
            else
            {
                resultat += " ";
            }

            ptr = ptr->next;
        } while (ptr != nullptr);
        resultat += "]";
    }
    return resultat;
}

std::string liste_als_string_rueckwaerts(TListenKnoten *anker)
{
    std::string resultat = "";

    if (anker == nullptr)
    {
        return "Leere Liste.";
    }
    else
    {
        TListenKnoten *ptr = anker;
        while (ptr->next != nullptr)
        {
            ptr = ptr->next;
        };

        resultat += "[ ";
        while (ptr != nullptr)
        {
            resultat += std::to_string(ptr->data);

            if (ptr->prev != nullptr)
            {
                resultat += " , ";
            }
            else
            {
                resultat += " ";
            }
            ptr = ptr->prev;
        }

        resultat += "]";
    }
    return resultat;
}

// Wird modifiziert in Aufgabe INF-08.01 ...
void hinten_anfuegen(TListenKnoten *&anker, const int wert)
{
    TListenKnoten *neuer_eintrag = new TListenKnoten;
    neuer_eintrag->data = wert;
    neuer_eintrag->prev = nullptr;
    neuer_eintrag->next = nullptr;

    if (anker == nullptr)
    {
        anker = neuer_eintrag;
    }
    else
    {
        TListenKnoten *ptr = anker;
        while (ptr->next != nullptr)
        {
            ptr = ptr->next;
        }
        ptr->next = neuer_eintrag;
        neuer_eintrag->prev = ptr;
    }
}

void in_liste_einfuegen(TListenKnoten *&anker, int wert_neu, int vor_wert)
{
    TListenKnoten *neuer_eintrag = new TListenKnoten;
    neuer_eintrag->data = wert_neu;
    neuer_eintrag->prev = nullptr;
    neuer_eintrag->next = nullptr;

    if (anker == nullptr)
    {
        anker = neuer_eintrag;
        return;
    }

    TListenKnoten *ptr = anker;
    while (ptr != nullptr)
    {
        if (ptr->data == vor_wert)
        {
            if (ptr == anker)
            {
                anker = neuer_eintrag;
                neuer_eintrag->next = ptr;
                ptr->prev = neuer_eintrag;
                return;
            }
            else
            {
                ptr->prev->next = neuer_eintrag;
                neuer_eintrag->prev = ptr->prev;
                ptr->prev = neuer_eintrag;
                neuer_eintrag->next = ptr;

                /*
                neuer_eintrag->next = ptr;
                neuer_eintrag->prev = ptr->prev;
                ptr->prev = neuer_eintrag;
                */
                return;
            }
        }
        if (ptr->next == nullptr)
        {
            break;
        }
        ptr = ptr->next;
    }

    // wenn vor_wert nicht in liste ist
    ptr->next = neuer_eintrag;
    neuer_eintrag->prev = ptr;
};

void aus_liste_loeschen(TListenKnoten *&anker, int wert)
{
    TListenKnoten *ptr = anker;
    while (ptr != nullptr)
    {
        if (ptr->data == wert)
        {
            if (ptr == anker)
            {
                if (ptr->next != nullptr)
                {
                    ptr->next->prev = ptr->prev;
                    anker = ptr->next;
                }
                else
                {
                    anker = nullptr;
                }
            }
            else
            {
                if (ptr->next != nullptr)
                {
                    ptr->next->prev = ptr->prev;
                    ptr->prev->next = ptr->next;
                }
                else
                {
                    ptr->prev->next = nullptr;
                }
            }
            delete ptr;
            return;
        }
        ptr = ptr->next;
    }
};