#ifndef SHAPE
#define SHAPE
#include "Point.h"
class Shape{
public:
	Shape(double x, double y, const char* name);
	Shape(const Shape& rhs);
	Shape& operator= (const Shape& rhs);
	virtual ~Shape();
	char* getName();
  virtual void display();
	virtual double area() =0;
	virtual double perimeter() = 0;

	double distance (Shape& other);
	static double distance (Shape& the_shape, Shape& other);
	void move (double dx, double dy);

	const Point& getOrigin ()const;
	const char* getShapeName ()const;
	void setOrigin(const double x, const double y);
	void setShapeName(const char* name);
protected:
	Point origin;
	char* shapeName;
};

#endif
