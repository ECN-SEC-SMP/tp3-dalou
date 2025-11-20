#pragma once

#include "Forme.hpp"

template <typename T_point, typename T_compute = T_point>
class Rectangle;

template <typename T_point, typename T_compute = T_point>
std::ostream &operator<<(std::ostream &cout, Rectangle<T_point, T_compute> const& rectangle);

template <typename T_point, typename T_compute>
class Rectangle : public Forme<T_point, T_compute>
{
private:
    T_compute width, height;
public:
    Rectangle(T_compute width, T_compute height, T_point x, T_point y);
    ~Rectangle();

    T_compute getWidth() const;
    T_compute getHeight() const;

    virtual T_compute perimeter();
    virtual T_compute surface();

    friend std::ostream &operator<< <T_point, T_compute>(std::ostream &cout, const Rectangle &rectangle);
};

template <typename T_point, typename T_compute>
Rectangle<T_point, T_compute>::Rectangle(T_compute width, T_compute height, T_point x, T_point y)
: Forme<T_point, T_compute>(Point<T_point>(x, y)), width(width), height(height) {}

template <typename T_point, typename T_compute>
Rectangle<T_point, T_compute>::~Rectangle() {}

template <typename T_point, typename T_compute>
T_compute Rectangle<T_point, T_compute>::getWidth() const
{
    return this->width;
}

template <typename T_point, typename T_compute>
T_compute Rectangle<T_point, T_compute>::getHeight() const
{
    return this->height;
}

template <typename T_point, typename T_compute>
T_compute Rectangle<T_point, T_compute>::perimeter()
{
    return static_cast<T_compute> (2 * this->width + 2 * this->height);
}

template <typename T_point, typename T_compute>
T_compute Rectangle<T_point, T_compute>::surface()
{
    return static_cast<T_compute> (this->width * this->height);
}

template <typename T_point, typename T_compute>
std::ostream &operator<<(std::ostream &cout, Rectangle<T_point, T_compute> const& rectangle)
{
    cout << "Rectangle(width: " << rectangle.width << ", height: " << rectangle.height << ", center: " << rectangle.center << ")";
    return cout;
}

