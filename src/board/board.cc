#include "board.h"


Board::Board() 
    : board{}, pieces{}
{
    for (Color c{NO_COLOR}; c < NUM_COLORS; c++) {
    /* Pawns */
        for (int i{0}; i < 16; i++) {
            pieces.emplace_back(Piece(PAWN, c));
            if (i < 8) {
                board[i][1] = &pieces.back();
            } else {
                board[i-8][6] = &pieces.back();
            }
        }
    }
}




void Board::printBoard() {


    for (int i{7}; i > 0; i--) {
        for (int j{0}; j < bsize; j++) {
            if (board[j][i] != nullptr) {
                switch(board[j][i]->getType()) {
                    case PAWN: std::cout << "P"; break;
                    case KNIGHT: std::cout << "N"; break;
                    case BISHOP: std::cout << "B"; break;
                    case ROOK: std::cout << "R"; break;
                    case QUEEN: std::cout << "Q"; break;
                    case KING: std::cout << "K"; break;
                    default: std::cout << ' '; break;
                }
                switch(board[j][i]->getColor()) {
                    case WHITE: std::cout << "W"; break;
                    case BLACK: std::cout << "B"; break;
                    default: std::cout << ' '; break;
                }
            }
        }
        std::cout << std::endl;
    }
}