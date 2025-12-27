#include "Rect.h"
#include "GOTO.h"
#include <algorithm>
#include <iostream>
using namespace std;

Rect::Rect(/* args */)
{
    cout<<"Rect default Constructor"<<endl;
}

Rect::~Rect()
{
    cout<<"Rect is destroyed"<<endl;
}

Rect::Rect(Point* p1, Point* p2)
{
    this->p1=p1;
    this->p2=p2;
    cout<<"Rect Overloaded Constructor"<<endl;
}

void Rect::CompleteRect()
{
    int x1 = 10 * min(p1->getX(), p2->getX());
    int x2 = 10 * max(p1->getX(), p2->getX());
    int y1 = 10 * min(p1->getY(), p2->getY());
    int y2 = 10 * max(p1->getY(), p2->getY());
    for(int y = y1; y <= y2; y++){
        // from small y to big while small x const
        gotoxy(x1, y);
        cout << ".";
    }
    for(int x = x1; x <= x2; x++){
        // from small x to big while small y const
        gotoxy(x, y1);
        cout << ".";
    }
    for(int y = y1; y <= y2; y++){
        // from small y to big while big x const
        gotoxy(x2, y);
        cout << ".";
    }
    for(int x = x1; x <= x2; x++){
        // from small x to big while big y const
        gotoxy(x, y2);
        cout << ".";
    }
}

void Rect::draw()
{
    p1->display();
    p2->display();
    CompleteRect();
}
