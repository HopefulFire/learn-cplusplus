#include <iostream>
#include "Shallow.h"

void display_shallow(Shallow s) {
	std::cout << s.get_data_value() << std::endl;
}

int main() {
	Shallow obj1{100};
	display_shallow(obj1);

	Shallow obj2{obj1};
	obj2.set_data_value(1000);

	return 0;
}