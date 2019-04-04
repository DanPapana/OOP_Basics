#pragma once
class Point
{
public:
	Point(int X_Coord, int Y_Coord);
	~Point();
	int getX() const;
	int getY() const;

private:
	int m_XCoord;
	int m_YCoord;
};