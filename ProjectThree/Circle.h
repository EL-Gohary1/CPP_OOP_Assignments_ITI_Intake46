#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include "Point.h"

class Circle{
    private:
        Point* Center;
        int radius;
        void CompleteCircle();
        
    public:
        Circle(/* args */);
        ~Circle();
        Circle(Point* Center, int radius);
        void draw(); 

};

#endif
