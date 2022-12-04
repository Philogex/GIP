#include "RGB_Color.h"

int main()
{
    RGB_Color white{};
    RGB_Color cyan{0, 255, 255};
    RGB_Color yellow{255, 255, 0};
    RGB_Color magenta{255, 0, 255};

    std::cout << "Weiss:\n";
    white.display();
    std::cout << "Tuerkis:\n";
    cyan.display();
    std::cout << "Gelb:\n";
    yellow.display();
    std::cout << "Magenta:\n";
    magenta.display();

    RGB_Color farbe1{255, 255, 128};
    std::cout << "Farbe 1:\n";
    farbe1.display();
    RGB_Color farbe2{farbe1};
    std::cout << "Farbe 2:\n";
    farbe2.display();

    std::cout << "Neu-Eingabe von Farbe 2:\n";
    if (farbe2.input_color())
    {
        std::cout << "Farbe 2 jetzt:\n";
        farbe2.display();
    }
    else
    {
        std::cout << "Falsche Eingabe!\n";
    }

    system("pause");
    return 0;
}