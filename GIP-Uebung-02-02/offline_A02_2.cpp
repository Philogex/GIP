#include <iostream>
using std::cout, std::cin, std::endl;


int main() {
    int input1, input2, temp_swap = 0;
    cout << "Bitte geben Sie den ganzzahligen Wert der ersten Variable ein: ? ";
    cin >> input1;
    cout << "Bitte geben Sie den ganzzahligen Wert der zweiten Variable ein: ? ";
    cin >> input2;

    temp_swap = input1;
    input1 = input2;
    input2 = temp_swap;

    cout << "Nach dem Tausch:\nWert der ersten Variable: " << input1 << "\nWert der zweiten Variable: " << input2 << endl;
    system("pause");

    return 0;
}