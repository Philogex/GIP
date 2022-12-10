#include "MyCanvas.h"

void MyCanvas::set(unsigned int x, unsigned int y, char c)
{
    // this->
    canvas_array_ptr[y * size_x + x] = c;
}

char MyCanvas::get(unsigned int x, unsigned int y) const
{
    return canvas_array_ptr[y * size_x + x];
}

std::string MyCanvas::to_string() const
{
    std::string output = "";
    for (uint16_t i = 0; i < size_x * size_y; i++)
    {
        if ((i % size_x) == 0 && i != 0)
        {
            output += '\n';
        }
        output += canvas_array_ptr[i];
    }
    output += "\n\0";
    return output;
}

void MyCanvas::print() const
{
    std::cout << this->to_string() << std::endl;
}