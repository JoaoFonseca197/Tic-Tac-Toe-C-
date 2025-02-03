#include <iostream>
#include "Game.h"
#include "UI.h"
#include "Model.h"



void Game::StartGame()
{

	int		turn = 0;
	bool	gameEnd = false;
	bool	moveVerification;
	UI		UI;
	Model	model;
	int		playerMove;
	UI.PrintBoard(model.board);
	
	
	
	while (!gameEnd)
	{
		char currentPlayer;
		
		if (model.getTurn() % 2 == 0)
		{
			currentPlayer = 'X';
			UI.PrintMessage("Player X make your move\n");
		}
		else
		{
			currentPlayer = 'O';
			UI.PrintMessage("Player O make your move\n");
		}

		std::cin >> playerMove;
		moveVerification = model.VerifyMove(playerMove);

		if (moveVerification)
		{
			model.MakeMove(playerMove,currentPlayer);
		}
		UI.PrintBoard(model.board);

	}


}
