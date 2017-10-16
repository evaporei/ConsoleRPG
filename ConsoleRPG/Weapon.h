#pragma once
#include <string>
#include "Item.h"
class Weapon :
	public Item
{
private:
	int minimumDamage;
	int maximumDamage;
public:
	Weapon(int minimumDamage = 0, int maximumDamage = 0, std::string name = "NONE", int level = 0, int buyValue = 0, int sellValue = 0, int rarity = 0);
	~Weapon();

	virtual Weapon* clone() const;

	std::string getAsString();
};

