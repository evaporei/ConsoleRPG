#pragma once

#include <string>

class Item
{
private:
	std::string name;
	int buyValue;
	int sellValue;
public:
	Item();
	~Item();
};

