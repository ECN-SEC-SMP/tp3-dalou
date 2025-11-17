#pragma once

#include <iostream>

template <typename T>
class Point;

template <typename T>
std::ostream &operator<<(std::ostream &cout, Point<T> const& point);

template <typename T>
class Point
{
private:
    T x, y;

public:
    Point(T x, T y);
    Point(const Point<T> &point);
    ~Point();

    T getX() const;
    T getY() const;
    void translate(T dx, T dy);

    friend std::ostream &operator<< <T>(std::ostream &cout, const Point &point);
};

template <typename T>
Point<T>::Point(T x, T y) : x(x), y(y) {}

template <typename T>
Point<T>::Point(const Point<T> &point) : x(point.x), y(point.y) {}

template <typename T>
Point<T>::~Point() = default;

template <typename T>
T Point<T>::getX() const
{
    return this->x;
}

template <typename T>
T Point<T>::getY() const
{
    return this->y;
}

template <typename T>
void Point<T>::translate(T dx, T dy)
{
    this->x += dx;
    this->y += dy;
}

template <typename T>
std::ostream &operator<<(std::ostream &cout, Point<T> const& point)
{
    cout << "Point(x: " << point.x << ", y: " << point.y << ")";
    return cout;
}
