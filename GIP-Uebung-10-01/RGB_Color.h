#pragma once
#include <iostream>
#include <string>

int pow(int base, int exponent);
int read_number(std::string number_str);
bool validate_color(int value);

class RGB_Color
{
public:
    RGB_Color(int r = 255, int g = 255, int b = 255) : red{r}, green{g}, blue{b} {}

    void set_color(int r, int g, int b)
    {
        set_red(r);
        set_green(g);
        set_blue(b);
    }

    int get_red() const { return red; }
    int get_green() const { return green; }
    int get_blue() const { return blue; }

    void set_red(int value)
    {
        if (validate_color(value))
            red = value;
    }
    void set_green(int value)
    {
        if (validate_color(value))
            green = value;
    }
    void set_blue(int value)
    {
        if (validate_color(value))
            blue = value;
    }

    void display()
    {
        std::cout << "rot: " << red << " gruen: " << green << " blau: " << blue << std::endl;
    }

    bool input_color();

private:
    int red,
        green,
        blue;
};