#pragma once

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Character.h"

class Game
{
public:
	Game();
	virtual ~Game();

	void start();
	void endGame();
	void initialize();
	void mainMenu();

	inline const bool& isPlaying() const { return this->playing; };
private:
	int choice;
	bool playing;

	const int numberOfChoices = 5;

	Character character;

	int readPlayerChoice();
	bool isPlayerChoiceValid(int playerChoice);
};

