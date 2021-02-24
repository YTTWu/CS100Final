//
//  Bishop.hpp
//  CS100_ChessGame
//
//  Created by Yuteng Wu on 2/23/21.
//

#ifndef Bishop_hpp
#define Bishop_hpp

#include <stdio.h>

#include "ChessPiece.hpp"
#include "Visitor.hpp"

class Bishop : public ChessPiece
{
private:
    char b_horizontal;
    char b_vertical;
public:
    bool move(char hor, char  ver);
    
    char getBishopHorizontal();
    char getBishopVertical();
    
    bool accept(Visitor pV);
};

#endif /* Bishop_hpp */
