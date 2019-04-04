#include "Circle.h"


Circle::Circle(const Point& point_0, const Point& point_1) : Shape(point_0, point_1)
{
	mRadius = sqrt(pow((point_1.getX() - point_0.getX()), 2) + pow((point_1.getY() - point_0.getY()), 2)) / 2;
}

double Circle::getPerim() {
	return 2 * 3.14 * mRadius;
}

Circle::~Circle()
{
}
