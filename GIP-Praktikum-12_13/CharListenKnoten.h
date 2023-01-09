#pragma once

class CharListenKnoten
{
public:
    CharListenKnoten(char init_data, CharListenKnoten *init_next = nullptr) : data{init_data}, next{init_next}
    {
        my_id = next_available_id++;
        object_count++;
    }

    ~CharListenKnoten()
    {
        object_count--;
    }

    char get_data() { return data; }
    CharListenKnoten *get_next() { return next; }
    int get_my_id() { return my_id; }

    void set_data(char new_data) { data = new_data; }
    void set_next(CharListenKnoten *new_next) { next = new_next; }

    static int next_available_id;
    static int object_count;

private:
    char data;
    CharListenKnoten *next;
    int my_id;
};

void hinten_anfuegen(CharListenKnoten *&anker, const char wert);
void loesche_alle(CharListenKnoten *&anker);
CharListenKnoten *deep_copy(CharListenKnoten *orig);