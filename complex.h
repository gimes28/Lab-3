#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
class Complex {		// Definitions
	private:
		double real;
		double img;

	public:
		Complex();					// Default Constructor
		Complex(double, double);	// Overloaded Constructor

		void setReal(double realNum) { real = realNum; }
		void setImg(double imgNum) { img = imgNum; }

		double getReal() const { return real; }
		double getImg() const { return img; }

		void operator+(const Complex &);
		void operator-(const Complex &);
		Complex operator*(const double &);
		Complex operator/(const double &);
		bool operator==(const Complex &);

		void print();
};
#endif
