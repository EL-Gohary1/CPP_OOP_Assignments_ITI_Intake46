#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED
#include "Shape.h"

class Polygon : public Shape
{
private:
    int sides;
    int len;
public:
    Polygon(string name = "Polygon_Default", int sides = 4);
    ~Polygon();
    virtual void draw() override;
    virtual double area() override;
};



#endif