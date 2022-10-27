#include "Board.h"
#include <iostream>
using namespace std;

void Board::boardSetup()
{
	for (int rows = 0; rows < row; rows++)
	{
		for (int columns = 0; columns < column; columns++)
		{
			board[rows][columns] = '\0';
		}
	}


	for (int rows = 0; rows < row; rows++)
	{
		for (int columns = 0; columns < column; columns++)
		{
			board[0][0] = 'r';
			board[0][7] = 'r';
			board[7][0] = 'R';
			board[7][7] = 'R';
			board[0][1] = 'n';
			board[0][6] = 'n';
			board[7][1] = 'N';
			board[7][6] = 'N';
			board[0][2] = 'b';
			board[0][5] = 'b';
			board[7][2] = 'B';
			board[7][5] = 'B';
			board[0][3] = 'q';
			board[7][3] = 'Q';
			board[0][4] = 'k';
			board[7][4] = 'K';
			for (int rows = 0; rows < row; rows++)
			{
				for (int columns = 0; columns < column; columns++)
				{
					board[6][columns] = 'P';
					board[1][columns] = 'p';
				}
			}
		}
	}
	//dispalying the board for the first time, for the players to see how it looks
	cout << "How the board looks now:" << endl;
	for (int rows = 0; rows < row; rows++)
	{
		for (int columns = 0; columns < column; columns++)
		{
			if (board[rows][columns] == '\0') board[rows][columns] = '.';
			cout << board[rows][columns];
		}
		cout << endl;
	}
}

void Board::printBoard()
{
	for (int rows = 0; rows < row; rows++)
	{
		for (int columns = 0; columns < column; columns++)
		{
			cout << board[rows][columns];
		}
		cout << endl;
	}
}
