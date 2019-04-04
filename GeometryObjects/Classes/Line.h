#pragma once
#include "Shape.h"

class Line :
	public Shape
{
public:
	Line(const Point& point_0, const Point& point_1);
	double getPerim() override;
	~Line();
private:
	double mLength;
};