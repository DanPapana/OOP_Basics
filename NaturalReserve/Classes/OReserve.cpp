#include "OReserve.h"



OReserve::OReserve()
{
}

void OReserve::addAnimal(Animal* new_animal) {
	Zoo.push_back(new_animal);
}

Animal* OReserve::getAnimal(int order) {
	return Zoo[order];
}

OReserve::~OReserve()
{
}
