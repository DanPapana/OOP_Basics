#pragma once
#include <iostream>

class Animal
{
public:
	Animal();
	virtual void setName(std::string name) {
		m_Name = name;
	}
	virtual void setDate(std::string date) {
		m_Date = date;
	}
	virtual void setFood(std::string food) {
		m_FavFood = food;
	}
	virtual void setWeight(std::string weight) {
		m_Weight = weight;
	}
	virtual void setDailyFood(std::string daily) {
		m_DailyFood = daily;
	}

	virtual std::string getName() {
		return m_Name;
	}
	virtual std::string getDate() {
		return m_Date;
	}
	virtual std::string getFood() {
		return m_FavFood;
	}
	virtual std::string getWeight() {
		return m_Weight;
	}
	virtual std::string getDailyFood() {
		return m_DailyFood;
	}

	~Animal();

protected:
    std::string m_Name;
	std::string m_Date;
	std::string m_FavFood;
	std::string m_Weight;
	std::string m_DailyFood;
};

