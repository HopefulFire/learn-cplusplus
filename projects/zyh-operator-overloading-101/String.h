#pragma once
#include <iostream>
#include <cstring>

class String {
	friend bool operator==(const String &lhs, const String &rhs);
	friend String operator-(const String &obj);
	friend String operator+(const String &lhs, const String &rhs);
	friend std::ostream &operator<<(std::ostream &os, const String &rhs);
	friend std::istream &operator>>(std::istream &is, String &rhs);
private:
	char *str;
public:
	String(); // no args constructor
	String(const char *s); // overloaded constructor
	String(const String &source); // copy constructor
	String(String &&source); // move constructor
	~String(); // destructor
	String &operator=(const String &rhs); // copy assignment
	String &operator=(String &&rhs); // move assignment
	// getters and display 
	void display() const;
	int get_length() const;
	const char *get_str() const;
};