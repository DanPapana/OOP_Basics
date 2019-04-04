#include "Rabbit.h"


Rabbit::Rabbit(std::string data[])
{
	m_Name = data[0];
	m_Date = data[1];
	m_FavFood = data[2];
	m_Weight = data[3];
	m_DailyFood = data[4];
	m_Area = data[5];
}

void Rabbit::setMinArea(std::string area) {
	m_Area = area;
}

std::string Rabbit::getMinArea() {
	return m_Area;
}

Rabbit::~Rabbit()
{
}
