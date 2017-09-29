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

void Character::initialize(const std::string name)
{
	this->name = name;
	this->level = 1;
	this->experience = 0;
	this->experienceForNextLevel = this->calculateExperienceForNextLevel(this->level);
	this->health = 10;
	this->maximumHealth = 10;
	this->stamina = 10;
	this->minimumDamage = 1;
	this->maximumDamage = 4;
	this->defense = 1;
}

int Character::calculateExperienceForNextLevel(const int level)
{
	return (50 / 3) * (pow(level, 3) - 6 * pow(level, 3) + (17 * level) - 11)
}
