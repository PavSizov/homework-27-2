#include <iostream>
#include "../include/shape.h"
#include "../include/triagle.h"
#include "../include/circle.h"
#include "../include/square.h"
#include "../include/rectangle.h"


int main()
{
    std::string answer;

        std::cout<<"Enter name shape circle,square, triangle or rectangle: "<< std::endl;
        std::cin>>answer;
        while (answer != "circle" && answer != "square" && answer != "triangle" && answer != "rectangle")
        {
            std::cout<<"Error. Enter name shape circle,square, triangle or rectangle: "<< std::endl;
            std::cin>>answer;
        }
        if(answer == "circle")
        {
            double radius;
            std::cout<<"Enter radius: " << std::endl;
            std::cin>>radius;

            Circle* circle = new Circle(radius, Shape::RED, 5, 14);
            std::cout << "figure : circle"<< std::endl;
            std::cout << "radius :" << radius<< std::endl;
            circle->col();
            std::cout << "area :"<< circle->area() << std::endl;

            circle->coordinatesRectangleDraw();
            delete circle;
        }
        else if(answer == "square")
        {
            double side;
            std::cout<<"Enter side: "<<std::endl;
            std::cin>>side;
            Square* square = new Square(side, Shape::GREEN, 5, 4);
            std::cout << "figure : square"<< std::endl;
            std::cout << "side :" << side << std::endl;
            square->col();
            std::cout << "area :"<< square->area() << std::endl;
            square->coordinatesRectangleDraw();
            delete square;
        }
        else if(answer == "triangle")
        {
            double side;
            std::cout<<"Enter side: ";
            std::cin>>side;
            Triangle* triangle = new Triangle(side, Shape::BLUE, 8, 5);
            std::cout << "figure : triangle"<< std::endl;
            std::cout << "side :" << side << std::endl;
            triangle->col();
            std::cout << "area :"<< triangle->area()<< std::endl;
            triangle->coordinatesRectangleDraw();
            delete triangle;

        }
        else if(answer == "rectangle")
        {
            double sideA, sideB;
            std::cout<<"Enter side A and side B: ";
            std::cin>>sideA>>sideB;
            Rectangle* rectangle = new Rectangle(sideA, sideB, Shape::YELLOW, 1, 2.3);
            std::cout << "figure : rectangle"<< std::endl;
            std::cout << "sideA :" << sideA << std::endl;
            std::cout << "sideB :" << sideB << std::endl;
            rectangle->col();
            std::cout << "area :"<< rectangle->area() << std::endl;
            rectangle->coordinatesRectangleDraw();

            delete rectangle;

        }


    return 0;
}