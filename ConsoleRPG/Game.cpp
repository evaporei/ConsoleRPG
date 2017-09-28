#include "Game.h"

Game::Game()
{
	this->choice = 0;
}


Game::~Game()
{
}

void Game::start()
{
	this->playing = true;
}

void Game::mainMenu()
{
	bool firstTime = true;
	do {
		if (!firstTime)
			std::cout << "Choice not found." << std::endl;

		std::cout << "MAIN MENU" << std::endl;
		std::cout << "0: Quit" << std::endl;
		// std::cout << "1: Travel" << std::endl;
		// std::cout << "2: Shop" << std::endl;
		// std::cout << "3: Level Up" << std::endl;
		// std::cout << "4: Rest" << std::endl;

		this->choice = readPlayerChoice();

		firstTime = false;
	} while (!isPlayerChoiceValid(this->choice));

	switch (this->choice)
	{
	case 0:
		endGame();
		break;
	}
}

int Game::readPlayerChoice()
{
	std::cout << std::endl << "Choice: ";
	int playerChoice;
	std::cin >> playerChoice;
	return playerChoice;
}

bool Game::isPlayerChoiceValid(int playerChoice)
{
	return playerChoice >= 0 && playerChoice <= this->numberOfChoices;
}

void Game::endGame()
{
	this->playing = false;
}