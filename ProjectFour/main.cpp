#include <iostream>
#include "Point.h"
#include "Rect.h"
#include "Circle.h"
/* 
    Composition (Rect/Circle fully own their Point objects and create/destroy them internally). 
    Focus on correct class design, constructors, and object lifetime to highlight the differences between association, aggregation, and composition
    Composition (Rect/Circle fully own their Point objects and create/destroy them internally)
*/
/*
    In this example, Rect and Circle classes contain Point objects as member variables.
    They are responsible for creating and destroying these Point objects.
    This demonstrates composition, where the lifetime of the Point objects is tied to the lifetime of the Rect and Circle objects.
*/
int main(){

    Rect Rectangular(Point(5,6), Point(7,8));
    Rectangular.draw();


    Circle C(Point(5,6),35);
    C.draw();

    return 0;
}