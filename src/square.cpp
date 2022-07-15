#include "../include/square.h"

#include <iostream>

double Square::area()
{
    return  (side * side);
}
void Square::coordinatesRectangleDraw()
{
    std::cout << "coordinates of the upper-left corner of the describing rectangle - " << "("
              << coordinatesX - side/2 << ":" << coordinatesY + side/2 << ")" << std::endl;
    std::cout << "coordinates of the lower right corner of the describing rectangle - " << "("
              << coordinatesX + side/2 << ":" << coordinatesY - side/2 << ")" << std::endl;
}

