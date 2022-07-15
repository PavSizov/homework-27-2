#pragma once
#include "shape.h"

class Circle : public Shape
{

    double radius{0};

public:
    Circle(double radius = 0, Color color = Shape::NONE, double x = 0, double y = 0)
            : radius(radius), Shape(x, y, color)
    {
    }
    double area();
    void coordinatesRectangleDraw ();

};