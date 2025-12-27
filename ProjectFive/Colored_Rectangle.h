#ifndef COLORED_RECTANGLE_H_INCLUDED
#define COLORED_RECTANGLE_H_INCLUDED
#include "Rectangle.h"
#include "Color.h"
#include <iostream>
using namespace std;

class Colored_Rectangle : public Rectangle, private Color
{
private:
    
public:
    Colored_Rectangle(string name="Colored_Rectangle default", string color = "Red" ,double width = 1, double height = 2);
    ~Colored_Rectangle();
};



#endif