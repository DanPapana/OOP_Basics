#include "Point.h"


Point::Point(int XCoord, int YCoord)
{
	m_XCoord = XCoord;
	m_YCoord = YCoord;
}

int Point::getX() const {
	return m_XCoord;
}

int Point::getY() const {
	return m_YCoord;
}

Point::~Point()
{
}
