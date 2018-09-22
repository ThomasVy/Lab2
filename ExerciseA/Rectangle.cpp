#include "Rectangle.h"
#include <iostream>
#include <math.h>

using namespace std;

Rectangle::Rectangle(double x, double y, double side_a, double side_b, const char *name) : Square(x, y, side_a, name), side_b(side_b)
{
}

Rectangle::Rectangle(const Rectangle &source) : Square(source), side_b(source.side_b)
{
}

Rectangle &Rectangle::operator=(const Rectangle &rhs)
{
    if (this != &rhs)
    {
        Square::operator=(rhs);
        side_b = rhs.side_b;
    }
    return *this;
}

Rectangle::~Rectangle()
{
}

double Rectangle::area()
{
    return side_a * side_b;
}

double Rectangle::perimeter()
{
    return 2 * side_a + 2 * side_b;
}

void Rectangle::display()
{
    Square::display();
    cout << "Side b: " << side_b << endl;
}

double Rectangle::get_side_b ()
{
  return side_b;
}

void Rectangle::set_side_b (const double b)
{
  side_b = b;
}
