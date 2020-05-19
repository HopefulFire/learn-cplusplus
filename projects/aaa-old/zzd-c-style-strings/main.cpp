#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	char first_name[20] {};
	char last_name[20] {};
	char full_name[50] {};

	cout << "Please enter your first name: ";
	cin >> first_name;

	cout << "Please enter your last name: ";
	cin >> last_name;
	cout << "=============================" << endl;

	cout << "Hello, " << first_name << ", your first name has " << strlen(first_name) << " characters," << endl;
	cout << "and your last name, " << last_name << ", has " << strlen(last_name) << " characters." << endl;

	strcopy(full_name, first_name);
	strcat(full_name, " ");
	strcat(full_name, last_name);
	cout << "Your full name is " << full_name;
}