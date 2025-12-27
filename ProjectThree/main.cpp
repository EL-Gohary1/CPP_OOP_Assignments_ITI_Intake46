#include <iostream>
#include "Point.h"
#include "Rect.h"
#include "Circle.h"

//Aggregation (Rect/Circle have Point objects as data members but the points can exist independently
/*
    In this example, we have three classes: Point, Rect, and Circle.
    The Point class represents a point in 2D space with x and y coordinates.
    The Rect class represents a rectangle defined by two Point objects (p1 and p2).
    The Circle class represents a circle defined by a center Point object and a radius.
    Both Rect and Circle classes use Point objects as data members, demonstrating aggregation.
*/
int main(){
    Point p1(5,6);
    Point p2(7,8);

    Rect Rectangular(&p1,&p2);
    Rectangular.draw();

    
    Circle C(&p1,35);
    C.draw();

    return 0;
}