#pragma once

#include <string>

class Character
{
public:
	Character();
	virtual ~Character();

	void initialize(int intialLevel, std::string intialName);

	inline const int& getXPosition() const { return xPosition; }
	inline const int& getYPosition() const { return yPosition; }

	inline const std::string& getName() const { return name; }
	inline const int& getLevel() const { return level; }
	inline const int& getExperience() const { return experience; }
	inline const int& getExperienceForNextLevel() const { return experienceForNextLevel; }
	inline const int& getHealth() const { return health; }
	inline const int& getMaximumHealth() const { return maximumHealth; }
	inline const int& getStamina() const { return stamina; }
	inline const int& getMinimumDamage() const { return minimumDamage; }
	inline const int& getMaximumDamage() const { return maximumDamage; }
	inline const int& getDefense() const { return defense;  }

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
	int minimumDamage;
	int maximumDamage;
	int defense;
};

