#include "CharListenKnoten.h"

int CharListenKnoten::next_available_id = 1;
int CharListenKnoten::object_count = 0;

void hinten_anfuegen(CharListenKnoten *&anker, const char wert)
{
    CharListenKnoten *new_object = new CharListenKnoten{wert};
    if (anker == nullptr)
    {
        anker = new_object;
    }
    else
    {
        CharListenKnoten *ptr = anker;
        while (ptr->get_next() != nullptr)
        {
            ptr = ptr->get_next();
        }
        ptr->set_next(new_object);
    }
}

void loesche_alle(CharListenKnoten *&anker)
{
    if (anker == nullptr)
    {
        return;
    }
    else
    {
        CharListenKnoten *ptr = anker;
        while (anker != nullptr)
        {
            ptr = ptr->get_next();
            delete anker;
            anker = ptr;
        }
    }
}

CharListenKnoten *deep_copy(CharListenKnoten *orig)
{
    if (orig == nullptr)
    {
        return nullptr;
    }
    else
    {
        CharListenKnoten *copy = new CharListenKnoten{orig->get_data()};
        CharListenKnoten *copy_ptr = copy;
        while (orig->get_next() != nullptr)
        {
            orig = orig->get_next();
            CharListenKnoten *new_object = new CharListenKnoten{orig->get_data()};
            copy_ptr->set_next(new_object);
            copy_ptr = copy_ptr->get_next();
        }
        return copy;
    }
}