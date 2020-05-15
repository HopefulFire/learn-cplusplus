#include <iostream>

using namespace std;

int main()
{
	int total {}, num1 {}, num2 {}, num3 {};
	const int count {3};

	cout << "Enter 3 integers: ";
	cin >> num1 >> num2 >> num3;

	total = num1 + num2 + num3;

	double average {static_cast<double>(total) / count};

	cout << "The sum of the numbers is: " << total << endl;
	cout << "The average of the numbers is: " << average << endl;


	return 0;
}