#include "Fox.h"


Fox::Fox(std::string name, std::string date, std::string food, double weight, double dailyFood, double maxTemp, std::string type)
{
	m_Name = name;
	m_Date = date;
	m_FavFood = food;
	m_Weight = weight;
	m_DailyFood = dailyFood;
	m_maxTemp = maxTemp;
	m_type = type;
}

void Fox::setMaxTemp(double maxTemp) {
	m_maxTemp = maxTemp;
}

void Fox::setType(std::string type) {
	m_type = type;
}

double Fox::getMaxTemp() {
	return m_maxTemp;
}

std::string Fox::getType() {
	return m_type;
}

Fox::~Fox()
{
}
