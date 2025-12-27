#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED
#include "Shape.h"
#include "Color.h"
extern Color black;

class Line : public Shape
{
private:
    int pointX1;
    int pointY1;
    int pointX2;
    int pointY2;
    Color* color; 
    /*Most suitable relationship: HAS-A (Aggregation) A Line has a Color, 
      but The same color can be shared by multiple shapes 
      Deleting a Line does not delete the Color; the color can still exist independently
    */

public:
    Line(string name = "Line_Default", Color* color = &black ,int pointX1=0, int pointY1=0, int pointX2=1, int pointY2=1); 
    ~Line();
    void SetTwoPoints(int pointX1, int pointY1, int pointX2, int pointY2);
    void EditColor(Color* color);
    void draw() override;
    double area() override;

};




#endif