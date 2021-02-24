//
//  Knight.hpp
//  CS100_ChessGame
//
//  Created by Yuteng Wu on 2/21/21.
//

#ifndef Knight_hpp
#define Knight_hpp

#include "ChessPiece.hpp"
#include "Visitor.hpp"
#include <stdio.h>


class Knight : public ChessPiece
{
    
private:
    char kn_horizontal;
    char kn_vertical;
    
public:
    bool move(char hor, char ver);
    
    char getHorizontal();
    char getVertical();
    
    accept(Visitor pV, char hor, chr ver);
    
    
    
};



#endif /* Knight_hpp */
