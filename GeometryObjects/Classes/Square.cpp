#include "Square.h"



Square::Square(const Point& point_0, const Point& point_1) : Shape(point_0, point_1)
{
	mLength = fabs(point_1.getX() - point_0.getX());
	if (mLength == 0) {
		mLength = fabs(point_1.getY() - point_0.getY());
	}
}

double Square::getPerim() {
	return mLength * 4;
}

Square::~Square()
{
}
