#include <iostream>

using namespace std;

int main()
{
	cout << "Hello, welcome to Frank's Carpet Cleaning Service\n\n";

	cout << "How many small rooms would you like cleaned? ";
	int number_of_small_rooms {0};
	cin >> number_of_small_rooms;

	cout << "How many large rooms would you like cleaned? ";
	int number_of_large_rooms {0};
	cin >> number_of_large_rooms;

	const double price_per_small_room {25.0};
	const double price_per_large_room {35.0};
	const double sales_tax_rate {0.06};
	const int extimate_expiry {30};

	double subtotal_small_rooms {number_of_small_rooms * price_per_small_room};
	double subtotal_large_rooms {number_of_large_rooms * price_per_large_room};
	double subtotal {subtotal_small_rooms + subtotal_large_rooms};
	double tax {subtotal * sales_tax_rate};
	double total {subtotal + tax};

	cout << "\nEstimate for carpet cleaning service:\n";
	cout << "======================================\n";
	cout << "Number of small rooms: " << number_of_small_rooms << "\n";
	cout << "Price per small room: $" << price_per_small_room << "\n";
	cout << "Cost of small rooms: $" << subtotal_small_rooms << "\n";
	cout << "======================================\n";
	cout << "Number of large rooms: " << number_of_large_rooms << "\n";
	cout << "Price per large room: $" << price_per_large_room << "\n";
	cout << "Cost of large rooms: $" << subtotal_large_rooms << "\n";
	cout << "======================================\n";
	cout << "Subtotal: $" << subtotal << "\n";
	cout << "Tax: $" << tax << "\n";
	cout << "======================================\n";
	cout << "Total estimate: $" << total << "\n";
	cout << "This estimate is valid for " << extimate_expiry << " days.\n";

	return 0;
}
