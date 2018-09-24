#include "Shape.h"
#include <string.h>
#include <iostream>
using namespace std;

Shape::Shape(double x, double y, const char* name): origin(x, y)
{
	shapeName = new char[(int)strlen(name)+1];
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, name);
}
Shape::Shape(const Shape& rhs): origin(rhs.origin)
{
	shapeName = new char[(int)strlen(rhs.shapeName)+1];
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, rhs.shapeName);
}
Shape& Shape::operator= (const Shape& rhs)
{
	if(this != &rhs)
	{
		delete[] shapeName;
		shapeName = new char[(int)strlen(rhs.shapeName)+1];
		if(shapeName == NULL){
			cerr << "Memory not available...";
			exit(1);
		}
		strcpy(shapeName, rhs.shapeName );
		origin = rhs.origin;
	}
	return *this;
}
Shape::~Shape()
{
	delete [] shapeName;
}

const Point& Shape::getOrigin ()const
{
	return origin;
}

char* Shape::getName(){
	return shapeName;
}

void Shape::display()const{
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

const char* Shape::getShapeName()const
{
	return shapeName;
}
void Shape::setOrigin(const double x, const double y)
{
	origin.setx(x);
	origin.sety(y);
}
void Shape::setShapeName(const char* name)
{
	delete[] shapeName;
	shapeName = new char[(int)strlen(name)+1];
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, name );
}
