#pragma once
#include <string>

class Movie {
private:
	std::string name;
	std::string rating;
	size_t watched;
public:
	std::string get_name() const {
		return name;
	}
	std::string get_rating() const {
		return rating;
	}
	size_t get_watched() const {
		return watched;
	}
	void watch() {
		watched++;
	}
	Movie(std::string name_val, std::string rating_val = "PG", size_t watched_val = 0)
	:	name{name_val}, rating{rating_val}, watched{watched_val} {
	}
};