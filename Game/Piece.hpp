#pragma once 
#include"..\Core\Board\Board.hpp"

class Piece {
private:

	PieceType type;
	PieceColor color;

public:

	virtual bool canMove(
		const Board& board,
		const Move& move
	) const = 0;
};