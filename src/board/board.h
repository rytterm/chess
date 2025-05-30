#pragma once

#include "../lib/debug.h"
#include "../pieces/pieces.h"
#include <vector>

constexpr int bsize {8};

class Board {
public:
    Board();
    void printBoard();
private:
    Piece* board[bsize][bsize];
    std::vector<Piece> pieces; /* Helpful for an eventual engine */
};