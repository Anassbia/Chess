#pragma once 
#include"..\Core\Board\Board.hpp"
#include "..\Core\Board\Move.hpp"


class Game {
private:
	Board board;
	PieceColor current_turn;

public:
	bool applyMove(const Move& move);
};