#include <iostream>
#include "complex.h"
#include <string>

using namespace std;

Complex::Complex() {
	real = 0.0;
	img = 0.0;
}

Complex::Complex(double realNum, double imgNum) {
	real = realNum;
	img = imgNum;
}

void Complex::print() {		// Implementation
	cout << "Imaginary number: " << real << " + " << img << "i" << endl;
}

void Complex::operator+(const Complex &var) {
	this->real += var.real;
	this->img += var.img;
}

void Complex::operator-(const Complex &var) {
	this->real -= var.real;
	this->img -= var.img;
}

Complex Complex::operator*(const double &var) {
	Complex temp;
	temp.real = this->real * var;
	temp.img = this->img * var;

	this->real *= var;
	this->img *= var;

	return temp;
}

Complex Complex::operator/(const double &var) {
	Complex temp;
	temp.real = this->real / var;
	temp.img = this->img / var;

	this->real /= var;
	this->img /= var;

	return temp;
}

bool Complex::operator==(const Complex &var) {
	if ((this->real == var.real) && (this->img == var.img)) {
		return true;
	}
	else {
		return false;
	}
}