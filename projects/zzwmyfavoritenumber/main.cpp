#include <iostream>

//this is a comment

/*
	This is a multiline
	comment!!! 
*/

int main()
{
	int number;
	std::cout << "Enter your favorite number between 1 and 100: ";
	std::cin >> number;
	std::cout << "Amazing!! That's my favorite number too!\n";
	std::cout << "No really!! " << number << " is my favorite number!\n";
}