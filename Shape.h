#ifndef SHAPE
#define SHAPE
#include "Point.h"
class Shape{
public:
	Shape(double x, double y, const char* name);
	Shape(const Shape& rhs);
	Shape& operator= (const Shape& rhs);
	virtual ~Shape();
	const Point& getOrigin ();
	char* getName();
  virtual	void display();
	double distance (Shape& other);
	static double distance (Shape& the_shape, Shape& other);
	void move (double dx, double dy);
private:
	Point origin;
	char* shapeName;
};

#endif
