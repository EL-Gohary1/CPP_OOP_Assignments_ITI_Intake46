#include "Color.h"

Color black;


Color::~Color()
{
}

Color::Color(string color_name) : color_name(color_name)
{
    cout<<"Color constructor "<<color_name<<endl;
}

string Color::getColor()
{
    return color_name;
}