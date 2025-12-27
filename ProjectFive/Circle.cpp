#include "Circle.h"

Circle::Circle(string name, double radius, int CenterX, int CenterY) : Shape(name), radius(radius), CenterX(CenterX), CenterY(CenterY)
{
    cout<<"Circle Constructor"<<endl;
}

Circle::~Circle()
{
    cout<<"Circle is destroyed"<<endl;
}

void Circle::draw()
{
    cout<<"Draw circle "<<name<<" "<<radius<<CenterX<<CenterY<<endl;
}

double Circle::area()
{
   return 3.14*radius*radius;
}
