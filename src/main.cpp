#include <iostream>

#include "Point.hpp"
#include "Rectangle.hpp"

int main(int argc, char const *argv[])
{
    /* class Point */
    Point<int> piti_point(5, 8);
    std::cout << piti_point << std::endl;

    Point<int> piti_point_le_deuxieme(piti_point);
    std::cout << piti_point_le_deuxieme << std::endl;

    piti_point_le_deuxieme.translate(-5, 2);
    std::cout << piti_point_le_deuxieme << std::endl;


    /* class Rectangle */
    Rectangle<int, int> piti_rectangle(15, 20, 0, 0);
    std::cout << piti_rectangle << std::endl;

    Rectangle<int, int> piti_rectangle_le_deuxieme(piti_rectangle);
    std::cout << piti_rectangle_le_deuxieme << std::endl;

    std::cout << "Perimeter du piti rectangle: " << piti_rectangle.perimeter() << std::endl;
    std::cout << "Surface du piti rectangle le deuxieme: " << piti_rectangle_le_deuxieme.surface() << std::endl;

    return 0;
}
