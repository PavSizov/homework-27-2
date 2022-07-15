#pragma once

class Shape
{
public:
    enum Color
    {
        NONE,
        RED = 31,
        BLUE = 34,
        GREEN = 32,
        YELLOW = 33
    };

protected:
    double coordinatesX{0};
    double coordinatesY{0};
    Color _color{Shape::NONE};

public:
    Shape(double x = 0, double y = 0, Color color = Shape::NONE)
            : coordinatesX(x), coordinatesY(y), _color(color)
    {

    }
    void col ();

};


