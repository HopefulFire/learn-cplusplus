#include <iostream>
#include <string>

using namespace std;

char rotate_char(int character, int rotation);
string rotate_phrase(string phrase, int rotation);

int main()
{
	string phrase;
	int rotation;
	getline(cin, phrase);
	cin >> rotation;
	cout << rotate_phrase(phrase, rotation) << endl;

	return 0;
}

char rotate_char(int character, int rotation)
{
	const int ALPHA_SIZE {26};
	const int ASCII_A {65};
	const int ASCII_Z {90};
	const int ASCII_a {97};
	const int ASCII_z {122};

	const int DIGIT_SIZE {10};
	const int ASCII_0 {48};
	const int ASCII_9 {57};
	if (character >= ASCII_A && character <= ASCII_Z)
	{
		character += rotation;
		while (character < ASCII_A)
		{
			character += ALPHA_SIZE;
		}
		while (character > ASCII_Z)
		{
			character -= ALPHA_SIZE;
		}
	}
	else if (character >= ASCII_a && character <= ASCII_z)
	{
		character += rotation;
		while (character < ASCII_a)
		{
			character += ALPHA_SIZE;
		}
		while (character > ASCII_z)
		{
			character -= ALPHA_SIZE;
		}
	}
	else if (character >= ASCII_0 && character <= ASCII_9)
	{
		character += rotation;
		while (character < ASCII_0)
		{
			character += DIGIT_SIZE;
		}
		while (character > ASCII_9)
		{
			character -= DIGIT_SIZE;
		}
	}
	return character;
}

string rotate_phrase(string phrase, int rotation)
{
	for (unsigned int i {}; i < phrase.length(); i++)
	{
		phrase[i] = rotate_char(phrase[i], rotation);
	}
	return phrase;
}