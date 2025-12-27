#include "Rectangle.h"

Rectangle::Rectangle(string name, double width, double height) : Polygon(name,4), width(width), height(height)
{
    cout<<"Rectangle constructor"<<endl;

}


Rectangle::~Rectangle()
{
    cout<<"Rectangle is destroyed"<<endl;
}

void Rectangle::draw()
{
    cout<<"Draw Rectangle "<<name<<" "<<width<<" "<<height<<endl;

}

double Rectangle::area()
{
    return width*height;
}