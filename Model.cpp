#include "Model.h"

int Model::getTurn()
{
	return turn;
}

bool Model::VerifyMove(int position)
{
	if (board[position - 1] == ' ')
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Model::MakeMove(int position, char player)
{
	board[position - 1] = player;
	turn += 1;
}

bool Model::VictoryVerification(char player)
{
	if (player == board[0] && board[0] == board[1] && board[1] == board[2] ||
		player == board[3] && board[3] == board[4] && board[4] == board[5] ||
		player == board[6] && board[6] == board[7] && board[7] == board[8] ||
		player == board[0] && board[0] == board[3] && board[3] == board[6] ||
		player == board[1] && board[1] == board[4] && board[4] == board[7] ||
		player == board[2] && board[2] == board[5] && board[5] == board[8] ||
		player == board[0] && board[0] == board[4] && board[4] == board[8] ||
		player == board[2] && board[2] == board[4] && board[4] == board[6] )
	{
		return true;
	}


	return false;
}


