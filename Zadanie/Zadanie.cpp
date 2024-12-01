#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <string>

int main()
{
	std::cout << "Enter your race:";
	std::string race;
	std::cin >> race;

	std::cout << "Enter your lvl:";
	std::string lvl;
	std::cin >> lvl;

	std::cout << race << " " << "\n";

	std::cin;
	return 0;
}