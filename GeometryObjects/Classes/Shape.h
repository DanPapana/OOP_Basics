#pragma once
#include "Point.h"
#include <math.h>

class Shape
{
public:

	Shape(const Point& point_0, const Point& point_1);
	virtual double getPerim() = 0;
	virtual ~Shape();
protected:
	Point mPoint[2];
};