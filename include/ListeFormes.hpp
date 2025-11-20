#pragma once

#include <vector>

#include "Forme.hpp"
#include "Rectangle.hpp"

template <typename T_point, typename T_compute = T_point>
class ListeFormes : public std::vector<Forme<T_point, T_compute>>
{
private:
    
public:
    ListeFormes();
    ~ListeFormes();
    T_compute getTotalArea();
    Rectangle<T_point, T_compute> getSmallestBox();
};


template <typename T_point, typename T_compute>
ListeFormes<T_point, T_compute>::ListeFormes() 
: std::vector<Forme<T_point, T_compute>>() {}

template <typename T_point, typename T_compute>
ListeFormes<T_point, T_compute>::~ListeFormes() = default;

template <typename T_point, typename T_compute>
T_compute ListeFormes<T_point, T_compute>::getTotalArea() 
{
    T_compute total_area;

    if (typeid(T_compute) == typeid(std::string))
    {
        total_area = "";
    }
    else
    {
        total_area = 0;
    }
    
    for (auto &&forme : this->data())
    {
        total_area += forme.surface();
    }
    return total_area;
}

template <typename T_point, typename T_compute>
Rectangle<T_point, T_compute> ListeFormes<T_point, T_compute>::getSmallestBox()
{
    
}