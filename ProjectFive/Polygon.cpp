#include "Polygon.h"

Polygon::Polygon(string name, int sides) : Shape(name), sides(sides)
{
    cout<<"Polygon constructor"<<endl;
}

Polygon::~Polygon()
{
    cout<<"Polygon is destroyed"<<endl;
}

void Polygon::draw()
{
    cout<<"Draw Polygon "<<name<<" "<<sides<<endl;
}

double Polygon::area()
{
    return (sides * len * len) / (4);
}

