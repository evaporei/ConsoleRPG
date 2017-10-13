#pragma once

#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>
#include <fstream>
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

	void createNewCharacter();
	void saveCharacters();
	void loadCharacters();

	inline const bool& isPlaying() const { return this->playing; };
private:
	int choice;
	bool playing;

	const int numberOfChoices = 8;

	int activeCharacter;
	std::vector<Character> characters;
	std::string fileName;

	int readPlayerChoice();
	bool isPlayerChoiceValid(int playerChoice);
};

