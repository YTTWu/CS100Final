//
//  Pawn.hpp
//  CS100_ChessGame
//
//  Created by Yuteng Wu on 2/23/21.
//

#ifndef Pawn_hpp
#define Pawn_hpp

#include <stdio.h>
#include "ChessPiece.hpp"
#include "Visitor.hpp"

class Pawn : public ChessPiece
{
private:
    char p_horizontal;
    char p_vertical;
    
public:
    bool move(char hor, char ver);
    
    char getPawnHorizontal();
    char getPawnVertical();
    
    bool accept(Visitor pV);
    
};

#endif /* Pawn_hpp */
