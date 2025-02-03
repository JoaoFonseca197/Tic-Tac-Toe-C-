#include "Model.h"

void Model::MakeMove(int position, State player)
{
	board[position - 1] = player;
}
