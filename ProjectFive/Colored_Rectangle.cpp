#include "Colored_Rectangle.h"


Colored_Rectangle::Colored_Rectangle(string name, string color, double width, double height) : Color(color), Rectangle(name, width, height)
{
    cout<<"Colored_Rectangle constructor"<<endl;
}

Colored_Rectangle::~Colored_Rectangle()
{
    cout<<"Colored_Rectangle is destroyed"<<endl;
}