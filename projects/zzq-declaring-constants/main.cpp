#include <iostream>

using namespace std;

int main()
{
	cout << "Hello, welcome to Frank's Carpet Cleaning Service\n\n";
	cout << "How many rooms would you like cleaned? ";

	int number_of_rooms {0};
	cin >> number_of_rooms;

	const double price_per_room {30.0};
	const double sales_tax {0.06};
	const int extimate_expiry {30};

	cout << "\nEstimate for carpet cleaning service:\n";
	cout << "Number of rooms: " << number_of_rooms << "\n";
	cout << "Price per room: $" << price_per_room << "\n";
	cout << "Cost: $" << price_per_room * number_of_rooms << "\n";
	cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << "\n";
	cout << "======================================\n";
	cout << "Total estimate: $" << price_per_room * number_of_rooms * (1 + sales_tax) << "\n";
	cout << "This estimate is valid for " << extimate_expiry << " days.\n";

	return 0;
}
