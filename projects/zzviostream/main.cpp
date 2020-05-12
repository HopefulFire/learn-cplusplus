#include <iostream>

int main()
{
	std::cout << "Hello, world!\n";

	std::cout << "Hello";
	std::cout << "World\n";

	std::cout << "Hello world!\n";
	std::cout << "Hello" << " world!\n";
	std::cout << "Hello\nOut\nThere\n";

	int num1;
	int num2;
	double num3;

	std::cout << "Enter an integer: ";
	std::cin >> num1;
	std::cout << "You entered: " << num1 << "\n";

	std::cout << "Enter a first integer: ";
	std::cin >> num1;
	std::cout << "Enter a second integer: ";
	std::cin >> num2;
	std::cout << "You entered " << num1 << " and " << num2 << "!\n";

	std::cout << "Enter 2 integers separated by a space: ";
	std::cin >> num1 >> num2;
	std::cout << "You entered " << num1 << " and " << num2 << "!\n";

	std::cout << "Enter a double: ";
	std::cin >> num3;
	std::cout << "You entered: " << num3 << "\n";

}