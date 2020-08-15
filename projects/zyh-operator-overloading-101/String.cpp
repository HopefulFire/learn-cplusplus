#include "String.h"

char *String::get_str() const {
	return str;
}

String::String()
:	str{new char[1]} {
	*str = '\0';
}

String::String(const char *source)
:	str{new char[std::strlen(source) + 1]} {
	std::strcpy(str, source);
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

String &String::operator=(const String &source) {
	str = new char[std::strlen(source.str) + 1];
	std::strcpy(str, source.str);
	return *this;
}

String &String::operator=(String &&source) {
	str = source.str;
	source.str = nullptr;
	return *this;
}

String operator+(const String &lhs, const String &rhs) {
	char *buff{new char[std::strlen(lhs.get_str()) + std::strlen(rhs.get_str()) + 1]};
	std::strcpy(buff, lhs.get_str());
	std::strcat(buff, rhs.get_str());
	return String{buff};
}

String &operator+=(String &lhs, const String &rhs) {
	
}

bool operator==(const String &lhs, const String &rhs) {
	if (std::strcmp(lhs.get_str(), rhs.get_str()) == 0) {
		return true;
	}
	return false;
}

bool operator!=(const String &lhs, const String &rhs) {
	if (lhs == rhs) {
		return false;
	}
	return true;
}

bool operator<(const String &lhs, const String &rhs) {
	if (std::strlen(lhs.get_str()) < std::strlen(lhs.get_str())) {
		return true;
	}
	return false;
}

bool operator<=(const String &lhs, const String &rhs) {
	if (lhs < rhs || lhs == rhs) {
		return true;
	}
	return false;
}

bool operator>(const String &lhs, const String &rhs) {
	if (std::strlen(lhs.get_str()) > std::strlen(lhs.get_str())) {
		return true;
	}
	return false;
}

bool operator>=(const String &lhs, const String &rhs) {
	if (lhs > rhs || lhs == rhs) {
		return true;
	}
	return false;
}