#include <iostream>

struct T_Morse_Data
{
    char letter;
    std::string morse_code;
};

const int morse_data_len = 45;

const T_Morse_Data morse_data[] = {
    {'a', ".-"},
    {'b', "-..."},
    {'c', "-.-."},
    {'d', "-.."},
    {'e', "."},
    {'f', "..-."},
    {'g', "--."},
    {'h', "...."},
    {'i', ".."},
    {'j', ".---"},
    {'k', "-.-"},
    {'l', ".-.."},
    {'m', "--"},
    {'n', "-."},
    {'o', "---"},
    {'p', ".--."},
    {'q', "--.-"},
    {'r', ".-."},
    {'s', "..."},
    {'t', "-"},
    {'u', "..-"},
    {'v', "...-"},
    {'w', ".--"},
    {'x', "-..-"},
    {'y', "-.--"},
    {'z', "--.."},
    {'0', "-----"},
    {'1', ".----"},
    {'2', "..---"},
    {'3', "...--"},
    {'4', "....-"},
    {'5', "....."},
    {'6', "-...."},
    {'7', "--..."},
    {'8', "---.."},
    {'9', "----."},
    {' ', "///"},
    {'.', ".-.-.-"},
    {',', "--..--"},
    {':', "---..."},
    {'?', "..--.."},
    {'-', "-....-"},
    {'/', "-..-."},
    {'@', ".--.-."},
    {'=', "-...-"}};

std::string convert_to_morse(std::string input_str)
{
    char cur_char;
    int a = int('a');
    int A = int('A');
    std::string output_str = "";
    for (uint16_t i = 0; i < input_str.length(); i++)
    {
        cur_char = input_str.at(i);
        for (uint16_t n = 0; n < morse_data_len; n++)
        {
            if (cur_char == morse_data[n].letter)
            {
                output_str += morse_data[n].morse_code;
                output_str += '#';
            }
            else if (int(cur_char) >= A && int(cur_char) <= A + 26 && char((int(cur_char) - A) + a) == morse_data[n].letter)
            {
                output_str += morse_data[n].morse_code;
                output_str += '#';
            }
        }
    }
    return output_str;
}

int main()
{
    std::string input_str;
    std::cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(std::cin, input_str, '\n');

    std::cout << convert_to_morse(input_str) << std::endl;

    system("pause");
    return 0;
}