#pragma once
#include <iostream>
#include <vector>
#include "Movie.h"

class MovieLibrary {
private:
	std::vector<Movie> movies;
public:
	void display() const {
		std::cout << "==============\n";
		if (movies.size() != 0) {
			for (size_t i{0}; i < movies.size(); i++) {
				Movie movie = movies.at(i);
				std::cout << movie.get_name() << " rated " << movie.get_rating() << " and watched " << movie.get_watched() << " times.\n";
			}
		} else {
			std::cout << "No movies yet!\n";
		}
		std::cout << "==============\n";
	}
	int in_library(std::string name) const {
		for (size_t i{0}; i < movies.size(); i++) {
			if (movies.at(i).get_name() == name) {
				return i;
			}
		}
		return -1;
	}
	void watch(std::string name) {
		if (in_library(name) != -1) {
			movies.at(in_library(name)).watch();
		} else {
			std::cout << "Not in library\n";
		}

	}
	void add_movie(std::string name, std::string rating, size_t watched) {
		if (in_library(name) == -1) {
			Movie movie{name, rating, watched};
			movies.push_back(movie);
			std::cout << name << " added to library\n";
		} else {
			std::cout << name << " already in library\n";
		}
	}
};