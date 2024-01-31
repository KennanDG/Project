#include "Operations.h"
#include "UI.h"
#include "string"



int main()
{
	bool KeepCalculating = true;
	
	do
	{
		std::cout << "\n\n******************** Welcome to my C++ Calculator! ********************\n\n\n"; // Greeting

		double userInputNumber = UI::AskForNumber(); // Asks user for the initial number.

		if (userInputNumber == 0.000080085) // If the user types 'exit' to terminate the program.
		{
			break;
		}

		std::cout << "\n\nNumber entered:\t\t" << userInputNumber << std::endl; // Prints out the initial number entered.

		int operation = UI::GetOperation(); // int variable to store switch statement case value for the Calculate method.

		UI::Calculate(operation, userInputNumber); // Calculates userInput based on the operation they selected and prints out the solution.


	} while (KeepCalculating);

	return 0;
}