#include "MovieLibrary.h"

int main() {
	MovieLibrary library;
	
	library.display();

	library.add_movie("Big", "PG-13", 2);
	library.add_movie("Star Wars", "PG", 5);
	library.add_movie("Cinderella", "PG", 7);

	library.display();

	library.add_movie("Cinderella", "PG", 7);
	library.add_movie("Ice Age", "PG", 12);

	library.display();

	library.watch("Big");
	library.watch("Ice Age");

	library.display();

	library.watch("XXX");

	return 0;
}