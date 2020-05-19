#include <iostream>
#include <vector>

using namespace std;

char get_selection();

void display_collection(vector<int> collection);
int get_number();
void display_mean(vector<int> collection);
void display_smallest(vector<int> collection);
void display_largest(vector<int> collection);


int main()
{
	vector<int> collection {};
	
	char selection {get_selection()};

	while (selection != 'Q')
	{
		if (selection == 'D')
		{
			display_collection(collection);
		}
		else if (selection == 'A')
		{
			collection.push_back(get_number());
		}
		else if (selection == 'M')
		{
			display_mean(collection);
		}
		else if (selection == 'S')
		{
			display_smallest(collection);
		}
		else if (selection == 'L')
		{
			display_largest(collection);
		}

		selection = get_selection();
	}

	return 0;
}

char get_selection()
{
	char selection {};
	while (selection != 'D' && selection != 'A' && selection != 'M' && selection != 'S' && selection != 'L' && selection != 'Q')
	{	
		cout << "Enter a choice from the menu below:" << endl;
		cout << "D - Display numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit" << endl;
		cin >> selection;
	}
	return selection;
}


void display_collection(vector<int> collection)
{
	cout << "[ ";
	for (auto element: collection)
	{
		cout << element << ' ';
	}
	cout << ']';
	if (collection.size() == 0)
	{
		cout << "<--- Empty";
	}
	cout << endl;
}

int get_number()
{
	int number {};
	cout << "Enter a number to add: ";
	cin >> number;
	return number;
}

void display_mean(vector<int> collection)
{
	double sum {};
	for (auto number: collection)
	{
		sum += number;
	}

	if (collection.size() != 0)
	{
		cout << sum / collection.size() << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}

void display_smallest(vector<int> collection)
{
	int smallest_number {collection.at(0)};
	for (auto number: collection)
	{
		if (smallest_number > number)
		{
			smallest_number = number;
		}
	}
	cout << smallest_number << endl;
}

void display_largest(vector<int> collection)
{
	int largest_number {collection.at(0)};
	for (auto number: collection)
	{
		if (largest_number < number)
		{
			largest_number = number;
		}
	}
	cout << largest_number << endl;
}