#ifndef POINT
#define POINT
class Point {
public:
	Point(double x, double y);
	void display()const;
	static int counter();
	double distance(const Point& secondPoint)const;
	static double distance (const Point& firstPoint, const Point& secondPoint);
private:
	double x;
	double y;
	int id;
	static int counterNum;
};

#endif