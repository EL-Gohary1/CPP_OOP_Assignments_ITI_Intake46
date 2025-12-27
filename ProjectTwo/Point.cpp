#include "Point.h"
#include "GOTO.h"
#include <iostream>
using namespace std;

Point:: Point()
{
    cout<<"Point Default Constructor"<<endl;
}

 Point::~ Point()
{
    cout<<"Point is destroyed"<<endl;
}

Point::Point(int x , int y)
{
    this->x=x;
    this->y=y;
}

int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;

}

void Point::display()
{
    gotoxy(10*x,10*y);
    cout<<"."<<endl;
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;
}