#include "Line.h"

Line::Line(string name, Color* color,int pointX1, int pointY1, int pointX2, int pointY2) : Shape(name), color(color), pointX1(pointX1), pointY1(pointY1), pointX2(pointX2), pointY2(pointY2)
{
    cout<<"Line constructor"<<endl;
}

Line::~Line()
{
    cout<<"Line is destroyed"<<endl;
}

void Line::SetTwoPoints(int pointX1, int pointY1, int pointX2, int pointY2)
{
    this->pointX1=pointX1;
    this->pointY1=pointY1;
    this->pointX2=pointX2;
    this->pointY2=pointY2;
}

void Line::EditColor(Color* color)
{
    this->color=color;
}

void Line::draw()
{
    cout<<"line with color "<<name<<" "<<color->getColor()<<" "<<pointX1<<pointX2<<pointY1<<pointY2<<endl;
}

double Line::area()
{
   return 0;
}
