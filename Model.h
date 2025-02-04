#pragma once
#include "State.h"
class Model
{
	private:
		int turn = 0;
		//State board[9] = { X,X,X,X,X,X,X,X,X };

	public :
		int		getTurn();
		bool	VerifyMove(int position);
		void	MakeMove(int position, char player);
		bool	VictoryVerification(char player);
		char board[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' '};

};

