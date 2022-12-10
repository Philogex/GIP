#pragma once
#include "MyCanvas.h"

class MyCanvas;

class MyRectangle
{
    friend MyCanvas;

public:
    MyRectangle(MyCanvas &canvas, unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2) : x1{x1}, y1{y1}, x2{x2}, y2{y2}, canvas_ptr{&canvas} {}

    unsigned int get_x1() const { return x1; }
    unsigned int get_y1() const { return y1; }
    unsigned int get_x2() const { return x2; }
    unsigned int get_y2() const { return y2; }
    MyCanvas *get_canvas_ptr() const { return canvas_ptr; }

    void set_x1(unsigned int x1) { this->x1 = x1; }
    void set_y1(unsigned int y1) { this->y1 = y1; }
    void set_x2(unsigned int x2) { this->x2 = x2; }
    void set_y2(unsigned int y2) { this->y2 = y2; }
    void set_canvas_ptr(MyCanvas *canvas_ptr) { this->canvas_ptr = canvas_ptr; }

    void draw() { canvas_ptr->draw_rectangle(x1, y1, x2, y2); };

private:
    unsigned int x1{0}, y1{0};
    unsigned int x2{0}, y2{0};
    MyCanvas *canvas_ptr{nullptr};
};