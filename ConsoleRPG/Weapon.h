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
	Weapon(int minimumDamage, int maximumDamage, std::string name, int level, int buyValue, int sellValue, int rarity);
	~Weapon();

	virtual Weapon* clone() const;

	std::string getAsString();
};

