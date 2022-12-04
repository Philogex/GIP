#include <iostream>
using std::cout, std::cin, std::endl;


int main() {
    int diff, diff_hours, diff_minutes, diff_seconds, calc_seconds1, calc_seconds2, hours1, hours2, minutes1, minutes2, seconds1, seconds2 = 0;


    cout << "Bitte geben Sie die Stundenzahl der ersten Uhrzeit ein: ? ";
    cin >> hours1;
    cout << "Bitte geben Sie die Minutenzahl der ersten Uhrzeit ein: ? ";
    cin >> minutes1;
    cout << "Bitte geben Sie die Sekundenzahl der ersten Uhrzeit ein: ? ";
    cin >> seconds1;

    calc_seconds1 = seconds1 + minutes1 * 60 + hours1 * 3600;
    cout << hours1 << ":" << minutes1 << " Uhr und " << seconds1 << " Sekunden sind in Sekunden seit Mitternacht: " << calc_seconds1 << endl << endl;


    cout << "Bitte geben Sie die Stundenzahl der zweiten Uhrzeit ein: ? ";
    cin >> hours2;
    cout << "Bitte geben Sie die Minutenzahl der zweiten Uhrzeit ein: ? ";
    cin >> minutes2;
    cout << "Bitte geben Sie die Sekundenzahl der zweiten Uhrzeit ein: ? ";
    cin >> seconds2;

    calc_seconds2 = seconds2 + minutes2 * 60 + hours2 * 3600;
    cout << hours2 << ":" << minutes2 << " Uhr und " << seconds2 << " Sekunden sind in Sekunden seit Mitternacht: " << calc_seconds2 << endl << endl;


    diff = calc_seconds2 - calc_seconds1;
    diff_seconds = (diff % 3600) % 60;
    diff_minutes = ((diff - diff_seconds) % 3600) / 60;
    diff_hours = (diff - diff_seconds - diff_minutes * 60) / 3600;
    
    cout << "Die Differenz zwischen den beiden Uhrzeiten betraegt:\n" << diff_hours << " Stunden, " << diff_minutes << " Minuten und " << diff_seconds << " Sekunden." << endl;


    system("pause");
    return 0;
}