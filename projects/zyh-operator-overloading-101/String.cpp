#include "String.h"

std::ostream &operator<<(std::ostream &os, const String &rhs) {
	os << rhs.str;
	return os;
}

std::istream &operator>>(std::istream &is, String &rhs) {
	delete [] rhs.str;
	rhs.str = new char[is.gcount() + 1];
	is >> rhs.str;
	return is;
}

String::String() 
:	str{new char[1]} {
	*str = '\0';
}

String::String(const char *source)
:	str{nullptr} {
	if (source == nullptr) {
		str = new char[1];
		*str = '\0';
	} else {
		str = new char[std::strlen(source) + 1];
		std::strcpy(str, source);
	}
}

String::String(const String &source)
:	str{new char[std::strlen(source.str) + 1]} {
	std::strcpy(str, source.str);
}

String::String(String &&source)
:	str{source.str} {
	source.str = nullptr;
}

String::~String() {
	delete [] str;
}

String &String::operator=(const String &rhs) {
	if (this != &rhs) {
		delete [] str;
		str = new char[std::strlen(rhs.str) + 1];
		std::strcpy(str, rhs.str);
	}
	return *this;
}

String &String::operator=(String &&rhs) {
	if (this != &rhs) {
		delete [] str;
		str = rhs.str;
		rhs.str = nullptr;
	}
	return *this;
}

String String::operator+(const String &rhs) const {
	char *buff{new char[std::strlen(str) + std::strlen(rhs.str) + 1]};
	std::strcpy(buff, str);
	std::strcat(buff, rhs.str);
	String temp{buff};
	delete [] buff;
	return temp;
}

String &String::operator+=(const String &rhs) {
	*this = *this + rhs;
	return *this;
}

String String::operator*(const size_t &rhs) const {
	char *buff{new char[std::strlen(str) * rhs + 1]};
	std::strcpy(buff, str);
	for (size_t i{0}; i < rhs - 1; ++i) {
		std::strcat(buff, str);
	}
	String temp{buff};
	delete [] buff;
	return temp;
}

String &String::operator*=(const size_t &rhs) {
	*this = *this * rhs;
	return *this;
}

String &String::operator--() {
	for (size_t i{0}; i < std::strlen(str); ++i) {
		str[i] = std::tolower(str[i]);
	}
	return *this;
}

String String::operator--(int) {
	String temp{*this};
	--*this;
	return temp;
}

String &String::operator++() {
	for (size_t i{0}; i < std::strlen(str); ++i) {
		str[i] = std::toupper(str[i]);
	}
	return *this;
}

String String::operator++(int) {
	String temp{*this};
	++*this;
	return temp;
}

bool String::operator==(const String &rhs) const {
	if (std::strcmp(str, rhs.str) == 0) {
		return true;
	}
	return false;
}

bool String::operator!=(const String &rhs) const {
	if (std::strcmp(str, rhs.str) != 0) {
		return true;
	}
	return false;
}

bool String::operator<(const String &rhs) const {
	if (std::strlen(str) < std::strlen(rhs.str)) {
		return true;
	}
	return false;
}

bool String::operator>(const String &rhs) const {
	if (std::strlen(str) > std::strlen(rhs.str)) {
		return true;
	}
	return false;
}

bool String::operator<=(const String &rhs) const {
	if (*this < rhs || *this == rhs) {
		return true;
	}
	return false;
}

bool String::operator>=(const String &rhs) const {
	if (*this > rhs || *this == rhs) {
		return true;
	}
	return false;
}