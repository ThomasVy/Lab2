#include "Square.h"
#include <iostream>
#include <math.h>

using namespace std;

// Constructor
Square::Square(double x, double y, double side_a, const char *name) : Shape(x, y, name)
{
    side_a = side_a;
}

Square::Square(const Square &source) : Shape(source)
{
}

Square &Square::operator=(const Square &rhs)
{
    Shape::operator=(rhs);
    return *this;
}

Square::~Square()
{
    Shape::~Shape();
}

double Square::area()
{
    return side_a * side_a;
}

double Square::perimeter()
{
    return 4 * side_a;
}

void Square::display()
{
    Shape::display();
    cout << "Side a: " << side_a << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
