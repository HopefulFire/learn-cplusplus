#pragma once
#include <string>

class Player {
private:
	std::string name;
	int health;
	int xp;
public:
	Player(std::string name_val = "None", int health_val = 0, int xp_val = 0)
		: name {name_val}, health {health_val}, xp {xp_val} {
	}
};