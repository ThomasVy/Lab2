#ifndef SQUARE
#define SQUARE

#include "Shape.h"

class Square : public Shape
{
  public:
    Square(double x, double y, double side_a, const char *name);
    Square(const Square &source);
    Square &operator=(const Square &rhs);
    ~Square();

  protected:
    double area();
    double perimeter();
    void display();

  private:
    double side_a;
};

#endif