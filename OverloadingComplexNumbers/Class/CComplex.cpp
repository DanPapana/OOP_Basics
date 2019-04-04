#include "CComplex.h"
/*
CComplex::CComplex(const int& _real, const int& _imag) {
	this->Z_number.real = _real;
	this->Z_number.imag = _imag;
}

CComplex::complexStruct CComplex::operator+(const complexStruct& Second_number) {

	complexStruct addition;
	addition.real = this->Z_number.real + Second_number.real;
	addition.imag = this->Z_number.imag + Second_number.imag;
	return addition;
}

CComplex::complexStruct CComplex::getComplex() {
	return Z_number;
}
*/

CComplex::CComplex(const float& _real, const float& _imag) {
	this->real = _real;
	this->imag = _imag;
}

float CComplex::getReal() {
	return this->real;
}

float CComplex::getImag() {
	return this->imag;
}

CComplex::~CComplex(){
}
