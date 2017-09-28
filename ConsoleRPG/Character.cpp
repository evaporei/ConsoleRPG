#include "Character.h"



Character::Character()
{
	this->name = "";
	this->level = 0;
	this->experience = 0;
	this->experienceForNextLevel = 0;
	this->health = 0;
	this->maximumHealth = 0;
	this->stamina = 0;
	this->minimumDamage = 0;
	this->maximumDamage = 0;
	this->defense = 0;
}


Character::~Character()
{
}

void Character::initialize(int intialLevel, std::string initialName)
{
	this->name = initialName;
	this->level = intialLevel;
	this->experience = 0;
	this->experienceForNextLevel = 100;
	this->health = 10;
	this->maximumHealth = 10;
	this->stamina = 10;
	this->minimumDamage = 2;
	this->maximumDamage = 4;
	this->defense = 1;
}
