#include <iostream>
#include <vector>
#include "String.h"

int main() {
	String empty;
	std::cout << empty << std::endl;
	String hello{"Hello there!"};
	std::cout << hello << std::endl;

	String copy_constructor{hello};
	std::cout << copy_constructor << std::endl;

	std::vector<String> move_vector;
	move_vector.push_back("Hello");
	std::cout << move_vector.at(0) << std::endl;

	String copy_operator;
	String move_operator;
	copy_operator = copy_constructor;
	std::cout << copy_operator << std::endl;
	move_operator = "Hello, world";
	std::cout << move_operator << std::endl;

	String concatenate{String{"a"} + String{"b"}};
	std::cout << concatenate << std::endl;
	String multiply{concatenate * 10};
	std::cout << multiply << std::endl;

	String uppercase{++hello};
	std::cout << uppercase << std::endl;
	String uppercase2{hello++};
	std::cout << uppercase2 << std::endl;

	String lowercase{--uppercase};
	std::cout << lowercase << std::endl;
	String lowercase2{uppercase2--};
	std::cout << lowercase2 << std::endl;

	hello += empty;
	hello *= 3;
	std::cout << hello << std::endl;

	String input;
	std::cin >> input;
	std::cout << input << std::endl;
	
	return 0;
}