#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include "Shape.h"

class Circle : public Shape
{
private:
    double radius;
    int CenterX;
    int CenterY;

public:
    Circle(string name = "Circle_Default", double radius = 0, int CenterX = 0, int CenterY = 0) ;
    ~Circle();
    void SetRadius(double radius);
    void SetCenter(int CenterX, int CenterY);
    void draw() override;
    double area() override;
};





#endif