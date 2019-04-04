#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Dog
{
public:
	Dog();
	Dog(const string&, const string&, const int&, const int&, const int&);
	virtual string getName() { return mName; }
	virtual string getColor() { return mColor; }
	virtual int getWeight() { return mWeight; }
	virtual int getHeight() { return mHeight; }
	virtual int getAge() { return mAge; }
	
	~Dog();

private:
		string mName;
		string mColor;
		int mWeight;
		int mHeight;
		int mAge;
};

