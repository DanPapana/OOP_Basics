#include "Dog.h"

Dog::Dog() {
}

Dog::Dog(const string& name, const string& color, const int& weight, const int& height, const int& age)
{
	mName = name;
	mColor = color;
	mWeight = weight;
	mHeight = height;
	mAge = age;

}

Dog::~Dog()
{
}