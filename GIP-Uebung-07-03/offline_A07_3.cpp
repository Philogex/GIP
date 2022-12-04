#include <iostream>
#include <string>

using namespace std;

struct w_haeufigkeit
{
    string wort;
    int haeufigkeit;
};

bool empty_check(string input_str)
{
    uint16_t n = 0;
    for (uint16_t i = 0; i < input_str.length(); i++)
    {
        if (input_str.at(i) == ' ')
            n++;
    }
    if (n == input_str.length())
    {
        return true;
    }
    return false;
}

string naechstes_wort(string zeile, int &pos)
{
    zeile += ' ';
    string output_str = "";
    char cur_char;
    bool is_wort = false;
    for (uint16_t i = pos; i < zeile.length(); i++)
    {
        cur_char = zeile.at(i);
        if (cur_char != ',' && cur_char != ' ' && cur_char != '.')
        {
            is_wort = true;
            output_str += cur_char;
        }
        else if (is_wort)
        {
            pos = i;
            return output_str;
        }
    }
    pos = zeile.length() - 1;
    return "";
}

void zaehle_wort(string wort, w_haeufigkeit haeufigkeiten[], int &w_count)
{
    bool added = false;
    for (uint16_t i = 0; i < w_count; i++)
    {
        if (haeufigkeiten[i].wort == wort)
        {
            haeufigkeiten[i].haeufigkeit += 1;
            added = true;
        }
    }
    if (!added)
    {
        w_count += 1;
        w_haeufigkeit new_word = {wort, 1};
        haeufigkeiten[w_count - 1] = new_word;
    }
}

int main()
{
    int z_count = 0, w_count = 0;
    string wort = "";
    string eingabe[5];
    for (uint16_t i = 0; i < 5; i++)
    {
        cout << "Eingabezeile = ? ";
        getline(cin, eingabe[i], '\n');
        if (empty_check(eingabe[i]))
        {
            z_count = i;
            break;
        }
    }

    w_haeufigkeit haeufigkeiten[1000];
    for (int k = 0; k < z_count; k++)
    {
        int pos = 0;
        while (true)
        {
            wort = naechstes_wort(eingabe[k], pos);
            if (wort == "")
                break;
            zaehle_wort(wort, haeufigkeiten, w_count);
        }
    }
    for (int k = 0; k < w_count; k++)
        cout << haeufigkeiten[k].wort << ": "
             << haeufigkeiten[k].haeufigkeit << endl;
    std::system("PAUSE");
    return 0;
}