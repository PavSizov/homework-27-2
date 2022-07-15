#include "../include/triagle.h"
#include <cmath>
#include <iostream>

double Triangle::area()
{
    return  (side * side * std::sqrt(3));
}
void Triangle::coordinatesRectangleDraw()
{
    std::cout << "coordinates of the upper-left corner of the describing rectangle - " << "("
              << coordinatesX - side/2 << ":" << coordinatesY + side/2 << ")" << std::endl;
    std::cout << "coordinates of the lower right corner of the describing rectangle - " << "("
              << coordinatesX + side/2 << ":" << coordinatesY - side/2 << ")" << std::endl;
}

