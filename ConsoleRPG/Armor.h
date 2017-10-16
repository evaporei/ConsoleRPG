#pragma once
#include "Item.h"
class Armor :
	public Item
{
private:
	int type;
	int defense;
public:
	Armor(int type, int defense, std::string name, int level, int buyValue, int sellValue, int rarity);
	~Armor();

	std::string getAsString();
};

