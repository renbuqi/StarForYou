//
//  TopMenu.cpp
//  StarForYou
//
//  Created by 任杰 on 14/10/30.
//
//

#include "TopMenu.h"
#include "Chinese.h"
#include "GameData.h"
bool TopMenu::init(){
    if(!Node::init()){
        return false;
    }
    Size visibleSize = Director::getInstance()->getVisibleSize();
    highestScore = Label::create(
                                 ChineseWord("highestScore") + cocos2d::String::createWithFormat("%d",GAMEDATA::getInstance()->getHistoryScore())->_string,
                                 "Verdana-Bold",30
                                 );
    highestScore->setPosition(visibleSize.width/2,visibleSize.height - 50);
    this->addChild(highestScore);
    
    level = Label::create(
                          ChineseWord("guanqia") + cocos2d::String::createWithFormat("%d",GAMEDATA::getInstance()->getNextLevel())->_string,
                          "Verdana-Bold",30
                          );
    level->setPosition(200,visibleSize.height - 100);
    this->addChild(level);
    
    targetScore = Label::create(
                                ChineseWord("mubiao") + cocos2d::String::createWithFormat("%d",GAMEDATA::getInstance()->getNextScore())->_string + ChineseWord("fen"),
                                "Verdana-Bold",30
                                );
    targetScore->setPosition(400,visibleSize.height - 100);
    this->addChild(targetScore);
    
    curScore = Label::create(
                             cocos2d::String::createWithFormat("%d",GAMEDATA::getInstance()->getCurScore())->_string,
                             "Verdana-Bold",50
                             );
    curScore->setPosition(visibleSize.width/2,visibleSize.height - 150);
    this->addChild(curScore);
    
    return true;
}

void TopMenu::refresh(){
    char buf[64];
    sprintf(buf,"%d",GAMEDATA::getInstance()->getCurScore());
    curScore->setString(buf);
    
    string history = ChineseWord("highestScore") + cocos2d::String::createWithFormat("%d",GAMEDATA::getInstance()->getHistoryScore())->_string;
    highestScore->setString(history);
    
    string guanqia = ChineseWord("guanqia") + cocos2d::String::createWithFormat("%d",GAMEDATA::getInstance()->getNextLevel())->_string;
    level->setString(guanqia);
    
    string target = ChineseWord("mubiao") + cocos2d::String::createWithFormat("%d",GAMEDATA::getInstance()->getNextScore())->_string + ChineseWord("fen");
    targetScore->setString(target);
}

