#include "Weapon.h"


Weapon::Weapon(int minimumDamage, int maximumDamage, std::string name, int level, int buyValue, int sellValue, int rarity) : Item(name, level, buyValue, sellValue, rarity)
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
