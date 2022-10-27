#pragma once
#include "Board.h"
class Input :
    public Board
{
public:
	int fromX = 0;
	int fromY = 0;
	int toX = 0;
	int toY = 0;
public:
	Input() {};
	~Input() {};
	void movesInput();
};

