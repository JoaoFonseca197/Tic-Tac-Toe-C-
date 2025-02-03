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


