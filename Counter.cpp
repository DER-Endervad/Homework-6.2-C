#include "Counter.h"
#include <iostream>

Counter::Counter() {
	value = 1;
}

Counter::Counter(int value) {
	this->value = value;
}

void Counter::add_value() {
	value++;
}

void Counter::sub_value() {
	value--;
}

void Counter::balance() {
	std::cout << "Показания счетчика: " << value << std::endl;
}
