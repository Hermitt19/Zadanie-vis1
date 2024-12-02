#include <iostream>
#include <string>

int main()
{
	std::string variable = "Welcome to the club buddy";

	std::cout << variable << "\n";

	std::cout << variable.length() << "\n";


	std::cout << variable.front() << "\n";
	// либо std::cout << variable[0] << "\n";

	std::cout << variable.back() << "\n";
	// либо std::cout << variable[variable.lenght()-1] << "\n";
}