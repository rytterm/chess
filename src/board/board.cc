#include "board.h"


Board::Board() 
    : board{}, pieces{}
{
    for (int i = 0; i < 8; ++i)
        pieces.push_back(Piece(PAWN, WHITE, 1, i));

    for (PieceType t{ROOK}; t < PAWN; t++)
        pieces.push_back(Piece(t,WHITE, 0,t-1));

    for (int i = 0; i < 8; ++i)
        pieces.push_back(Piece(PAWN, BLACK, 6, i));

    for (PieceType t{ROOK}; t < PAWN; t++)
        pieces.push_back(Piece(t,BLACK, 7,t-1));
}




void Board::printBoard() {



}