#pragma once
#include "shape.h"


class Rectangle : public Shape
{
protected:
    double sideA{0};
    double sideB{0};

public:
    Rectangle(double side_a = 0,double side_b = 0, Color color = Shape::NONE, double x = 0, double y = 0)
            : sideA(side_a),sideB(side_b), Shape(x, y, color)
    {
    }
    double area();
    void coordinatesRectangleDraw ();

};
