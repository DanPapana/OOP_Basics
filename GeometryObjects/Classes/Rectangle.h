#pragma once
#include "Shape.h"


class Rectangle :
	public Shape
{
public:
	Rectangle(const Point& point_0, const Point& point_1);
	double getPerim() override;
	~Rectangle();

private:
	double mLength;
	double mWidth;
};

