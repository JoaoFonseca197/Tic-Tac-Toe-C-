#pragma once
#include "State.h"
class Model
{
	private: 
		//State board[9] = { X,X,X,X,X,X,X,X,X };

	public :
		void MakeMove(int position, State player);
		State board[9] = { X,X,X,X,X,X,X,X,X };

};

