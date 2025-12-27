#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class  Point
{
    private:
        int x;
        int y;
    public:
        Point();
        Point(int x, int y);
        int getX();
        int getY();
        void display();
        ~ Point();
};



#endif