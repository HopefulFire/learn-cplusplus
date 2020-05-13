#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main()
{
	cout << "sizeof infomation\n";
	cout << "\n";

	cout << "char: " << sizeof(char) << " bytes\n";
	cout << "int: " << sizeof(int) << " bytes\n";
	cout << "unsigned int: " << sizeof(unsigned int) << " bytes\n";
	cout << "short: " << sizeof(short) << " bytes\n";
	cout << "long: " << sizeof(long) << " bytes\n";
	cout << "long long: " << sizeof(long long) << " bytes\n";

	cout << "\n";

	cout << "float: " << sizeof(float) << " bytes\n";
	cout << "double: " << sizeof(double) << " bytes\n";
	cout << "long double: " << sizeof(long double) << " bytes\n";

	cout << "\n";

	cout << "Minumum Values:\n";
	cout << "char: " << CHAR_MIN << "\n";
	cout << "int: " << INT_MIN << "\n";
	cout << "short: " << SHRT_MIN << "\n";
	cout << "long: " << LONG_MIN << "\n";
	cout << "long long: " << LLONG_MIN << "\n";

	cout << "\n";

	cout << "Maximum values:\n";
	cout << "char: " << CHAR_MAX << "\n";
	cout << "int: " << INT_MAX << "\n";
	cout << "short: " << SHRT_MAX << "\n";
	cout << "long: " << LONG_MAX << "\n";
	cout << "long long: " << LLONG_MAX << "\n";

}