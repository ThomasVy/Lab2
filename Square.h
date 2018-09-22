#ifndef SQUARE
#define SQUARE

#include "Shape.h"

class Square : public Shape
{
  public:
    Square(double x, double y, double side_a, const char *name);
    Square(const Square &source);
    Square& operator=(const Square &rhs);
    ~Square();
    void display();
    double area();
    double perimeter();

    void set_side_a(const double a);
    double get_side_a();

  protected:
    double side_a;
};

#endif
