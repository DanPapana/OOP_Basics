#pragma once

class Fraction
{
public:
	Fraction(const int& = 0, const int& = 0);
	
	Fraction operator == (const Fraction& _Fraction) {
		this->numerator = _Fraction.numerator;
		this->denominator = _Fraction.denominator;
	}

	Fraction operator + (const int& number) {
		Fraction solution;
		solution.numerator = this->numerator + this->denominator * number;
		solution.denominator = this->denominator;
		return !solution;
	}

	Fraction operator + (const Fraction& _Fraction) {
		Fraction solution;
		if (this->denominator == _Fraction.denominator) {
			solution.numerator = this->numerator + _Fraction.numerator;
			solution.denominator = this->denominator;
		}
		else {
			solution.numerator = _Fraction.denominator * this->numerator + this->denominator * _Fraction.numerator;
			solution.denominator = _Fraction.denominator * this->denominator;
		}
		return !solution;
	}

	Fraction operator - (const int& number) {
		Fraction solution;
		solution.numerator = this->numerator - this->denominator * number;
		solution.denominator = this->denominator;
		return !solution;
	}

	Fraction operator - (const Fraction& _Fraction) {
		Fraction solution;
		if (this->denominator == _Fraction.denominator) {
			solution.numerator = this->numerator - _Fraction.numerator;
			solution.denominator = this->denominator;
		}
		else {
			solution.numerator = _Fraction.denominator * this->numerator - this->denominator * _Fraction.numerator;
			solution.denominator = _Fraction.denominator * this->denominator;
		}
		return !solution;
	}

	Fraction operator * (const int& number) {
		Fraction solution;
		solution.numerator = this->numerator * number;
		solution.denominator = this->denominator;
		return !solution;
	}

	Fraction operator * (const Fraction& _Fraction) {
		Fraction solution;
		solution.numerator = this->numerator * _Fraction.numerator;
		solution.denominator = this->denominator * _Fraction.denominator;
		return !solution;
	}

	Fraction operator / (const int& number) {
		Fraction solution;
		solution.denominator = this->denominator * number;
		solution.numerator = this->numerator;
		return !solution;
	}

	Fraction operator / (const Fraction& _Fraction) {
		Fraction solution;
		solution.numerator = this->numerator * _Fraction.denominator;
		solution.denominator = this->denominator * _Fraction.numerator;
		return !solution;
	}

	Fraction operator ! () {
		int min;
		(this->numerator > this->denominator) ? min = this->denominator : min = this->numerator;
		for (int i = min; i > 1; i--) {
			if (this->numerator % i == 0 && this->denominator % i == 0) {
				this->numerator /= i;
				this->denominator /= i;
				return *this;
			}
		}
	}

	int getNumerator();
	int getDenominator();

	~Fraction();
	
private:
	int numerator;
	int denominator;
};

