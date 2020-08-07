#pragma once

class Deep {
private:
	int *data;
public:
	int get_data_value() {
		return *data;
	}
	void set_data_value(int d) {
		*data = d;
	}
	Deep(int d) {
		data = new int;
		*data = d;
	}
	Deep(const Deep &source)
		: Deep{*source.data} {
	}
	~Deep() {
		delete data;
	}
};