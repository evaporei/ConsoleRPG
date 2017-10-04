#include "Character.h"



Character::Character()
{
	this->xPosition = 0.0;
	this->yPosition = 0.0;

	this->name = "";
	this->level = 0;
	this->experience = 0;
	this->experienceForNextLevel = 0;
	
	this->strength = 0;
	this->vitality = 0;
	this->dexterity = 0;
	this->intelligence = 0;
	
	this->health = 0;
	this->maximumHealth = 0;
	this->stamina = 0;
	this->maximumStamina = 0;
	this->minimumDamage = 0;
	this->maximumDamage = 0;
	this->defense = 0;

	this->statPoints = 0;
	this->skillPoints = 0;
}


Character::~Character()
{
}

void Character::initialize(const std::string name)
{
	this->xPosition = 0.0;
	this->yPosition = 0.0;

	this->name = name;
	this->level = 1;
	this->experience = 0;
	this->experienceForNextLevel = this->calculateExperienceForNextLevel(this->level);

	this->strength = 5;
	this->vitality = 5;
	this->dexterity = 5;
	this->intelligence = 5;

	this->health = 10;
	this->maximumHealth = 10;
	this->stamina = 10;
	this->maximumStamina = 10;
	this->minimumDamage = 1;
	this->maximumDamage = 4;
	this->defense = 1;

	this->statPoints = 0;
	this->skillPoints = 0;
}

int Character::calculateExperienceForNextLevel(const int level)
{
	return (50 / 3) * (pow(level, 3) - 6 * pow(level, 3) + (17 * level) - 11);
}


void Character::print()
{
	std::cout << "= Character Sheet =" << std::endl;
	std::cout << "= Name: " << this->name << std::endl;
	std::cout << "= Level: " << this->name << std::endl;
	std::cout << "= Experience: " << this->experience << std::endl;
	std::cout << "= Experience to next level: " << this->experienceForNextLevel << std::endl;
	std::cout << std::setw(10) << std::setfill('=') << std::endl;
	std::cout << "= Strength: " << this->strength << std::endl;
	std::cout << "= Vitality: " << this->vitality << std::endl;
	std::cout << "= Dexterity: " << this->dexterity << std::endl;
	std::cout << "= Intelligence: " << this->intelligence << std::endl;
	std::cout << std::setw(10) << std::setfill('=') << std::endl;
	std::cout << "= HP: " << this->health << " / " << this->maximumHealth << std::endl;
	std::cout << "= Stamina: " << this->stamina << " / " << this->maximumStamina << std::endl;
	std::cout << "= Damage: " << this->minimumDamage << " / " << this->maximumDamage << std::endl;
	std::cout << "= Defense: " << this->defense << std::endl;
	std::cout << std::endl;
}

void Character::levelUp()
{
	while (this->experience >= this->experienceForNextLevel)
	{
		this->experience -= this->experienceForNextLevel;
		this->level++;
		this->experienceForNextLevel = this->calculateExperienceForNextLevel(this->level);

		this->statPoints++;
		this->skillPoints++;
	}
}
