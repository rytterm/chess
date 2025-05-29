#include "pieces.h"


Piece::Piece(PieceType p, Color c) 
    : type{p}, color{c}
{}



PieceType Piece::getType() const {
    return type;
}


Color Piece::getColor() const {
    return color;
}


bool Piece::isEmpty() const {
    return type == PieceType::NONE;
}


PieceType operator+(PieceType a, int b) {
    return static_cast<PieceType>(static_cast<int>(a) + b);
}


PieceType& operator++(PieceType& p) {
    p = p + 1;
    return p;
}

PieceType operator++(PieceType& p, int) {
    PieceType old = p;
    ++p;
    return old;
}



Color operator+(Color a, int b) {
    return static_cast<Color>(static_cast<int>(a) + b);
}


Color& operator++(Color& p) {
    p = p + 1;
    return p;
}

Color operator++(Color& p, int) {
    Color old = p;
    ++p;
    return old;
}