//
//  MenuLayer.h
//  StarForYou
//
//  Created by 任杰 on 14/10/30.
//
//

#ifndef __StarForYou__MenuLayer__
#define __StarForYou__MenuLayer__

#include <stdio.h>
#include "cocos2d.h"
using namespace cocos2d;
class MenuLayer : public Layer{
public:
    virtual bool init();
    CREATE_FUNC(MenuLayer);
    void startGame();
};

#endif /* defined(__StarForYou__MenuLayer__) */
