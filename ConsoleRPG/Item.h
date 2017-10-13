#pragma once

#include <string>

class Item
{
private:
	std::string name;
	int level;
	int buyValue;
	int sellValue;
	int rarity;
public:
	Item(std::string name, int level, int buyValue, int sellValue, int rarity);
	~Item();
};

