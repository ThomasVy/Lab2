#include "Point.h"
#include <iostream>
#include <math.h>

using namespace std;

int Point::counterNum = 1000;

Point::Point(double x, double y):x(x),y(y)
{
	id = ++counterNum;
}

void Point::display()const
{
	cout << "X-coordinate: " << x << endl;
	cout << "Y-coordinate: " << y << endl;
}

int Point::counter()
{
	return counterNum - 1000;
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
