#pragma once
#include <string>

class Player {
private:
	static int num_players;
	std::string name;
	int health;
	int xp;
public:
	static int get_num_players() {
		return num_players;
	}
	std::string get_name() const {
		return name;
	}
	int get_health() const {
		return health;
	}
	int get_xp() const {
		return xp;
	}
	Player(std::string name_val="NONE", int health_val=0, int xp_val=0)
	:	name{name_val}, health{health_val}, xp{xp_val} {
		num_players++;
	}
	Player(const Player &source)
	:	Player{source.name, source.health, source.xp} {
		num_players++;
	}
	~Player() {
		num_players--;
	}
};

int Player::num_players{0};