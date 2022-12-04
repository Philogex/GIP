#include <iostream>
using std::cout, std::cin, std::endl;


int main() {
    cout << "Bitte geben Sie die Seitenlaenge ein (in cm): ? ";
    double input = 0.;
    cin >> input;
    double umfang = input * 4;
    double flaeche = input * input;

    cout << "Der Umfang des Quadrats betraegt (in cm): " << umfang << endl;
    cout << "Die Flaeche des Quadrats betraegt (in cm*cm): " << flaeche << endl;
    system("pause");
    return 0;
}