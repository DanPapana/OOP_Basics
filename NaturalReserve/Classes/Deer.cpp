#include "Deer.h"



Deer::Deer(std::string data[])
{
	m_Name = data[0];
	m_Date = data[1];
	m_FavFood = data[2];
	m_Weight = data[3];
	m_DailyFood = data[4];
	m_numberCubs = data[5];
}

void Deer::setNumberCubs(std::string cubs) {
	m_numberCubs = cubs;
}

std::string Deer::getNumberCubs() {
	return m_numberCubs;
}

Deer::~Deer()
{
}
