#include <iostream>
using std::cout, std::cin, std::endl;

int main() {
    char input;
    int a = int('a') - 1;

    cout << "buchstabe: \n";
    cin >> input;
    cout << int(input) - a << endl;
    system("pause");
}