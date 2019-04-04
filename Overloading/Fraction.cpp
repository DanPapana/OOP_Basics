#include "Fraction.h"



Fraction::Fraction(const int& _numerator, const int& _denominator)
{
	numerator = _numerator;
	denominator = _denominator;
}

int Fraction::getNumerator() {
	return this->numerator;
}

int Fraction::getDenominator() {
	return this->denominator;
}

Fraction::~Fraction()
{
}
