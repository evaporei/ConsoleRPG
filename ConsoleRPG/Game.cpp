#include "Game.h"

Game::Game()
{
	this->choice = 0;
	this->activeCharacter = 0;
	this->fileName = "characters.txt";
}


Game::~Game()
{
}

void Game::start()
{
	this->playing = true;
}

void Game::initialize()
{
	this->createNewCharacter();
}

void Game::mainMenu()
{
	bool firstTime = true;
	do {
		if (!firstTime)
			std::cout << "Choice not found." << std::endl;

		std::cout << "= MAIN MENU =" << std::endl;
		std::cout << "0: Quit" << std::endl;
		std::cout << "1: Travel" << std::endl;
		std::cout << "2: Shop" << std::endl;
		std::cout << "3: Level Up" << std::endl;
		std::cout << "4: Rest" << std::endl;
		std::cout << "5: Character Sheet" << std::endl;
		std::cout << "6: Create new character" << std::endl;
		std::cout << "7: Save characters" << std::endl;
		std::cout << "8: Load characters" << std::endl;
		std::cout << std::endl;

		this->choice = this->readPlayerChoice();
		std::cout << std::endl;

		firstTime = false;
	} while (!this->isPlayerChoiceValid(this->choice));

	switch (this->choice)
	{
	case 0:
		endGame();
		break;
	case 5:
		this->characters[activeCharacter].print();
		break;
	case 6:
		this->createNewCharacter();
		break;
	case 7:
		this->saveCharacters();
		break;
	case 8:
		break;
	default:// case not implemented
		endGame();
	}
}

int Game::readPlayerChoice()
{
	std::cout << std::endl << "Choice: ";
	std::string playerInput;
	std::getline(std::cin, playerInput);
	int playerChoice = atoi(playerInput.c_str());
	return playerChoice;
}

bool Game::isPlayerChoiceValid(int playerChoice)
{
	return playerChoice >= 0 && playerChoice <= this->numberOfChoices;
}

void Game::createNewCharacter()
{
	this->characters.emplace_back();
	this->activeCharacter = this->characters.size() - 1;
	this->characters[activeCharacter].initialize();
}

void Game::saveCharacters()
{
	std::ofstream charactersFile;
	charactersFile.open(this->fileName);
	for (int i = 0; i < this->characters.size(); i++)
	{
		charactersFile << this->characters[i].getAsString() << "\n";
	}
	charactersFile.close();
}

void Game::loadCharacters()
{

}

void Game::endGame()
{
	this->playing = false;
}