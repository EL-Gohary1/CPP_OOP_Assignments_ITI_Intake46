#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Colored_Rectangle.h"
#include "Color.h"
#include "Line.h"
#include <iostream>
using namespace std;
/*
Design a simple C++ program to demonstrate types of inheritance using a geometric example. 
Create a base class Shape that contains common data and functions such as draw() or area(). 
From this base class, derive classes such as Rect and Circle using single inheritance. 
Extend the design to demonstrate multilevel inheritance (for example, Shape → Polygon → Rect), hierarchical inheritance (both Rect and Circle inheriting from Shape), and introduce multiple inheritance using an additional class such as Color or Printable. 
Focus on correct use of public inheritance, constructor execution order, and clear demonstration of how each inheritance type works in C++
*/

/*
                              Shape             
                         /     |      \         -> circle is a shape
                     polygon circle   line      -> line has a color (aggregation)
                        |                       -> polygon is a shape
                    rectangle         color     -> rectangle is a polygon with 4 sides
                        |    \           /      -> The relationship between Rectangle and square is modeled using private inheritance
                        |     \         /       -> Square inherits from Rectangle only to reuse its implementation, not to represent an is-a relationship.
                        |      \       /        -> This reflects a reuse implementation rather than an is-a relationship
                     Square  Colored_Rectangle   -> Colored_Rectangle is a rectangle but reuse implementation of color                                      
                                

*/

int main(){
    
    Rectangle r1("r1",2,4);
    cout<<"r1 area="<< r1.area()<<endl;
    r1.draw();

    Square s1("s1",6);
    cout<<"s1 area="<< s1.area()<<endl;
    s1.draw();

    Colored_Rectangle cr1("cr1","blue",6,12);
    cout<<"cr1 area="<< cr1.area()<<endl;
    cr1.draw();

    Line l1;
    l1.draw();

    Color Green("Green");

    Line l2("l2",&Green,2,2,3,3);
    l2.draw();


    return 0;
}