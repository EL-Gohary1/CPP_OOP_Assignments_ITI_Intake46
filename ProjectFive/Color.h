#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED
#include <iostream>
using namespace std;

class Color
{
protected:
    string color_name;
public:
    Color(string color_name = "Black");
    ~Color();
    string getColor();
};





#endif