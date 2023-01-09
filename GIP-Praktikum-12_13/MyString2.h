#pragma once
#include <string>
// #include <iostream>
#include "CharListenKnoten.h"

class MyString2
{
public:
    MyString2(CharListenKnoten *init_anker = nullptr) : anker{init_anker} {}
    MyString2(std::string init_string) : anker{nullptr}
    {
        for (uint16_t i = 0; i < init_string.length(); i++)
        {
            hinten_anfuegen(anker, init_string[i]);
        }
    }
    MyString2(const MyString2 &copy_string)
    {
        anker = deep_copy(copy_string.anker);
    }
    ~MyString2()
    {
        loesche_alle(anker);
    }

    MyString2 &operator=(const MyString2 &op_string)
    {
        loesche_alle(anker);
        anker = deep_copy(op_string.anker);
        return *this;
    }
    MyString2 operator+(char c) const
    {
        MyString2 new_object = deep_copy(anker);
        hinten_anfuegen(new_object.anker, c);
        return new_object;
    }

    CharListenKnoten *get_anker() { return anker; }

    void set_anker(CharListenKnoten *new_anker) { anker = new_anker; }

    unsigned int length() const;
    char at(unsigned int pos) const;
    std::string to_string() const;

private:
    CharListenKnoten *anker;
};