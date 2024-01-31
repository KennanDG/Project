#include "UI.h"
#include "string"


double UI::AskForNumber()
{
	double convertToDouble = 0.0; // Return value double.

	bool condition = true;

	do
	{
		std::cout << "\nType 'exit' to terminate the program.\n\n";
		
		// Asks for user Input.
		std::string userInput;
		std::cout << "\nEnter a number here (dont use commas): ";
		std::cin >> userInput;

		if (userInput == "exit")
		{
			return 0.000080085;
		}

		try
		{
			if (std::stod(userInput) < LONG_MAX && std::stod(userInput) > LONG_MIN)
			{
				double convertToDouble = std::stod(userInput); // Converts string to a double.
				condition = false;
				return convertToDouble;
			}
		}
		catch (...)
		{
			std::cout << "\nThat was an invalid number.\n\n";
		}

	} while (condition);


}




void UI::ShowOperations()
{
	// Shows a list of options a user can choose from.
	std::cout << "\n\n************** LIST OF OPERATIONS **************\n\n";

	//Atrihmitic operations.
	std::cout << "1 = + \n\n"; std::cout << "2 = -\n\n"; std::cout << "3 = *\n\n"; std::cout << "4 = /\n\n"; 

	// Exponential operations.
	std::cout << "5 = Raise to power\n\n"; std::cout << "6 = Find the nth root\n\n"; std::cout << "7 = Square root\n\n"; std::cout << "8 = Cube Root\n\n";
	std::cout << "9 = ^2\n\n"; std::cout << "10 = ^3\n\n";

}




int UI::GetOperation()
{
	int selection = 0;
	bool condition = true;
	std::string userInput;

	do
	{
		ShowOperations(); // calls the ShowOperations() method.

		std::cout << "\nSelect an Operation: "; // Prompts the user to select the operation they'd like to perform.
		std::cin >> userInput;


		try // If the user input is valid.
		{
			// Converts userInput string into an int and checks if it is between 1-10 inclusive.
			if (std::stoi(userInput) <= 10 && std::stoi(userInput) >= 1) 
			{
				selection = std::stoi(userInput);

				condition = false;

				return selection;
			}
			else // If the number entered is not between 1-10.
			{
				std::cout << "\n\nInavalid selection. Please try again.\n\n";

			}
		}
		catch (...) // If the user input is invalid.
		{
			std::cout << "\n\nInavalid selection. Please try again.\n\n"; 
		}
	} while (condition);

}




void UI::Calculate(int operation, double num1)
{
	// Performs the appropriate function based on the operation parameter.
	// Then prints out the solution to the screen.
	// Will ask the user for a second number if needed.
	switch (operation)
	{
	case 1:
	{
		double num2 = AskForNumber();

		double result = Operations::Sum(num1, num2); 

		std::cout << "\n\nSolution:\t\t" << result << "\n\n";
		break;

	}
	case 2:
	{
		double num2 = AskForNumber();
		
		double result = Operations::Subtract(num1, num2);

		std::cout << "\n\nSolution:\t\t" << result << "\n\n";
		break;
	}
	case 3:
	{
		double num2 = AskForNumber(); 

		double result = Operations::Multiply(num1, num2); 

		std::cout << "\n\nSolution:\t\t" << result << "\n\n";
		break;
	}
	case 4:
	{
		double num2 = AskForNumber(); 
		
		double result = Operations::Divide(num1, num2); 

		std::cout << "\n\nSolution:\t\t" << result << "\n\n";
		break;
	}
	case 5:
	{
		double num2 = AskForNumber();

		double result = Operations::Power(num1, num2); 

		std::cout << "\n\nSolution:\t\t" << result << "\n\n";
		break;
	}
	case 6:
	{
		double num2 = AskForNumber();

		double result = Operations::NthRoot(num1, num2);

		std::cout << "\n\nSolution:\t\t" << result << "\n\n";
		break;
	}
	case 7:
	{
		double result = Operations::SquareRoot(num1);

		std::cout << "\n\nSolution:\t\t" << result << "\n\n";
		break;
	}
	case 8:
	{
		double result = Operations::CubedRoot(num1); 

		std::cout << "\n\nSolution:\t\t" << result << "\n\n";
		break;
	}
	case 9:
	{
		double result = Operations::Squared(num1); 

		std::cout << "\n\nSolution:\t\t" << result << "\n\n";
		break;
	}
	case 10:
	{
		double result = Operations::Cubed(num1); 

		std::cout << "\n\nSolution:\t\t" << result << "\n\n";
		break;
	}

	}
}