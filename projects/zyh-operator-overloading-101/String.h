#pragma once
#include <cstring>
#include <iostream>

class String {
	friend std::ostream &operator<<(std::ostream &os, const String &rhs);
	friend std::istream &operator>>(std::istream &is, String &rhs);
private:
	char *str;
public:
	String();
	String(const char *source);
	String(const String &source);
	String(String &&source);
	~String();
	String &operator=(const String &rhs);
	String &operator=(String &&rhs);

	String operator+(const String &rhs) const;
	String &operator+=(const String &rhs);
	String operator*(const size_t &rhs) const;
	String &operator*=(const size_t &rhs);
	String &operator--();
	String operator--(int);
	String &operator++();
	String operator++(int);

	bool operator==(const String &rhs) const;
	bool operator!=(const String &rhs) const;
	bool operator<(const String &rhs) const;
	bool operator>(const String &rhs) const;
	bool operator<=(const String &rhs) const;
	bool operator>=(const String &rhs) const;
};