#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include "Point.h"

class Circle{
    private:
        void CompleteCircle(Point* Center, int radius);
    public:
    Circle(/* args */);
    ~Circle();
    void draw(Point* Center, int radius); 

};

#endif
