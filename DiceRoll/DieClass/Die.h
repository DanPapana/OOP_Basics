#pragma once
#include <iostream>
#include <iomanip>
#include <fstream> 

class Die
{
private:
	int roll[7];
public:
	Die();
	int Roll();
	int getRoll(int i);
	void setRoll(int roll_1, int roll_2, int i);
	int Compare_Max();
	int Compare_Min();
	float Frequency(int throws, int roll);
	~Die();
};

