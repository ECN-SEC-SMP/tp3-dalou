#pragma once

#include "Rectangle.hpp"

template <typename T, typename T_point = T, typename T_compute = T_point>
class Square;

template <typename T, typename T_point = T, typename T_compute = T_point>
std::ostream &operator<<(std::ostream &cout, Square<T, T_point, T_compute> const &square);

template <typename T, typename T_point, typename T_compute>
class Square : public Rectangle<T, T_point, T_compute>
{
public:
    Square(T size, T_point x, T_point y);
    ~Square();

    friend std::ostream &operator<< <T, T_point, T_compute>(std::ostream &cout, Square const &square);
};

template <typename T, typename T_point, typename T_compute>
Square<T, T_point, T_compute>::Square(T size, T_point x, T_point y)
: Rectangle<T, T_point, T_compute>(size, size, x, y) {}

template <typename T, typename T_point, typename T_compute>
Square<T, T_point, T_compute>::~Square() {}

template <typename T, typename T_point, typename T_compute>
std::ostream &operator<<(std::ostream &cout, Square<T, T_point, T_compute> const &square)
{
    cout << "Square(width: " << square.width << ", center: " << square.center << ")";
    return cout;
}