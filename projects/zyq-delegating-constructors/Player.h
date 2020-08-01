#pragma once
#include <string>
#include <iostream>

class Player {
private:
	std::string name;
	int health;
	int xp;
public:
	Player()
	: Player {"None"} {
		std::cout << "No args constructor\n";
	}
	Player(std::string name_val)
	: Player {name_val, 0, 0} {
		std::cout << "One arg constructor\n";
	}
	Player(std::string name_val, int health_val, int xp_val)
	: name {name_val}, health {health_val}, xp {xp_val} {
		std::cout << "Three args constructor\n";
	}
};