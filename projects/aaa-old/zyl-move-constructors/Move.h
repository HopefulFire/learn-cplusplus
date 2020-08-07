#pragma once
#include <iostream>

class Move {
private:
	int *data;
public:
	void set_data_value(int d) {
		*data = d;
	}
	int get_data_value() {
		return *data;
	}
	Move(int d) {
		data = new int;
		*data = d;
		std::cout << "Constructor for: " << *data << std::endl;
	}
	Move(const Move &source)
		: Move{*source.data} {
			std::cout << "Deep copy constructor for: " << *data << std::endl;
	}
	Move(Move &&source)
		: data{source.data} {
			source.data = nullptr;
			std::cout << "Move constructor for: " << *data << std::endl;
	}
	~Move() {
		if (data != nullptr) {
			std::cout << "Destructor called for: " << *data << std::endl;
		} else {
			std::cout << "Destructor called for nullptr\n";
		}
		delete data;
	}
};