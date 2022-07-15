#include <iostream>
#include  "../include/shape.h"

void Shape::col()
{
    std::cout << "Coordinate " << coordinatesX << " : " << coordinatesY << std::endl;
    std::cout << "Color :  ";
    switch (_color) {
        case RED:
            std::cout << "RED" << std::endl;
            break;
        case BLUE:
            std::cout << "Blue" << std::endl;
            break;
        case GREEN:
            std::cout << "Green" << std::endl;
            break;
        case YELLOW:
            std::cout << "Yellow" << std::endl;
            break;
        default:
            std::cout << "None" << std::endl;
            break;
    }
}
