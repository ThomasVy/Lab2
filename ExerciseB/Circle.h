#ifndef CIRCLE
#define CIRCLE
#include "Shape.h"
class Circle: public Shape{
private:
	double radius;
public:
	Circle(double x, double y, double radius, const char* name);
	~Circle();
	Circle(const Circle& rhs);
	Circle& operator=(const Circle& rhs);
	double area()const;
	double perimeter()const;
	double get_radius();
	void set_radius(double r);
	void display()const;
};
#endif