#pragma once
#include "Shape.h"

class Square :
	public Shape
{
public:
	Square(const Point& point_0, const Point& point_1);
	double getPerim() override;
	~Square();
private:
	double mLength;
};