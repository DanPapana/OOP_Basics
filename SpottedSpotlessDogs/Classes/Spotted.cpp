#include "Spotted.h"

Spotted::Spotted(const Dog &Woof, const int& spots) : Dog(Woof)
{
	mSpots = spots;
}


Spotted::~Spotted()
{
}
