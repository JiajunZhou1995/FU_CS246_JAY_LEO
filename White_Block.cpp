//
//  White_Block.cpp
//  Chess_Project
//
//  Created by JiaJun Zhou on 2015-07-16.
//  Copyright (c) 2015 JiaJun Zhou. All rights reserved.
//

#include "White_Block.h"
#include <string>
#include <stdio.h>
using namespace std;

White_Block::White_Block(string side, string position) {
    this->b = NULL;
    this->Side = side;
    this->Position = position;
    this->Alias = ' ';
}

Move* White_Block::Available_Move() {}

void White_Block::SetBoard(Board *b) {
    if (this->b == NULL) {
        this->b = b;
    }
}
