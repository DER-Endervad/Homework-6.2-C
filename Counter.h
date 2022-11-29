#pragma once
class Counter
{
private:
	int value;

public:
	Counter();

	Counter(int value);

	void add_value();

	void sub_value();

	void balance();
};

