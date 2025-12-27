#include "Square.h"

Square::Square(string name, double width) : Rectangle(name, width, width)
{
    cout<<"square constructor"<<endl;
}

Square::~Square()
{
    cout<<"square is destroyed"<<endl;
}

void Square::draw()
{
    cout<<"square draw "<<name<<" "<<width<<endl;
}

double Square::area()
{
    return Rectangle::area();
}