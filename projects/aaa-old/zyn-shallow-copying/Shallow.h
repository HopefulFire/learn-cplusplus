#pragma once
#include <iostream>

class Shallow {
private:
	int *data;
public:
	int get_data_value() {
		return *data;
	}
	void set_data_value(int d) {
		*data = d;
	}
	Shallow(int d) {
		data = new int;
		*data = d;
	}
	Shallow(const Shallow &source)
		: data{source.data} {
		std::cout << "Copy constructor - shallow" << std::endl;
	}
	~Shallow() {
		delete data;
		std::cout << "Destructor freeing data" << std::endl;
	}
};