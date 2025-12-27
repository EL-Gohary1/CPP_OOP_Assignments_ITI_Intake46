#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED
#include "Rectangle.h"

class Square : protected Rectangle
{
private:
    
public:
    Square(string name, double width);
    ~Square();
    void draw() override;
    double area() override;

};

#endif