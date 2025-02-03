#include "UI.h"

void UI::PrintMessage( std::string message )
{
	std::cout << message;
}

void UI::PrintBoard(char board[])
{
	std::cout << "|  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  |\n";
	std::cout << "|-----|-----|-----|\n";
	std::cout << "|  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  | \n";
	std::cout << "|-----|-----|-----|\n";
	std::cout << "|  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  | \n";
	/*for (int i = 0; i < 9; i++)
	{

	}*/
}

