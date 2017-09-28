#pragma once

#include <iostream>
#include <iomanip>
#include <ctime>

class Game
{
public:
	Game();
	virtual ~Game();

	void start();
	void endGame();
	void mainMenu();

	inline const bool& isPlaying() const { return this->playing; };
private:
	int choice;
	bool playing;

	const int numberOfChoices = 0;

	int readPlayerChoice();
	bool isPlayerChoiceValid(int playerChoice);
};

