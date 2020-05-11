#include <iostream>

int main()
{
	int number;
	std::cout << "Enter your favorite number between 1 and 100: ";
	std::cin >> number;
	std::cout << "Amazing!! That's my favorite number too!\n";
	std::cout << "No really!! ";
	std::cout << number;
	std::cout << " is my favorite number!\n";
}