#ifndef RECTANGLE
#define RECTANGLE

#include "Square.h"

class Rectangle : public Square
{
  public:
    Rectangle(double x, double y, double side_a, double side_b, const char *name);
    Rectangle(const Rectangle &source);
    Rectangle &operator=(const Rectangle &rhs);
    ~Rectangle();
    double area();
    double perimeter();
    void display();

    double get_side_b ();
    void set_side_b (const double b);
  protected:
    double side_b;
};

#endif
