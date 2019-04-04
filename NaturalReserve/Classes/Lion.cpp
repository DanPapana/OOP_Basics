#include "Lion.h"



Lion::Lion(std::string name, std::string date, std::string food, double weight, double dailyFood, double minTemp, std::string country)
{
	m_Name = name;
	m_Date = date;
	m_FavFood = food;
	m_Weight = weight;
	m_DailyFood = dailyFood;
	m_MinTemp = minTemp;
	m_Country = country;
}

void Lion::setMinTemp(double minTemp) {
	m_MinTemp = minTemp;
}

void Lion::setCountry(std::string country) {
	m_Country = country;
}

double Lion::getMinTemp() {
	return m_MinTemp;
}

std::string Lion::getCountry() {
	return m_Country;
}

Lion::~Lion()
{
}