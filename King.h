//
//  King.h
//  Chess_Project
//
//  Created by JiaJun Zhou on 2015-07-16.
//  Copyright (c) 2015 JiaJun Zhou. All rights reserved.
//

#ifndef __Chess_Project__King__
#define __Chess_Project__King__

#include <stdio.h>
#include "Board.h"
#include <string>

class King:public Chess{
protected:
    Board *b;
    std::string Side;
    char Alias;
public:
    Move Available_Move();
    King(Board *b, string side);
};

#endif /* defined(__Chess_Project__King__) */
