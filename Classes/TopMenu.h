//
//  TopMenu.h
//  StarForYou
//
//  Created by 任杰 on 14/10/30.
//
//

#ifndef __StarForYou__TopMenu__
#define __StarForYou__TopMenu__

#include <stdio.h>
#include "cocos2d.h"
using namespace cocos2d;
class TopMenu : public Node{
public:
    virtual bool init();
    CREATE_FUNC(TopMenu);
    void refresh();
private:
    Label* highestScore;
    Label* level;
    Label* targetScore;
    Label* curScore;
};

#endif /* defined(__StarForYou__TopMenu__) */
