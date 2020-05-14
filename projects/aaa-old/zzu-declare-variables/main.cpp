#include <iostream>

// This program will calculate the area of a room in sq ft

int main() {

	std::cout << "Enter the width of the room: ";
	int room_width {0};
	std::cin >> room_width;

	std::cout << "Enter the length of the room: ";
	int room_length {0};
	std::cin >> room_length;

	std::cout << "The area of the room is " << room_width * room_length << "\n";

	return 0;
}