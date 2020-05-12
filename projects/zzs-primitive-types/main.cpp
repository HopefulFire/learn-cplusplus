#include <iostream>

int main()
{
	char middle_initial {'j'}; //single quotes around characters
	std::cout << "My middle initial is " << middle_initial << "\n";

	unsigned short exam_score {100};
	std::cout << "My exam score was " << exam_score << "\n";

	unsigned int countries_represented {65};
	std::cout << "There were " << countries_represented << " countries represented in my meeting\n";

	unsigned int people_in_florida {20'610'000};
	std::cout << "There are about " << people_in_florida << " people in Florida\n";

	unsigned long people_on_earth {7'600'000'000};
	std::cout << "There are about " << people_on_earth << " people on earth\n";

	unsigned long long distance_to_alpha_centauri {9'461'000'000'000};
	std::cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers\n";

	float car_payment{401.23};
	std::cout << "My car payment is " << car_payment << "\n";

	double pi {3.14159};
	std::cout << "Pi is " << pi << "\n";

	long double large_amount {2.7e120};
	std::cout << large_amount << " is a very large number\n";

	bool game_over;
	std::cout << "Game over is " << game_over;

	//warning! watch out for overflows!

}