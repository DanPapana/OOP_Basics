#pragma once
#include "Animal.h"
#include "Herbivore.h"


class Rabbit :
	public Herbivore
{
public:

	Rabbit(std::string[] = { 0 });

	void setMinArea(std::string);

	std::string getMinArea();

	virtual ~Rabbit();

private:
	
	std::string m_Area;
};

