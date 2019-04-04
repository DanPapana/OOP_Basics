#pragma once
#include "Carnivore.h"
class Fox :
	public Carnivore
{
public:
	Fox(std::string = 0, std::string = 0, std::string = 0, double = 0, double = 0, double = 0, std::string = 0);

	void setType(std::string);

	void setMaxTemp(double);

	double getMaxTemp();

	std::string getType();

	virtual ~Fox();

private:

	double m_maxTemp;
	std::string m_type;
};
