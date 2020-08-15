#pragma once
#include <cstring>

class String {
private:
	char *str;
public:
	char *get_str() const;

	String();
	String(const char *source);
	String(const String &source);
	String(String &&source);
	~String();

	String &operator=(const String &source);
	String &operator=(String &&source);
};