#pragma once

#include "Forme.hpp"

template <typename T, typename T_point = T, typename T_compute = T_point>
class Rectangle;

template <typename T, typename T_point = T, typename T_compute = T_point>
std::ostream &operator<<(std::ostream &cout, Rectangle<T, T_point, T_compute> const& rectangle);

template <typename T, typename T_point, typename T_compute>
class Rectangle : Forme<T_point, T_compute>
{
private:
    T width, height;
public:
    Rectangle(T width, T height, T_point x, T_point y);
    ~Rectangle();

    T getWidth() const;
    T getHeigth() const;

    virtual T_compute perimeter();
    virtual T_compute surface();

    friend std::ostream &operator<< <T_point, T_compute>(std::ostream &cout, const Rectangle &rectangle);
};

template <typename T, typename T_point, typename T_compute>
Rectangle<T, T_point, T_compute>::Rectangle(T width, T height, T_point x, T_point y)
: width(width), height(height), Point<T_point>(x, y) {}

template <typename T, typename T_point, typename T_compute>
T Rectangle<T, T_point, T_compute>::getWidth() const
{
    return this->width;
}

template <typename T, typename T_point, typename T_compute>
T Rectangle<T, T_point, T_compute>::getHeigth() const
{
    return this->height;
}

template <typename T, typename T_point, typename T_compute>
T_compute Rectangle<T, T_point, T_compute>::perimeter()
{
    return static_cast<T_compute> (2 * this->width + 2 * this->height);
}

template <typename T, typename T_point, typename T_compute>
T_compute Rectangle<T, T_point, T_compute>::surface()
{
    return static_cast<T_compute> (this->width * this->height);
}

template <typename T, typename T_point, typename T_compute>
std::ostream &operator<<(std::ostream &cout, Rectangle<T, T_point, T_compute> const& rectangle)
{
    cout << "Rectangle(width: " << rectangle.width << ", height: " << rectangle.height << ", center: " << rectangle.center << ")";
    return cout;
}

