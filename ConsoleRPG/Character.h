#pragma once

#include <string>
#include <iostream>
#include <iomanip>

class Character
{
public:
	Character();
	virtual ~Character();

	void initialize();
	int calculateExperienceForNextLevel(const int level);
	void print();
	void levelUp();

	inline const int& getXPosition() const { return this->xPosition; }
	inline const int& getYPosition() const { return this->yPosition; }

	inline const std::string& getName() const { return this->name; }
	inline const int& getLevel() const { return this->level; }
	inline const int& getExperience() const { return this->experience; }
	inline const int& getExperienceForNextLevel() const { return this->experienceForNextLevel; }
	inline const int& getHealth() const { return this->health; }
	inline const int& getMaximumHealth() const { return this->maximumHealth; }
	inline const int& getStamina() const { return this->stamina; }
	inline const int& getMinimumDamage() const { return this->minimumDamage; }
	inline const int& getMaximumDamage() const { return this->maximumDamage; }
	inline const int& getDefense() const { return this->defense;  }

private:
	double xPosition;
	double yPosition;

	std::string name;
	int level;
	int experience;
	int experienceForNextLevel;
	int health;
	int maximumHealth;
	int stamina;
	int maximumStamina;
	int minimumDamage;
	int maximumDamage;
	int defense;

	int statPoints;
	int skillPoints;

	int strength;
	int vitality;
	int dexterity;
	int intelligence;

	std::string readName();
};

