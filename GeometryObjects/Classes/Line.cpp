#include "Line.h"

Line::Line(const Point& point_0, const Point& point_1) : Shape(point_0, point_1)
{
	mLength = sqrt(pow((point_1.getX() - point_0.getX()), 2) + pow((point_1.getY() - point_0.getY()), 2));
}

double Line::getPerim() {
	return mLength;
}

Line::~Line()
{
}
