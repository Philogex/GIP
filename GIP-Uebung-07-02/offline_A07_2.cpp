#include <iostream>
#include <string>
using namespace std;

void print_words(string input_str)
{
    bool word = false;
    const int A = int('A');
    const int a = int('a');
    for (uint16_t i = 0; i < input_str.length(); i++)
    {
        char cur_char = input_str.at(i);
        if ((int(cur_char) >= A && int(cur_char) <= A + 26) || (int(cur_char) >= a && int(cur_char) <= a + 26))
        {
            cout << input_str.at(i);
            word = true;
        }
        else
        {
            if (word)
            {
                cout << endl;
            }
        }
    }
    if (input_str.at(input_str.length() - 1) == ' ')
        return;
    cout << endl;
}

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

int main()
{
    uint16_t input_nr = 5;
    string input_arr[input_nr];
    for (uint16_t i = 0; i < input_nr; i++)
    {
        cout << "Eingabezeile = ? ";
        getline(cin, input_arr[i], '\n');
        if (empty_check(input_arr[i]))
        {
            input_nr = i;
            break;
        }
    }

    for (uint16_t i = 0; i < input_nr; i++)
    {
        print_words(input_arr[i]);
    }
    system("pause");
}