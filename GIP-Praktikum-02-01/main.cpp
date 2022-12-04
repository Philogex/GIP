#include <iostream>
using std::cout, std::cin, std::endl;
//endl flushes std und newline

int main() {
    double value = 0.;
    int choice;
    static double remainder_calc;
    int remove_int;

    cout << "double input (value) \n";
    cin >> value;
    cout << "int input (choice) \n[1: celsius -> fahrenheit]\n[2: meter -> fuss]\n[3: euro -> us dollar]\n";
    cin >> choice;
    
    remainder_calc = choice;
    double remainder = ((remainder_calc / 4) - int(remainder_calc / 4)) * 4;

    //int c1 = (((remainder / 2) - int(remainder / 2)) * 2) * (((remainder / 3) - int(remainder / 3)) * 3);
    //c2 = int(remainder / 2) * int(remainder / 2 - 2) * int(remainder / 2 - 2);

    int c1 = int(remainder / 2 + 0.5) * int(1 / 2 - 1.5) * int(remainder / 2 - 1.5);
    int c2 = (((remainder / 3) - int(remainder / 3)) * 3) / 2;
    int c3 = remainder / 3;

    double fh = (value * 1.8 + 32) * c1;
    double fs = (value * 3.2808) * c2;
    double us = (value * 1.2957) * c3;

    //cout << fh  << "\t" << fs  << "\t"  << us << endl;

    double output = fh + fs + us;

    cout << output << endl;

    system("pause");
    return 0;
}