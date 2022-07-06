#include <iostream>
#include <string>
#include "complex.h"
#include <math.h>

using namespace std;

/*
STEP BY STEP PROCESS
	1. Ask user for 2 numbers (x & y) in the form (a+bi)
  	2. Ask user for operation(+, -, *, div, ==)
		a. if + or -, adds/subtracts both x & y
		b. if * or /, uses scalar on both x & y
		c. if ==, compare x & y
	3. Perform the operation with the overloaded functions
	4. Print in both Cartesian & Polar
	5. Loop if user wants to continue


*/


int main() {

	bool cont = true;
	Complex num1;	// Complex number
	double img1, real1;
	cout << "Enter value for real coefficient for first complex number: ";
	cin >> real1;
	cout << "Enter value for complex coefficient for first complex number: ";
	cin >> img1;
	num1.setReal(real1);
	num1.setImg(img1);
	num1.print();
	while (cont) {
		cout << "Operator choices: \n";
		cout << "\tEnter 1 for +\n";
		cout << "\tEnter 2 for -\n";
		cout << "\tEnter 3 for *\n";
		cout << "\tEnter 4 for /\n";
		cout << "\tEnter 5 for ==\n";

		double real2, img2, scalar;
		Complex num2, temp;

		int input;
		cout << "Enter value for your operation: ";
		cin >> input;

		if (input == 1) {	// Add
			cout << "Enter value for real coefficient for second complex number: ";
			cin >> real2;
			cout << "Enter value for complex coefficient for second complex number: ";
			cin >> img2;
			num2.setReal(real2);
			num2.setImg(img2);

			num1 + num2;
			num1.print();
		}
		else if (input == 2) {	// Subtract
			cout << "Enter value for real coefficient for second complex number: ";
			cin >> real2;
			cout << "Enter value for complex coefficient for second complex number: ";
			cin >> img2;
			num2.setReal(real2);
			num2.setImg(img2);

			num1 - num2;
			num1.print();
		}
		else if (input == 3) {		// Multiply
			cout << "Enter value for scalar: ";
			cin >> scalar;
			temp = num1 * scalar;
			temp.print();
		}
		else if (input == 4) {		// Divide
			cout << "Enter value for scalar: ";
			cin >> scalar;
			temp = num1 / scalar;
			temp.print();
		}
		else if (input == 5) {		// Equal
			cout << "Enter value for real coefficient for second complex number: ";
			cin >> real2;
			cout << "Enter value for complex coefficient for second complex number: ";
			cin >> img2;
			num2.setReal(real2);
			num2.setImg(img2);

			if (num1 == num2) {
				cout << "Numbers are equal" << endl;
			}
			else {
				cout << "Numbers aren't equal" << endl;
			}
		}
		else {
			cout << "Invalid Input" << endl;
			exit(EXIT_FAILURE);
		}

		/* Calculates the Polar Complex Coordinate */
		double r = abs(pow(pow(num1.getImg(), 2) + pow(num1.getReal(), 2), .5));
		double phi = atan(num1.getImg() / num1.getReal());

		cout << "Number in Polar Complex coordinates: " << r << "(cos(" << phi << ") + i * sin(" << phi << ")" << endl;
		cout << "Do you want to continue? (Y or N): ";

		char newTemp;
		cin >> newTemp;
		if (newTemp == 'Y') {
			cont = true;
		}
		else {
			cont = false;
			break;
		}
	}

	return 0;
}