#include <iostream>
#include <string>
using namespace std;

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

void print_right_bound(string input, uint16_t str_length)
{
    uint16_t input_length = input.length();
    for (uint16_t i = 0; i < str_length; i++)
    {
        if (i < str_length - input_length)
        {
            cout << "#";
        }
        else
        {
            cout << input.at((i + input_length) - str_length);
        }
    }
    cout << endl;
}

uint16_t get_length(string *input_arr, uint16_t input_nr)
{
    uint16_t length = 0;
    for (uint16_t i = 0; i < input_nr; i++)
    {
        if (length < input_arr[i].length())
            length = input_arr[i].length();
    }
    return length;
}

int main()
{
    uint16_t input_nr = 4;
    uint16_t str_length = 0;
    string input_arr[input_nr];
    for (uint16_t i = 0; i < input_nr; i++)
    {
        cout << "Textzeile = ? ";
        getline(cin, input_arr[i], '\n');
        if (empty_check(input_arr[i]))
        {
            input_nr = i;
            break;
        }
    }

    str_length = get_length(input_arr, input_nr);

    for (uint16_t i = 0; i < input_nr; i++)
    {
        print_right_bound(input_arr[i], str_length);
    }

    system("pause");
    return 0;
}