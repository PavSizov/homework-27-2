#include "../include/circle.h"
#include <cmath>
#include <iostream>


double Circle::area()
{
    return  (atan(1) * 4 * radius);
}
void Circle::coordinatesRectangleDraw()
{
    std::cout << "coordinates of the upper-left corner of the describing rectangle - " << "("
              << coordinatesX - radius << ":" << coordinatesY + radius << ")" << std::endl;
    std::cout << "coordinates of the lower right corner of the describing rectangle - " << "("
              << coordinatesX + radius << ":" << coordinatesY - radius << ")" << std::endl;
}

