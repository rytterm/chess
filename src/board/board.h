#pragma once

#include "../lib/debug.h"
#include "../pieces/pieces.h"
#include <vector>

constexpr int bsize {8};

class Board {
public:
    Board();

private:
    Piece* board[bsize][bsize];
    std::vector<Piece> pieces;
};