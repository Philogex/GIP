#include "MyString2.h"

unsigned int MyString2::length() const
{
    if (anker == nullptr)
    {
        return 0;
    }
    else
    {
        unsigned int len = 1;
        CharListenKnoten *ptr = anker;
        while (ptr->get_next() != nullptr)
        {
            len++;
            ptr = ptr->get_next();
        }
        return len;
    }
}

char MyString2::at(unsigned int pos) const
{
    if (anker == nullptr)
    {
        return '\0';
    }
    CharListenKnoten *ptr = anker;
    unsigned int c = 0;
    while (ptr->get_next() != nullptr)
    {
        if (c == pos)
        {
            break;
        }
        ptr = ptr->get_next();
        c++;
    }
    if (c != pos)
    {
        return '\0';
    }
    return ptr->get_data();
}

std::string MyString2::to_string() const
{
    CharListenKnoten *ptr = anker;
    std::string out_string = "";
    if (anker == nullptr)
    {
        return out_string;
    }
    while (ptr->get_next() != nullptr)
    {
        out_string += ptr->get_data();
        ptr = ptr->get_next();
    }
    out_string += ptr->get_data();
    return out_string;
}