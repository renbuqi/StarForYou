//
//  GameLayer.h
//  StarForYou
//
//  Created by 任杰 on 14/10/30.
//
//

#ifndef __StarForYou__GameLayer__
#define __StarForYou__GameLayer__

#include <stdio.h>
#include "cocos2d.h"
#include "FloatWord.h"
#include "TopMenu.h"
#include "StarMatrix.h"
using namespace cocos2d;
class StarMatrix;
class GameLayer : public Layer{
public:
    virtual bool init();
    CREATE_FUNC(GameLayer);
    void floatLevelWord();
    void floatTargetScoreWord();
    void removeFloatWord();
    void showStarMatrix();
    virtual void update(float delta);
    virtual bool onTouchBegan(Touch* touch,Event* event);
    void refreshMenu();
    void showLinkNum(int size);
    void hideLinkNum();
    void floatLeftStarMsg(int leftNum);
    void gotoNextLevel();
    void gotoGameOver();
private:
    FloatWord* _levelMsg;
    FloatWord* _targetScore;
    TopMenu* menu;
    StarMatrix* matrix;
    Label* linkNum;
};

#endif /* defined(__StarForYou__GameLayer__) */
