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

	inline const std::string& getName() const { return this->name; }
	inline const int& getLevel() const { return this->level; }
	inline const int& getBuyLevel() const { return this->buyValue; }
	inline const int& getSellValue() const { return this->sellValue; }
	inline const int& getRarity() const { return this->rarity; }
};

