#include "Armor.h"

Armor::Armor(int type, int defense, std::string name, int level, int buyValue, int sellValue, int rarity) : Item(name, level, buyValue, sellValue, rarity)
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