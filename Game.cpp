#include "Game.h"
#include <iostream>


void Game::StartGame()
{

	int turn = 0;
	bool gameEnd = false;

	bool x;

	while (!gameEnd)
	{
		std::cout << "Entered game";
		std::cin >> x;
		if (x == 0)
		{
			gameEnd = true;
			std::cout << "Exiting game";
		}
	}


}
