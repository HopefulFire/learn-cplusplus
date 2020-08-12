#include "String.h"

bool operator==(const String &lhs, const String &rhs) {
	return std::strcmp(lhs.str, rhs.str) == 0;
}

String operator-(const String &obj) {
	char *buff = new char[std::strlen(obj.str) + 1];
	std::strcpy(buff, obj.str);
	for (size_t i{0}; i<std::strlen(buff); i++) {
		buff[i] = std::tolower(buff[i]);
	}
	String temp{buff};
	delete [] buff;
	return temp;
}

String operator+(const String &lhs, const String &rhs) {
	char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
	std::strcpy(buff, lhs.str);
	std::strcat(buff, rhs.str);
	String temp{buff};
	delete [] buff;
	return temp;
}

std::ostream &operator<<(std::ostream &os, const String &rhs) {
	os << rhs.str;
	return os;
}

std::istream &operator>>(std::istream &is, String &rhs) {
	char *buff{new char[1000]};
	is >> buff;
	rhs = String{buff};
	return is;
}

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