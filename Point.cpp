#include "Point.h"
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int Point::idCounter = 1000;
int Point::numPoints = 0;

Point::Point(double x, double y):x(x),y(y)
{
	id = ++idCounter;
	numPoints++;
}
Point::Point(const Point& rhs): x(rhs.x), y(rhs.y)
{
	id = ++idCounter;
	numPoints++;
}
Point::~Point()
{
	numPoints--;
}
Point& Point::operator=(const Point& rhs)
{
	if(this!=&rhs)
	{
		x = rhs.x;
		y= rhs.y;
		numPoints++;
		id = idCounter++;
	}
	return *this;
}
void Point::display()const
{
	printf("X-coordinate: %6.2f\n", x);
	printf("Y-coordinate: %6.2f\n", y);
}

int Point::counter()
{
	return numPoints;
}

double Point::distance(const Point& secondPoint)const
{
	double tempx = x - secondPoint.x;
	double tempy = y - secondPoint.y;
	return sqrt(pow(tempx,2) + pow(tempy,2));
}

double Point::distance (const Point& firstPoint, const Point& secondPoint)
{
	double tempx = firstPoint.x - secondPoint.x;
	double tempy = firstPoint.y - secondPoint.y;
	return sqrt(pow(tempx,2) + pow(tempy,2));
}
void Point::move(const double& dx, const double& dy)
{
	x += dx;
	y+= dy;
}
void Point::setx(const double& x)
{
	this->x=x;
}
void Point::sety(const double& y)
{
	this->y=y;
}
double Point::getx()
{
	return x;
}
double Point::gety()
{
	return y;
}
