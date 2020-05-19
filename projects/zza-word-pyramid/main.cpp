#include <iostream>
#include <string>

using namespace std;

int main()
{
	string phrase;

	cin >> phrase;

	cout << endl;

	for (size_t row {}; row < phrase.length(); row++)
	{
		for (size_t i {}; i < phrase.length() - row; i++)
		{
			cout << ' ';
		}
		for (size_t i {}; i <= row; i++)
		{
			cout << phrase.at(i);
		}
		if (row != 0)
		{
			for (size_t i {row - 1}; i <= row; i--)
			{
				cout << phrase.at(i);
			}
		}
		cout << endl;
	}

	return 0;
}