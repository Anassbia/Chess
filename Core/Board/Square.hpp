#pragma once 

#include"PiecesEnum.hpp"
#include "BoardEnum.hpp"

struct Square {
	SquareColor Color;
	SquareOccupancy Occupancy;
	PieceType Identity;
	PieceColor Color;

};