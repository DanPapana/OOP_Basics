#pragma once
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class CComplex
{

public:

	CComplex(const float& = 0, const float& = 0);

	/*	struct complexStruct {
		int real;
		int imag;
	};
	complexStruct getComplex();
	complexStruct operator + (const complexStruct&);
*/

	float getReal();
	float getImag();


	CComplex operator+(const CComplex& Second) {
		CComplex solution;
		solution.real = this->real + Second.real;
		solution.imag = this->imag + Second.imag;
		return solution;
	}

	CComplex operator-(const CComplex& Second) {
		CComplex solution;
		solution.real = this->real - Second.real;
		solution.imag = this->imag - Second.imag;
		return solution;
	}

	CComplex operator*(const CComplex& Second) {
		CComplex solution;
		solution.real = ((this->real * Second.real) - (this->imag * Second.imag));
		solution.imag = ((this->real * Second.imag) + (this->imag * Second.real));
		return solution;
	}

	CComplex operator/(const CComplex& Second) {
		CComplex solution;
		solution.real = ((this->real * Second.real) + (this->imag * Second.imag)) / (pow(Second.real, 2) + pow(Second.imag, 2));
		solution.imag = ((this->imag * Second.real) - (this->real * Second.imag)) / (pow(Second.real, 2) + pow(Second.imag, 2));
		return solution;
	}

	float operator~() {
		return (sqrt(pow(this->real, 2) + pow(this->imag, 2)));
	}
	
	void operator==(const CComplex& Second) {
		this->real = Second.real;
		this->imag = Second.imag;
	}

	CComplex operator^(int power) const {
		CComplex solution, original(1, 1);
		solution.real = this->real;
		solution.imag = this->imag;

		for (int i = 1; i <= power; i++) {
			solution = solution * original;
		}
		return solution;
	}

	~CComplex();
	
private:
///	complexStruct Z_number;
	float real;
	float imag;
};
