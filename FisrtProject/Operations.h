#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>


class Operations
{
public:

	// Simple arithmitic functions.

	static double Sum(double num1, double num2); // Returns the sum of two numbers.

	static double Subtract(double num1, double num2); // Returns the subtraction of two numbers.

	static double Multiply(double num1, double num2); // Returns the product of two numbers.

	static double Divide(double num1, double num2); // Returns the quotient of two numbers


	// Expoential functions.
	static double Squared(double base); // Raises a number to the second power.

	static double Cubed(double base); // Raises a number to the third power.

	static double NthRoot(double base, double root); // Returns the nth-root of a number.

	static double Power(double base, double exp); // Raises the base parameter to an exponent.

	static double SquareRoot(double base); // Square roots a number.

	static double CubedRoot(double base); // Cube roots a number.


	// Logrithmic functions.

};

