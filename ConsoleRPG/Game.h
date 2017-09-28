#pragma once

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

class Game
{
public:
	Game();
	virtual ~Game();

	void start();
	void endGame();
	void mainMenu();

	bool isPlaying() const;
private:
	int choice;
	bool playing;

	const int numberOfChoices = 0;

	int readPlayerChoice();
	bool isPlayerChoiceValid(int playerChoice);
};

