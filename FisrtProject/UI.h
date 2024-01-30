#pragma once
#include "Operations.h"
#include "string.h"
#include "limits.h"



class UI
{
public:

	static double AskForNumber(); // Asks the user for a single number.

	static void ShowOperations(); // Asks the user which operation to perform.

	static int GetOperation(); // Captures string input from user and converts it into an int for switch case statement.

	static void Calculate(int operation, double num1); // Method used to compute selected calculations.

};

