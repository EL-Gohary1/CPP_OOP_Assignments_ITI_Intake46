#ifndef RECT_H_INCLUDED
#define RECT_H_INCLUDED
#include "Point.h"

class Rect
{
private:
    Point p1;
    Point p2;
    void CompleteRect();
public:
    Rect(/* args */);
    ~Rect();
    Rect(Point p1, Point p2);
    void draw(); 
};




#endif