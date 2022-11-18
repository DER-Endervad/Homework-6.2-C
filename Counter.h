#pragma once
#include <iostream>
class Counter
{
private:
	int value;

public:
	Counter() {
		value = 1;
	}

	Counter(int value) {
		this->value = value;
	}

	void add_value() {
		value++;
	}

	void sub_value() {
		value--;
	}

	void balance() {
		std::cout << "Показания счетчика: " << value << std::endl;
	}
};

