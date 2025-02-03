#include <iostream>
#include "Game.h"
#include "UI.h"
#include "Model.h"



void Game::StartGame()
{

	int turn = 0;
	bool gameEnd = false;
	UI UI;
	Model model;

	UI.PrintBoard(model.board);
	
	/*while (!gameEnd)
	{
		if (turn % 2 == 0)
		{
			UI.PrintMessage("Player X make your move");
		}
		else
		{
			UI.PrintMessage("Player O make your move");
		}
		break;
	}*/


}
