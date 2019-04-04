#pragma once
#include "Carnivore.h"
class Lion :
	public Carnivore
{
public:

	Lion(std::string = 0, std::string = 0, std::string = 0, double = 0, double = 0, double = 0, std::string = 0);

	void setMinTemp(double);
	void setCountry(std::string);

	double getMinTemp();
	std::string getCountry();

	virtual ~Lion();

private:

	double m_MinTemp;
	std::string m_Country;
};

