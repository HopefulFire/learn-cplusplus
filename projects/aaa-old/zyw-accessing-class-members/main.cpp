
#include <string>
#include <iostream>

class Player {
public:
	std::string name {"Player"};
	int health {100};
	int xp {0};

	void talk(std::string text_to_say) {
		std::cout << name << " says " << text_to_say << std::endl;
	}
	bool is_dead();
};

class Account {
public:
	std::string name {"Account"};
	double balance {0.0};

	bool deposit(double bal){
		balance += bal;
	}
	bool withdraw(double bal){
		balance -= bal;
	}
};

int main() {
	Player frank;
	frank.name = "Frank";
	frank.health = 100;
	frank.xp = 12;
	frank.talk("Hi there!");

	Player *enemy = new Player;
	(*enemy).name = "Enemy";
	(*enemy).health = 100;
	enemy->xp = 15;
	enemy->talk("I will destroy you!");

	return 0;
}