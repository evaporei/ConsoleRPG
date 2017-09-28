#include "Character.h"



Character::Character()
{
	name = "";
	level = 0;
	experience = 0;
	experienceForNextLevel = 0;
	health = 0;
	maximumHealth = 0;
	stamina = 0;
	minimumDamage = 0;
	maximumDamage = 0;
	defense = 0;
}


Character::~Character()
{
}

void Character::initialize(int intialLevel, std::string initialName)
{
	name = initialName;
	level = intialLevel;
	experience = 0;
	experienceForNextLevel = 100;
	health = 10;
	maximumHealth = 10;
	stamina = 10;
	minimumDamage = 2;
	maximumDamage = 4;
	defense = 1;
}
