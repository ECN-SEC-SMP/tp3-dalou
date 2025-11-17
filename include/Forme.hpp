#pragma once

#include "Point.hpp"

template <typename T_point, typename T_compute = T_point>
class Forme;

template <typename T_point, typename T_compute = T_point>
std::ostream &operator<<(std::ostream &cout, Forme<T_point, T_compute> const& point);

template <typename T_point, typename T_compute = T_point>
class Forme
{
private:
    Point<T> center;

public:
    Forme(Point<T_point> center);
    ~Forme();
    
    Point<T_point> getPoint() const;

    virtual T_compute perimeter() = 0;
    virtual T_compute surface() = 0;

    friend std::ostream &operator<< <T_point, T_compute>(std::ostream &cout, const Forme &forme);
};


template <typename T_point, typename T_compute>
Forme<T_point,T_compute>::Forme(Point<T_point> center) : center(center) {}

template <typename T_point, typename T_compute>
Forme<T_point,T_compute>::~Forme() = default;

template <typename T_point, typename T_compute>
Point<T_point> Forme<T_point,T_compute>::getPoint() const
{
    return this->center;
}

template <typename T_point, typename T_compute>
std::ostream &operator<< <T_point, T_compute>(std::ostream &cout, const Forme<T_point,T_compute> &forme)
{
    cout << "Forme(center: " << forme.center << ")";
    return cout;
}
