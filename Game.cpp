#include <iostream>
#include "Game.h"
#include "UI.h"
#include "Model.h"



void Game::StartGame()
{

	int		turn = 0;
	bool	gameEnd = false;
	bool	moveVerification;
	char	currentPlayer;

	UI		UI;
	Model	model;
	UI.PrintBoard(model.board);
	
	
	
	while (!gameEnd)
	{
		int	 playerMove;

		
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
			gameEnd = model.VictoryVerification(currentPlayer);
		}
		else
		{
			UI.PrintMessage("Invalid move!\n");
		}

		UI.PrintBoard(model.board);

		if (gameEnd)
		{
			std::string player{currentPlayer};
			std::string winnerMessage = "Player " + player + " Wins!";
			UI.PrintMessage(winnerMessage);
		}
		

	}


}
