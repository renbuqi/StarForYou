//
//  GameScene.cpp
//  StarForYou
//
//  Created by 任杰 on 14/10/30.
//
//

#include "GameScene.h"
#include "GameLayer.h"
#include "Audio.h"
bool GameScene::init(){
    if(!Scene::init()){
        return false;
    }
    Audio::getInstance()->playBGM();
    this->addChild(GameLayer::create());
    return true;
}
