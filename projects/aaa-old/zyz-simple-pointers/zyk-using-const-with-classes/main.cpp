#include <iostream>
#include "Player.h"

void display_player_name(const Player &p) {
	std::cout << p.get_name() << std::endl;
}

int main() {
	const Player villian{"Villian", 100, 55};
	display_player_name(villian);
	Player hero{"Hero", 100, 15};
	display_player_name(hero);

	return 0;
}