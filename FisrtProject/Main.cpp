#include "Operations.h"
#include "UI.h"
#include "string"



int main()
{
	std::cout << "Welcome to my C++ Calculator!\n\n\n"; // Greeting 

	double userInputNumber = UI::AskForNumber();

	std::cout << "\n\n" << userInputNumber << std::endl;

	int operation = UI::GetOperation();

	std::cout << "\n\n" << operation << std::endl;

	double secondUserInputNumber = UI::AskForNumber();

	std::cout << "\n" << secondUserInputNumber << std::endl;

	return 0;
}