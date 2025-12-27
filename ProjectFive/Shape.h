#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
#include <iostream>
using namespace std;

class Shape
{
protected:  //wrong
    string name;
public:
    Shape(string name = "shape");
    ~Shape();
    void SetName(string name);
    virtual void draw()=0;
    virtual double area()=0;

};




#endif