#include "Armor.h"

Armor::Armor(int type = 0, int defense = 0, std::string name = "NONE", int level = 0, int buyValue = 0, int sellValue = 0, int rarity = 0) : Item(name, level, buyValue, sellValue, rarity)
{
	this->type = type;
	this->defense = defense;
}

Armor::~Armor()
{
}

std::string Armor::getAsString()
{
	return std::to_string(this->type) + " " + std::to_string(this->defense);
}