//
//  ChessPiece.hpp
//  CS100_ChessGame
//
//  Created by Yuteng Wu on 2/21/21.
//

#ifndef ChessPiece_hpp
#define ChessPiece_hpp

#include <stdio.h>


class ChessPiece
{
public:
    bool virtual move(char hor, char ver) = 0; //define unique move for each pieces. Inside move() we call accept to check if the move is valid.
    char virtual getHorizontal();
    char virtual getVertical();
    
    
    
    
    
    
};

#endif /* ChessPiece_hpp */
