//
//  LevelMsgLayer.h
//  StarForYou
//
//  Created by 任杰 on 14/10/30.
//
//

#ifndef __StarForYou__LevelMsgLayer__
#define __StarForYou__LevelMsgLayer__

#include <stdio.h>
#include "cocos2d.h"
using namespace cocos2d;
class LevelMsgLayer : public Layer{
public:
    virtual bool init();
    CREATE_FUNC(LevelMsgLayer);
private:
    virtual void update(float delta);
};

#endif /* defined(__StarForYou__LevelMsgLayer__) */
