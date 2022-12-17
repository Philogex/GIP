#include "MyCanvas.h"
#include "MyRectangle.h"

void MyCanvas::set(unsigned int x, unsigned int y, char c)
{
    // this->
    canvas_array_ptr[y * this->size_x + x] = c;
}

char MyCanvas::get(unsigned int x, unsigned int y) const
{
    return canvas_array_ptr[y * this->size_x + x];
}

std::string MyCanvas::to_string() const
{
    std::string output = "";
    for (uint16_t i = 0; i < this->size_x * this->size_y; i++)
    {
        if ((i % this->size_x) == 0 && i != 0)
        {
            output += '\n';
        }
        output += canvas_array_ptr[i];
    }
    output += "\n";
    return output;
}

void MyCanvas::print() const
{
    std::cout << this->to_string() << std::endl;
}

void MyCanvas::draw_rectangle(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2)
{
    uint16_t x = 0;
    uint16_t y = 0;
    for (uint16_t i = 0; i < size_x * size_y; i++)
    {
        x = i % size_x;
        if (x >= x1 && y >= y1 && x <= x2 && y <= y2)
        {
            this->canvas_array_ptr[i] = '#';
        }
        if (x == this->size_x - 1)
        {
            y += 1;
        }
    }
}