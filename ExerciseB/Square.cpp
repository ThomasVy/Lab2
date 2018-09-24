#include "Square.h"
#include <iostream>
#include <math.h>

using namespace std;

// Constructor
Square::Square(double x, double y, double side_a, const char *name) : Shape(x, y, name), side_a(side_a)
{
}

Square::Square(const Square &source) : Shape(source), side_a(source.side_a)
{
}

Square &Square::operator=(const Square &rhs)
{
    Shape::operator=(rhs);
    side_a = rhs.side_a;
    return *this;
}

Square::~Square()
{
}

double Square::area()const
{
    return side_a * side_a;
}

double Square::perimeter()const
{
    return 4 * side_a;
}

void Square::display()const
{
    Shape::display();
    cout << "Side a: " << side_a << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}

void Square::set_side_a(const double a)
{
  side_a = a;
}

double Square::get_side_a()
{
  return side_a;
}
