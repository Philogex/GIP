#include <iostream>
#include <string>
#include "suchen_rekursiv.h"
using namespace std;

int zeichenkette_suchen_rekursiv(string text, string zkette, size_t text_pos, size_t such_pos)
{
    /*
    cout << "Values:\t" << text << " - " << zkette << " - " << text_pos << " - " << such_pos << endl;
    cout << "Comparison:\t" << text.at(text_pos + such_pos) << " - " << zkette.at(such_pos) << endl;
    cout << "End:\t" << such_pos << " - " << zkette.length() - 1 << endl;
    */
    if (text_pos + zkette.length() >= text.length())
    {
        return -1;
    }
    if (such_pos >= zkette.length())
    {
        return text_pos;
    }
    else if (text.at(text_pos + such_pos) == zkette.at(such_pos))
    {
        return zeichenkette_suchen_rekursiv(text, zkette, text_pos, ++such_pos);
    }
    else
    {
        return zeichenkette_suchen_rekursiv(text, zkette, ++text_pos, such_pos = 0);
    }
};