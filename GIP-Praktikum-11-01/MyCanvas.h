#pragma once

#include <iostream>
#include <string>

#include "gip_mini_catch_heap_alloc.h"

class MyCanvas
{
public:
    // MyCanvas(MyCanvas *ptr) : size_x{ptr->size_x}, size_y{ptr->size_y}, canvas_array_ptr{ptr->canvas_array_ptr} {}
    MyCanvas(unsigned int x = 0, unsigned int y = 0, char *canvas = nullptr) : size_x{x}, size_y{y}, canvas_array_ptr{new char[x * y]}
    {
        init(canvas_array_ptr, x, y);
    }

    ~MyCanvas()
    {
        delete canvas_array_ptr;
    }

    MyCanvas(const MyCanvas &orig_canvas) : size_x{orig_canvas.size_x}, size_y{orig_canvas.size_y}, canvas_array_ptr{new char[size_x * size_y]}
    {
        for (uint16_t i = 0; i < size_x * size_y; i++)
        {
            canvas_array_ptr[i] = orig_canvas.canvas_array_ptr[i];
        }
    }

    MyCanvas &operator=(const MyCanvas &orig_canvas)
    {
        delete canvas_array_ptr;
        size_x = orig_canvas.size_x;
        size_y = orig_canvas.size_y;
        canvas_array_ptr = new char[size_x * size_y];
        for (uint16_t i = 0; i < size_x * size_y; i++)
        {
            canvas_array_ptr[i] = orig_canvas.canvas_array_ptr[i];
        }
        return *this;
    }

    unsigned int get_size_x() const { return size_x; }
    unsigned int get_size_y() const { return size_y; }
    char *get_canvas_array_ptr() const { return canvas_array_ptr; }

    void set_size_x(unsigned int new_size_x) { size_x = new_size_x; }
    void set_size_y(unsigned int new_size_y) { size_y = new_size_y; }
    void set_canvas_array_ptr(char *new_canvas_array_ptr) { canvas_array_ptr = new_canvas_array_ptr; }

    void set(unsigned int x, unsigned int y, char c);
    char get(unsigned int x, unsigned int y) const;
    std::string to_string() const;
    void print() const;
    void draw_rectangle(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2);

protected:
    unsigned int size_x, size_y;
    char *canvas_array_ptr;

    void init(char *&canvas, unsigned int x, unsigned int y)
    {
        for (uint16_t i = 0; i < x * y; i++)
        {
            canvas[i] = '.';
        }
    }
};