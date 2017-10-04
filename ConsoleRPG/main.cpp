#include "Game.h"

int main()
{
	srand(time(NULL));

	Game game;
	game.initialize();
	game.start();

	while (game.isPlaying())
	{
		game.mainMenu();
	}
	return 0;
}