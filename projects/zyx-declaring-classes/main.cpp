#include <vector>
#include <string>
#include <iostream>

class Player {
	std::string name {"Player"};
	int health {100};
	int xp {0};

	void talk(std::string);
	bool is_dead();
};

class Account {
	std::string name {"Account"};
	double balance {0.0};

	bool deposit(double);
	bool withdraw(double);
};

int main() {
	Account frank_account;
	Account jim_account;


	Player frank;
	Player hero;

	Player players[] {frank, hero};

	std::vector<Player> player_vec {frank};

	player_vec.push_back(hero);

	Player *enemy {nullptr};
	enemy = new Player;

	delete enemy;

	return 0;
}

