#include "Armor.h"

Armor::Armor(int type = 0, int defense = 0, std::string name = "NONE", int level = 0, int buyValue = 0, int sellValue = 0, int rarity = 0) : Item(name, level, buyValue, sellValue, rarity)
{
	this->type = type;
	this->defense = defense;
}

Armor::~Armor()
{
}

Armor* Armor::clone() const
{
	return new Armor(*this);
}

std::string Armor::getAsString()
{
	return std::to_string(this->type) + " " + std::to_string(this->defense);
}