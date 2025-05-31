#include "pieces.h"


Piece::Piece(PieceType p, Color c, int r, int co) 
    : type{p}, color{c}, row{r}, col{co}
{}



PieceType Piece::getType() const {
    ASSERT(this != nullptr);
    return type;
}


Color Piece::getColor() const {
    ASSERT(this != nullptr);
    return color;
}


bool Piece::isEmpty() const {
    return type == NO_TYPE;
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