#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int num {10};
	cout << num << endl;
	cout << sizeof num << endl;
	cout << &num << endl;

	int *p;
	cout << p << endl;
	cout << sizeof p << endl;
	cout << &p << endl;

	p = nullptr;
	cout << p << endl;

	int *p1 {nullptr};
	double *p2 {nullptr};
	size_t *p3 {nullptr};
	vector<string> *p4 {nullptr};
	string *p5 {nullptr};

	cout << sizeof p1 << endl;
	cout << sizeof p2 << endl;
	cout << sizeof p3 << endl;
	cout << sizeof p4 << endl;
	cout << sizeof p5 << endl;

	int score {10};
	double high_temp {100.7};

	int *score_pointer {nullptr};

	score_pointer = &score;
	cout << score << endl;
	cout << &score << endl;
	cout << score_pointer << endl;
}