#include <iostream>
#include <math.h>
using namespace std;

class Polygon
{
    protected:
    double dimension;

    public:
    virtual double area() = 0;
};

class Square : public Polygon
{
    public:

    Square(double side)
    {
        dimension = side;
    }

    double area()
    {
        return dimension * dimension;
    }
};

class Circle : public Polygon
{
    public:

    Circle(double side)
    {
        dimension = side;
    }

    double area()
    {
        return 3.14 * dimension * dimension;
    }
};

int main()
{
    Square s1(2);
    cout << "Area: "<< s1.area() << endl;

    Circle c1(1);
    cout << "Area: " << c1.area() << endl;

    return 0;
}