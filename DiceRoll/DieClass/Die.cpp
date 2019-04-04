#include "Die.h"

Die::Die()
{
	for (int i = 1; i <= 6; i++) {
		roll[i] = 0;
	}
}

int Die::Roll() {
	int temp;

	temp = (rand() % 6) + 1;
	roll[temp]++;

	return temp;
}

int Die::getRoll(int i) {
	return roll[i];
}

void Die::setRoll(int roll_1, int roll_2, int i) {
	roll[i] = roll_1 + roll_2;
}

int Die::Compare_Max() {
	int j = 1;
	int max = roll[1];
	for (int i = 2; i <= 6; i++) {
		if (roll[i] > max) {
			max = roll[i];
			j = i;
		}
	}
	return j;
}

int Die::Compare_Min() {
	int j = 1;
	int min = roll[1];
	for (int i = 2; i <= 6; i++) {
		if (roll[i] < min) {
			min = roll[i];
			j = i;
		}
	}
	return j;
}

float Die::Frequency(int throws, int roll) {
	return (((double)roll / (double)(throws * 2))) * 100;
}

Die::~Die()
{
}