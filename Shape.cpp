#include "Shape.h"
#include <string.h>
#include <iostream>
using namespace std;

Shape::Shape(double x, double y, const char* name): origin(x, y)
{
	shapeName = new char[(int)strlen(name)];
	strcpy(shapeName, name);
}
Shape::Shape(const Shape& rhs): origin(rhs.origin)
{
	shapeName = new char[(int)strlen(rhs.shapeName)];
	strcpy(shapeName, rhs.shapeName);
}
Shape& Shape::operator= (const Shape& rhs)
{
	if(this != &rhs)
	{
		delete[] shapeName;
		shapeName = new char[(int)strlen(rhs.shapeName)];
		strcpy(shapeName, rhs.shapeName );
		origin = rhs.origin;
	}
	return *this;
}
Shape::~Shape()
{
	delete [] shapeName;
}

const Point& Shape::getOrigin ()
{
	return origin;
}

char* Shape::getName(){
	return shapeName;
}

void Shape::display(){
	cout << "Shape Name: "<< shapeName<<endl;
	origin.display();
}

double Shape::distance (Shape& other)
{
	return origin.distance(other.origin);
}

double Shape::distance(Shape& the_shape, Shape& other)
{
	 return Point::distance(the_shape.origin, other.origin);
}

void Shape::move(double dx, double dy)
{
	origin.move(dx, dy);
}
