#include "chesspiece.h"

ChessPiece::ChessPiece(Color color, PieceType type)
{
	this->color = color;
	this->type = type;
}

ChessPiece::~ChessPiece()
{}

ChessPiece::Color ChessPiece::getColor() const
{
	return color;
}

ChessPiece::PieceType ChessPiece::getType() const
{
	return type;
}
