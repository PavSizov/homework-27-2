#include "../include/rectangle.h"

#include <iostream>

double Rectangle::area()
{
    return  (sideA * sideB);
}
void Rectangle::coordinatesRectangleDraw()
{

        std::cout << "coordinates of the upper-left corner of the describing rectangle - " << "("
                  << coordinatesX - sideA  << ":" << coordinatesY + sideB  << ")" << std::endl;
        std::cout << "coordinates of the lower right corner of the describing rectangle - " << "("
                  << coordinatesX + sideA  << ":" << coordinatesY - sideB  << ")" << std::endl;

}


