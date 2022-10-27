#include "Input.h"
#include <iostream>
#include <string>
using namespace std;

void Input::movesInput() 
{
	string input;
	cin >> input;

	if (input.length() != 5)
	{
		cout << "Invalid move!" << endl;
	}
	else
	{
		int elOfInput1 = input[input.length() - 4];
		int elOfInput4 = input[input.length() - 1];

		if (!isdigit(input[input.length() - 5]) && !isdigit(input[input.length() - 2]))
		{
			//columns
			fromY = (input[input.length() - 5]) - 97;
			toY = (input[input.length() - 2]) - 97;

		}

		if (isdigit(input[input.length() - 4]) && isdigit(input[input.length() - 1]))
		{
			//rows
			fromX = abs(elOfInput1 - 49 - 7);
			toX = abs(elOfInput4 - 49 - 7);

		}
	}
}
