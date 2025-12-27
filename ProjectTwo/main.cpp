#include <iostream>
#include "Point.h"
#include "Rect.h"
#include "Circle.h"

// Association (Rect/Circle use Point objects passed from outside without owning them)
/*
    Main function to demonstrate the usage of Point, Rect, and Circle classes.
*/
int main(){

    Point p1(5,6);
    Point p2(10,12);

    Rect Rectangular;
    Rectangular.draw(&p1,&p2);

    Circle C;
    C.draw(&p1,35);
    
    return 0;
}