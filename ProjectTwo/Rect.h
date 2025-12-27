#ifndef RECT_H_INCLUDED
#define RECT_H_INCLUDED
#include "Point.h"

class Rect
{
private:
    void CompleteRect(Point* p1, Point* p2);
public:
    Rect(/* args */);
    ~Rect();
    void draw(Point* p1, Point* p2); 
};




#endif