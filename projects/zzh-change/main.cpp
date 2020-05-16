#include <iostream>

using namespace std;

int main()
{
	cout << "Enter a amount of change: ";
	int change {};
	cin >> change;
	
	int dollars {change / 100};
	change %= 100;
	int quarters {change / 25};
	change %= 25;
	int dimes {change / 10};
	change %= 10;
	int nickels {change / 5};
	change %= 5;
	int pennies {change};
	change = 0;

	cout << "Dollars: " << dollars << endl;
	cout << "Quarters: " << quarters << endl;
	cout << "Dimes: " << dimes << endl;
	cout << "Nickels: " << nickels << endl;
	cout << "Pennies: " << pennies << endl;

	cout << "That leaves: " << change << "c as your change!" << endl;
}