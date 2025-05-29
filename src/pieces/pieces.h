#pragma once
#include "../lib/debug.h"


enum class PieceType {
    NONE,
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING,
    NUM_PIECE_TYPES
};


PieceType    operator+(PieceType, int);
PieceType&   operator++(PieceType&);
PieceType    operator++(PieceType&, int);



enum class Color {
    NONE,
    WHITE,
    BLACK,
    NUM_COLORS
};


Color    operator+(Color, int);
Color&   operator++(Color&);
Color    operator++(Color&, int);



class Piece {
public:
    Piece(PieceType, Color);
    PieceType   getType() const;
    Color       getColor() const;
    bool        isEmpty() const;

private:
    PieceType   type;
    Color       color;
};