#include <iostream>
using std::cout, std::cin, std::endl;


int main() {
    char char_char;


    cout << "Bitte geben Sie den Kleinbuchstaben ein: ? ";
    cin >> char_char;
    cout << "Der entsprechende Grossbuchstabe lautet: " << char(int(char_char) - 32) << endl;

    system("pause");
    return 0;
}