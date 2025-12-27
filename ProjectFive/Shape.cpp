#include "Shape.h"

Shape::~Shape()
{
    cout<<"Shape is destroyed"<<endl;
}

Shape::Shape(string name) : name(name)
{
    cout<<"Shape Constructor"<<endl;
    cout<<this->name<<endl;
}

void Shape::SetName(string name)
{
    this->name=name;
}