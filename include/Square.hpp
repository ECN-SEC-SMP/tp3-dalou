#pragma once

#include "Rectangle.hpp"

template <typename T_point, typename T_compute = T_point>
class Square;

template <typename T_point, typename T_compute = T_point>
std::ostream &operator<<(std::ostream &cout, Square<T_point, T_compute> const &square);

template <typename T_point, typename T_compute>
class Square : public Rectangle<T_point, T_compute>
{
public:
    Square(T_compute size, T_point x, T_point y);
    ~Square();

    friend std::ostream &operator<< <T_point, T_compute>(std::ostream &cout, Square const &square);
};

template <typename T_point, typename T_compute>
Square<T_point, T_compute>::Square(T_compute size, T_point x, T_point y)
: Rectangle<T_point, T_compute>(size, size, x, y) {}

template <typename T_point, typename T_compute>
Square<T_point, T_compute>::~Square() {}

template <typename T_point, typename T_compute>
std::ostream &operator<<(std::ostream &cout, Square<T_point, T_compute> const &square)
{
    cout << "Square(width: " << square.width << ", center: " << square.center << ")";
    return cout;
}