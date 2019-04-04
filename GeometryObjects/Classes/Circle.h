#pragma once
#include "Shape.h"

class Circle :
	public Shape
{
public:
	Circle(const Point& point_0, const Point& point_1);
	double getPerim() override;
	~Circle();

private:
	double mRadius;
};
