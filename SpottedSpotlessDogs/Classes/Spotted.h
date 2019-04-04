#pragma once
#include "Dog.h"
class Spotted : public Dog
{
public:

	Spotted(const Dog&, const int&);
	int getSpots() { return mSpots; }

	virtual ~Spotted();

private: 
	int mSpots;
};