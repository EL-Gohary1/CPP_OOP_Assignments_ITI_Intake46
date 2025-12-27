#include "Circle.h"
#include "Point.h"
#include "GOTO.h"
#include <math.h>
#include <iostream>
using namespace std;

Circle::Circle(){
        cout<<"Circle default constructor"<<endl;
}

Circle::~Circle(){
    cout<<"Circle is destroyed"<<endl;
}

void Circle::CompleteCircle(Point* Center, int radius)
{
    double theta;
    int x=10*Center->getX();
    int y=10*Center->getY();
    int px, py;
    for(theta = 0; theta<2*3.14; theta+=3.14/25)
    {
        px= x+radius*cos(theta);
        py= y+radius*sin(theta)*0.5;
        gotoxy(px,py);
        cout<<"-";
    } 

}

void Circle::draw(Point* Center, int radius)
{
    Center->display();
    cout<<"Radius"<<radius<<endl;
    CompleteCircle(Center, radius);
}
