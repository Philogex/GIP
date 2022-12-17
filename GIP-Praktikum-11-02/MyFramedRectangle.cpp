#include "MyFramedRectangle.h"

void MyFramedRectangle::draw()
{
    MyRectangle::draw();
    uint16_t x = 0;
    uint16_t y = 0;
    unsigned int s_x = canvas_ptr->get_size_x();
    unsigned int s_y = canvas_ptr->get_size_y();
    char *arr_ptr = canvas_ptr->get_canvas_array_ptr();
    for (uint16_t i = 0; i < s_x * s_y; i++)
    {
        x = i % s_x;
        if ((x == x1 && (y >= y1 && y <= y2)) || (x == x2 && (y >= y1 && y <= y2)) || (y == y1 && (x >= x1 && x <= x2)) || (y == y2 && (x >= x1 && x <= x2))) //??
        {
            arr_ptr[i] = '+';
        }
        if (x == s_x - 1)
        {
            y += 1;
        }
    }
}