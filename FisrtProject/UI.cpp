#include "UI.h"
#include "string"


double UI::AskForNumber()
{
	double convertToDouble = 0.0; // Return value double.

	bool condition = true;

	do
	{
		// Asks for user Input.
		std::string userInput;
		std::cout << "Enter a number here (dont use commas): ";
		std::cin >> userInput;


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

	std::cout << "1 = + \n\n"; std::cout << "2 = -\n\n"; "3 = *\n\n"; std::cout << "4 = /\n\n"; //Atrihmitic operations.

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

		std::cout << "\nSelect an Operaiton: ";
		std::cin >> userInput;


		try
		{
			if (std::stoi(userInput) <= 10 && std::stoi(userInput) >= 1)
			{
				selection = std::stoi(userInput);

				condition = false;

				return selection;
			}
			else
			{
				std::cout << "\n\nInavalid selection. Please try again.\n\n";

			}
		}
		catch (...)
		{
			std::cout << "\n\nInavalid selection. Please try again.\n\n";
		}
	} while (condition);

}




void UI::Calculate(int operation, double num1)
{
	switch (operation)
	{
	case 1:
	{
		double num2 = AskForNumber();

		double result = Operations::Sum(num1, num2); 

		std::cout << "\n\n" << result << "\n\n";

	}
	case 2:
	{
		double num2 = AskForNumber();
		
		double result = Operations::Subtract(num1, num2);

		std::cout << "\n\n" << result << "\n\n";
	}
	case 3:
	{
		double num2 = AskForNumber(); 

		double result = Operations::Multiply(num1, num2); 

		std::cout << "\n\n" << result << "\n\n";
	}
	case 4:
	{
		double num2 = AskForNumber(); 
		
		double result = Operations::Divide(num1, num2); 

		std::cout << "\n\n" << result << "\n\n"; 
	}
	case 5:
	{
		double num2 = AskForNumber();

		double result = Operations::Power(num1, num2); 

		std::cout << "\n\n" << result << "\n\n";
	}
	case 6:
	{
		double num2 = AskForNumber();

		double result = Operations::NthRoot(num1, num2);

		std::cout << "\n\n" << result << "\n\n";
	}
	case 7:
	{
		double result = Operations::SquareRoot(num1);

		std::cout << "\n\n" << result << "\n\n";
	}
	case 8:
	{
		double result = Operations::CubedRoot(num1); 

		std::cout << "\n\n" << result << "\n\n";
	}
	case 9:
	{
		double result = Operations::Squared(num1); 

		std::cout << "\n\n" << result << "\n\n"; 
	}
	case 10:
	{
		double result = Operations::Cubed(num1); 

		std::cout << "\n\n" << result << "\n\n"; 
	}
	default:
		break;
	}
}