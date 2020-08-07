#include "Player.h"

void display_player(Player p) {
	std::cout << "Name: " << p.get_name() << std::endl;
	std::cout << "Health: " << p.get_health() << std::endl;
	std::cout << "XP: " << p.get_xp() << std::endl;
}

int main() {
	Player empty;
	display_player(empty);

	Player frank{"Frank"};
	display_player(frank);

	Player hero{"Hero", 100};
	display_player(hero);

	Player villian{"Villian", 100, 55};
	display_player(villian);

	return 0;
}