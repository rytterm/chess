#pragma once
#include "../lib/debug.h"


enum PieceType {
    NO_TYPE,
    ROOK,
    KNIGHT,
    BISHOP,
    QUEEN,
    KING,
    PAWN,
    NUM_PIECE_TYPES
};


PieceType    operator+(PieceType, int);
PieceType&   operator++(PieceType&);
PieceType    operator++(PieceType&, int);


enum Color {
    NO_COLOR,
    WHITE,
    BLACK,
    NUM_COLORS
};


Color    operator+(Color, int);
Color&   operator++(Color&);
Color    operator++(Color&, int);



class Piece {
public:
    Piece(PieceType, Color, int, int);
    PieceType   getType() const;
    Color       getColor() const;
    bool        isEmpty() const;

private:
    PieceType   type;
    Color       color;
    int         row, col;
};