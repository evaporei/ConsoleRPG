#include "Game.h"

Game::Game()
{
	choice = 0;
}


Game::~Game()
{
}

void Game::start()
{
	playing = true;
}

void Game::mainMenu()
{
	bool firstTime = true;
	do {
		if (!firstTime)
			cout << "Choice not found." << endl;

		cout << "MAIN MENU" << endl;
		cout << "0: Quit" << endl;
		// cout << "1: Travel" << endl;
		// cout << "2: Shop" << endl;
		// cout << "3: Level Up" << endl;
		// cout << "4: Rest" << endl;

		choice = readPlayerChoice();

		firstTime = false;
	} while (!isPlayerChoiceValid(choice));

	switch (choice)
	{
	case 0:
		endGame();
		break;
	}
}

int Game::readPlayerChoice()
{
	cout << endl << "Choice: ";
	int playerChoice;
	cin >> playerChoice;
	return playerChoice;
}

bool Game::isPlayerChoiceValid(int playerChoice)
{
	return playerChoice >= 0 && playerChoice <= numberOfChoices;
}

void Game::endGame()
{
	playing = false;
}