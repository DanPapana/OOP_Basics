#pragma once
#include "Herbivore.h"
class Deer :
	public Herbivore
{
public:
	Deer(std::string[] = { 0 });

	void setNumberCubs(std::string);

	std::string getNumberCubs();

	virtual ~Deer();

private:
	
	std::string m_numberCubs;
};