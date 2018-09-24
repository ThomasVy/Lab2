#ifndef POINT
#define POINT
class Point {
public:
	Point(double x, double y);
	Point(const Point& rhs);
	Point& operator=(const Point& rhs);
	~Point();
	void display()const;
	static int counter();
	double distance(const Point& secondPoint)const;
	static double distance (const Point& firstPoint, const Point& secondPoint);
	void move(const double& dx, const double& dy);

	void setx(const double& x);
	void sety(const double& y);
	double getx();
	double gety();
private:
	double x;
	double y;
	int id;
	static int numPoints;
	static int idCounter;
};

#endif
