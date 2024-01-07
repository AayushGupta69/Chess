#pragma once
#ifndef CHESSPIECE_H
#define CHESSPIECE_H

class ChessPiece
{
public:

	enum PieceType { PAWN, BISHOP, KNIGHT, ROOK, QUEEN, KING };
	enum Color { WHITE, BLACK };

	ChessPiece(Color color, PieceType type);
	~ChessPiece();

	Color getColor() const;
	PieceType getType() const;

private:
	Color color;
	PieceType type;
};

#endif // !CHESSPIECE_H
