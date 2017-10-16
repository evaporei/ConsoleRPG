#include "Weapon.h"


Weapon::Weapon(int minimumDamage = 0, int maximumDamage = 0, std::string name = "NONE", int level = 0, int buyValue = 0, int sellValue = 0, int rarity = 0) : Item(name, level, buyValue, sellValue, rarity)
{
	this->minimumDamage = minimumDamage;
	this->maximumDamage = maximumDamage;
}

Weapon::~Weapon()
{
}

Weapon* Weapon::clone() const
{
	return new Weapon(*this);
}

std::string Weapon::getAsString()
{
	return std::to_string(this->minimumDamage) + " " + std::to_string(this->maximumDamage);
}
