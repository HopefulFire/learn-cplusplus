#pragma once
class String {
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
	// getters
	void display() const;
	int get_length() const;
	const char *get_str() const;
};