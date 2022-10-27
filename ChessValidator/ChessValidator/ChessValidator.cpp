
#include <iostream>
#include"Board.h"
#include"Input.h"
using namespace std;

int main()
{
	Board Board;
	Input input;
	Board.boardSetup();

	int movesCounter = 0;
	for (int i = input.fromX, j = input.fromY; i <= input.toX, i <= input.toY; i++)
	{

	}

	int row = 8, column = 8, gameneder = 0;
	do
	{
		if (movesCounter % 2 == 0)
		{
			cout << "White's move: ";
			input.movesInput();
		}
		else
		{
			cout << "Black's move: ";
			input.movesInput();
		}
		char placeholder = Board.board[input.fromX][input.fromY];
		if (Board.board[input.toX][input.toY] == '.' || islower(Board.board[input.toX][input.toY]))
		{
			switch (placeholder)
			{
			case 'K':

				if (abs(input.toX - input.fromX) <= 1 && abs(input.toY - input.fromY) <= 1)
				{
					Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
					Board.board[input.fromX][input.fromY] = '.';
				}
				else cout << "Invalid move!" << endl;
				Board.printBoard();
				break;
			case 'Q':
				if (input.toX == input.fromX || input.toY == input.fromY || abs(input.toX) - input.fromX == abs(input.toY - input.fromY))
				{
					Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
					Board.board[input.fromX][input.fromY] = '.';
				}
				else cout << "Invalid move!" << endl;
				Board.printBoard();
				break;
			case'R':
				if (input.toX == input.fromX || input.toY == input.fromY)
				{
					Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
					Board.board[input.fromX][input.fromY] = '.';
				}
				else cout << "Invalid move!" << endl;
				Board.printBoard();
				break;
			case'B':
				if ((abs(input.toX - input.fromX)) == abs(input.toY - input.fromY))
				{
					Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
					Board.board[input.fromX][input.fromY] = '.';
				}
				else cout << "Invalid move!" << endl;
				Board.printBoard();
				break;
			case'N':
				if ((abs(input.toX - input.fromX) == 1 && abs(input.toY - input.fromY) == 2) || (abs(input.toX - input.fromX) == 2 && abs(input.toY - input.fromY) == 1))
				{
					Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
					Board.board[input.fromX][input.fromY] = '.';
				}
				else cout << "Invalid move!" << endl;
				Board.printBoard();
				break;
			case'P':
				if ((input.toY == input.fromY && abs(input.toX - input.fromX) == 1))
				{
					Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
					Board.board[input.fromX][input.fromY] = '.';
				}
				else if ((input.toY == input.fromY && abs(input.toX - input.fromX) == 2))
				{


					for (int columns = 0; columns < 8; columns++)
					{
						if ((Board.board[input.fromX][input.fromY] == Board.board[6][columns]))
						{
							Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
							Board.board[input.fromX][input.fromY] = '.';
						}
					}

				}
				else cout << "Invalid move!" << endl;

				Board.printBoard();
				break;
			}
		}
		else
		{
			cout << "Invalid move!" << endl;
			if (Board.board[input.toX][input.toY] == '.' || islower(Board.board[input.toX][input.toY]))
			{
				switch (placeholder)
				{
				case 'k':
					if ((abs(input.toX - input.fromX) <= 1 && abs(input.toY - input.fromY) <= 1))
					{
						Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
						Board.board[input.fromX][input.fromY] = '.';
					}
					else cout << "Invalid move!" << endl;;
					Board.printBoard();
					break;




				case'q':
					if ((input.toX == input.fromX || input.toY == input.fromY) || abs(input.toX) - input.fromX == abs(input.toY - input.fromY))
					{
						Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
						Board.board[input.fromX][input.fromY] = '.';
					}
					else cout << "Invalid move!" << endl;
					Board.printBoard();
					break;



				case'r':
					if ((input.toX == input.fromX || input.toY == input.fromY))
					{
						Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
						Board.board[input.fromX][input.fromY] = '.';
					}
					else cout << "Invalid move!" << endl;
					Board.printBoard();
					break;



				case'b':
					if (abs(input.toX - input.fromX) == abs(input.toY - input.fromY))
					{
						Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
						Board.board[input.fromX][input.fromY] = '.';
					}
					else cout << "Invalid move!" << endl;
					Board.printBoard();
					break;


				case'n':
					if ((abs(input.toX - input.fromX) == 1 && abs(input.toY - input.fromY) == 2) || (abs(input.toX - input.fromX) == 2 && abs(input.toY - input.fromY) == 1))
					{
						Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
						Board.board[input.fromX][input.fromY] = '.';
					}
					else cout << "Invalid move!" << endl;
					Board.printBoard();
					break;


				case'p':
					if ((input.toY == input.fromY && abs(input.toX - input.fromX) == 1))
					{
						Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
						Board.board[input.fromX][input.fromY] = '.';
					}
					else if ((input.toY == input.fromY && abs(input.toX - input.fromX) == 2))
					{


						for (int columns = 0; columns < 8; columns++)
						{
							if ((Board.board[input.fromX][input.fromY] == Board.board[6][columns]))
							{
								Board.board[input.toX][input.toY] = Board.board[input.fromX][input.fromY];
								Board.board[input.fromX][input.fromY] = '.';
							}

						}

					}
					else cout << "Invalid move!" << endl;
					Board.printBoard();
					break;

				}
			}
		}
		movesCounter++;
		cout << "Do you wish to continue(0-No, 1-Yes): "; cin >> gameneder;
	} while (gameneder != 0);

}

