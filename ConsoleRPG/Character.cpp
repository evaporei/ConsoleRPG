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
	this->luck = 0;

	this->statPoints = 0;
	this->skillPoints = 0;
}


Character::~Character()
{
}

std::string Character::readName()
{
	std::string name = "";
	std::cout << "Enter name for character: ";
	std::getline(std::cin, name);
	return name;
}

void Character::initialize()
{
	this->xPosition = 0.0;
	this->yPosition = 0.0;

	this->name = this->readName();
	this->level = 1;
	this->experience = 0;
	this->experienceForNextLevel = this->calculateExperienceForNextLevel(this->level);

	this->strength = 5;
	this->vitality = 5;
	this->dexterity = 5;
	this->intelligence = 5;

	this->maximumHealth = (this->vitality * 2) + (this->strength / 2);
	this->health = this->maximumHealth;
	this->maximumStamina = this->vitality + (this->strength / 2) + (this->dexterity / 3);
	this->stamina = this->maximumStamina;
	this->minimumDamage = this->strength;
	this->maximumDamage = this->strength + 2;
	this->defense = this->dexterity + (this->intelligence / 2);
	this->luck = this->intelligence;

	this->statPoints = 0;
	this->skillPoints = 0;
}

int Character::calculateExperienceForNextLevel(const int level)
{
	return static_cast<int>((50 / 3) * (pow(level, 3) - 6 * pow(level, 2) + (17 * level) - 12)) + 100;
}

std::string Character::getAsString() const
{
	return std::to_string(this->xPosition) + " "
		+ std::to_string(this->yPosition) + " "
		+ this->name + " "
		+ std::to_string(this->level) + " "
		+ std::to_string(this->experience) + " "
		+ std::to_string(this->strength) + " "
		+ std::to_string(this->vitality) + " "
		+ std::to_string(this->dexterity) + " "
		+ std::to_string(this->intelligence) + " "
		+ std::to_string(this->health) + " "
		+ std::to_string(this->stamina) + " "
		+ std::to_string(this->statPoints) + " "
		+ std::to_string(this->skillPoints);
}

void Character::print()
{
	std::cout << "= Character Sheet =" << std::endl;
	std::cout << "= Name: " << this->name << std::endl;
	std::cout << "= Level: " << this->level << std::endl;
	std::cout << "= Experience: " << this->experience << std::endl;
	std::cout << "= Experience to next level: " << this->experienceForNextLevel << std::endl;
	std::cout << std::endl;
	std::cout << "= Strength: " << this->strength << std::endl;
	std::cout << "= Vitality: " << this->vitality << std::endl;
	std::cout << "= Dexterity: " << this->dexterity << std::endl;
	std::cout << "= Intelligence: " << this->intelligence << std::endl;
	std::cout << std::endl;
	std::cout << "= HP: " << this->health << " / " << this->maximumHealth << std::endl;
	std::cout << "= Stamina: " << this->stamina << " / " << this->maximumStamina << std::endl;
	std::cout << "= Damage: " << this->minimumDamage << " / " << this->maximumDamage << std::endl;
	std::cout << "= Defense: " << this->defense << std::endl;
	std::cout << "= Luck: " << this->luck << std::endl;
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
