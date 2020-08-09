#include <iostream>
#include "String.h"

int main() {
	String larry{"Larry"};
	String moe{"Moe"};

	String stooge{larry};
	larry.display();
	moe.display();

	std::cout << (larry == moe) << std::endl;
	std::cout << (larry == stooge) << std::endl;

	larry.display();
	String larry2{-larry};
	larry2.display();

	String stooges{larry + "Moe"};

	String two_stooges{moe + " " + "Larry"};
	two_stooges.display();

	String three_stooges{moe + " " + larry + " " + "Curly"};
	three_stooges.display();

	return 0;
}