#include "Circle.h"
#include "GOTO.h"
#include <math.h>
#include <iostream>
using namespace std;


Circle::Circle()
{
    cout<<"Circle default constructor"<<endl;
    Center=Point(5,6);
    radius=35;
}

Circle::~Circle()
{
    cout<<"Circle is destroyed"<<endl;
}

Circle::Circle(Point Center, int radius)
{
    cout<<"Circle constructor"<<endl;
    this->Center=Center;
    this->radius=radius;
}

void Circle::CompleteCircle()
{
    double theta;
    int x=10*Center.getX();
    int y=10*Center.getY();
    int px, py;
    for(theta = 0; theta<2*3.14; theta+=3.14/25)
    {
        px= x+radius*cos(theta);
        py= y+radius*sin(theta)*0.5;
        gotoxy(px,py);
        cout<<"-";
    } 

}


void Circle::draw()
{
    Center.display();
    cout<<"Radius"<<radius<<endl;
    CompleteCircle();
}


