# CPP - TP3
Louis Vaillant & Damien Bureau


## 1. CRÉATION D’UNE CLASSE POINT TEMPLATE

```C
void main()
{
    Point<int> piti_point(5, 8);
    std::cout << piti_point << std::endl;

    Point<int> piti_point_le_deuxieme(piti_point);
    std::cout << piti_point_le_deuxieme << std::endl;

    piti_point_le_deuxieme.translate(-5, 2);
    std::cout << piti_point_le_deuxieme << std::endl;
}
```

> Outputs:
```
Point(x: 5, y: 8)
Point(x: 5, y: 8)
Point(x: 0, y: 10)
```


## 3. FORMES GÉOMÉOTRIQUES CONCRèTES

```C
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
    Rectangle<int, int, int> piti_rectangle(15, 20);
    std::cout << piti_rectangle << std::endl;

    Rectangle<int, int, int> piti_rectangle_le_deuxieme(piti_rectangle);
    std::cout << piti_rectangle_le_deuxieme << std::endl;

    std::cout << "Perimeter du piti rectangle: " << piti_rectangle.perimeter() << std::endl;
    std::cout << "Surface du piti rectangle le deuxieme: " << piti_rectangle_le_deuxieme.surface() << std::endl;

    return 0;
}
```

> Outputs:
```
Rectangle(width: 15, height: 20, center: Point(x: 0, y: 0))
Rectangle(width: 15, height: 20, center: Point(x: 0, y: 0))
Perimeter du piti rectangle: 70
Surface du piti rectangle le deuxieme: 300
```