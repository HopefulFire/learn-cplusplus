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

	String operator-() const; // make lowercase (unary -)
	String operator+(const String &rhs) const; // concatenate (binary +)
	bool operator==(const String &rhs) const; // compare (binary ==)
	
	// getters and display 
	void display() const;
	int get_length() const;
	const char *get_str() const;
};