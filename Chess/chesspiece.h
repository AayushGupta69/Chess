#pragma once
#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <utility>

class ChessPiece
{
public:

	enum PieceType { PAWN, BISHOP, KNIGHT, ROOK, QUEEN, KING };
	enum Color { WHITE, BLACK };

	ChessPiece(Color color, PieceType type);
	~ChessPiece();

	Color getColor() const;
	PieceType getType() const;
	void incrementMoves();
	void decrementMoves();
	virtual bool isValidMove(const std::pair<int, int> &fromCoords, const std::pair<int, int> &toCoords) const = 0;

private:
	Color color;
	PieceType type;
	int moves;
};

#endif // !CHESSPIECE_H
