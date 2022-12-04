#include <iostream>
#include <string>
using namespace std;

string concat(char character, int times)
{
    string output = "";
    string buffer = "";
    buffer = character;
    for (int i = times; i > 0; i--)
    {
        output.append(buffer);
    }
    return output;
}

int main()
{
    string user_input = "";
    string output_str = "";
    char buffer;
    int a = int('a');
    int A = int('A');
    int zero = int('0');
    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, user_input, '\n');

    for (uint16_t i = 0; i < user_input.length(); i++)
    {
        buffer = user_input.at(i);
        if (buffer >= a && buffer <= a + 26)
        {
            output_str += concat(buffer, 2);
        }
        else if (buffer >= A && buffer <= A + 26)
        {
            output_str += concat(buffer, 3);
        }
        else if (buffer >= zero && buffer <= zero + 9)
        {
            output_str += '.';
        }
        else if (buffer == '?' || buffer == '!')
        {
            continue;
        }
        else if (buffer == ' ')
        {
            output_str += '_';
        }
        else
        {
            output_str += buffer;
        }
    }

    cout << "Der Text nach der Umwandlung: " << output_str << endl;
    system("pause");
    return 0;
}