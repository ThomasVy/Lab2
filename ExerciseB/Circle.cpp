#include "Circle.h"
#include <math.h>
#include <iostream>
using namespace std;
Circle::Circle(double x, double y, double radius, const char * name): Shape(x, y, name), radius(radius)
{}

Circle::~Circle(){}

Circle::Circle(const Circle& rhs):Shape(rhs), radius(rhs.radius)
{}

Circle& Circle::operator= (const Circle& rhs)
{
	if(this != &rhs)
	{
		Shape::operator=(rhs);
		radius = rhs.radius;
	}
	return *this;
}
double Circle::area()const
{
	return M_PI*pow(radius, 2);
}

double Circle::perimeter()const
{
	return M_PI*2*radius;
}

double Circle::get_radius(){
	return radius;
}

void Circle::set_radius(double r)
{
	radius =r;
}
void Circle::display()const
{
	Shape::display();
	cout<<"Radius: "<<radius<<endl;
	cout<<"Area: "<<area()<<endl;
	cout<<"Perimeter: "<<perimeter()<<endl;
}