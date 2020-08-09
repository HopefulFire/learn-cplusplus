#include <cstring>
#include <iostream>
#include "String.h"

String::String()
:	str(nullptr) {
	str = new char[1];
	*str = '\0';
}

String::String(const char *s)
:	str{nullptr} {
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	} else {
		str = new char[std::strlen(s) + 1];
		std::strcpy(str, s);
	}
}

String::String(const String &source)
:	str{nullptr} {
	str = new char[std::strlen(source.str) + 1];
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
		delete [] this->str;
		str = new char[std::strlen(rhs.str) + 1];
		std::strcpy(this->str, rhs.str);
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

void String::display() const {
	std::cout << str << " : " << get_length() << std::endl;
}

int String::get_length() const {
	return std::strlen(str);
}

const char *String::get_str() const {
	return str;
}