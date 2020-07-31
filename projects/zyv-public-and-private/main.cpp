#include <iostream>
#include <string>

class Player {
private:
	std::string name {"Frank"};
	int health;
	int xp;
public:
	void talk(std::string text_to_say) {
		std::cout << name << " says " << text_to_say << std::endl;
	}
	bool is_dead();
};

int main() {
	Player frank;
	// frank.name = "Frank"
	// std::cout << frank.health << std::endl;
	frank.talk("Hello, there!");

	return 0;
}