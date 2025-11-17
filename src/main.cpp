#include <iostream>

#include "Point.hpp"

int main(int argc, char const *argv[])
{
    Point<int> piti_point(5, 8);
    std::cout << piti_point << std::endl;

    Point<int> piti_point_le_deuxieme(piti_point);
    std::cout << piti_point_le_deuxieme << std::endl;

    piti_point_le_deuxieme.translate(-5, 2);
    std::cout << piti_point_le_deuxieme << std::endl;

    return 0;
}
