#pragma once
#include <string>

class Player {
private:
	std::string name;
	int health;
	int xp;
public:
	std::string get_name() const {
		return name;
	}
	void set_name(std::string name) {
		this->name = name;
	}
	Player()
	:	Player{"None"} {
	}
	Player(std::string name)
	:	Player{name, 0, 0} {
	}
	Player(std::string name_val, int health_val, int xp_val)
	:	name{name_val}, health{health_val}, xp{xp_val} {
	}
};