#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Polygon.h"

class Rectangle : public Polygon 
{
protected:
    double width;
    double height;
    
public:
    Rectangle(string name = "Rectangle_default", double width = 1, double height = 2);
    ~Rectangle();
    virtual void draw() override;
    virtual double area() override;
};



#endif