#pragma once
#include "shape.h"


class Square : public Shape
{
protected:
    double side{0};

public:
    Square(double side = 0, Color color = Shape::NONE, double x = 0, double y = 0)
            : side(side), Shape(x, y, color)
    {
    }
    double area();
    void coordinatesRectangleDraw ();

};
