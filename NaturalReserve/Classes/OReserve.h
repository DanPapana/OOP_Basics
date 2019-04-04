#pragma once
#include "Animal.h"
#include <vector>

class OReserve
{
public:	

	void addAnimal(Animal* new_animal);
	Animal* getAnimal(int order);
	
	~OReserve();

private:
	std::vector<Animal*> Zoo;
};

