#include "Rectangle.h"


Rectangle::Rectangle(const Point& point_0, const Point& point_1) : Shape(point_0, point_1)
{
	mWidth = fabs(point_1.getX() - point_0.getX());
	mLength = fabs(point_1.getY() - point_0.getY());
}

double Rectangle::getPerim() {
	return (mWidth * 2) + (mLength * 2);
}

Rectangle::~Rectangle()
{
}
