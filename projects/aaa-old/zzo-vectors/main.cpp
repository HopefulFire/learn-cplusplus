#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

	cout << vowels.at(0) << endl;
	cout << vowels.at(4) << endl;

	vector <int> test_scores {100, 98, 89};

	cout << "\nTest scores using array syntax\n";
	cout << test_scores[0] << endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl;

	cout << "\nTest scores using vector syntax\n";
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << "There are " << test_scores.size() << " scores in the vector\n";

	cout << "\nEnter 3 test scores: ";
	cin >> test_scores.at(0);
	cin >> test_scores.at(1);
	cin >> test_scores.at(2);

	cout << "\nUpdated test scores:\n";
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;

	cout << "\nEnter two scores to add: ";

	int score_to_add {0};
	cin >> score_to_add;
	test_scores.push_back(score_to_add);
	cin >> score_to_add;
	test_scores.push_back(score_to_add);

	cout << "Test scores are now: \n";
	for (unsigned int i {0}; i < test_scores.size(); i++)
	{
		cout << test_scores.at(i) << endl;
	}
	cout << "There are now " << test_scores.size() << " scores in the vector\n";

	//cout << "This should cause an exception!! " << test_scores.at(10);
	//A bunch of stuff about 2 dimensional vectors
}