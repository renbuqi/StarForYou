//
//  MenuScene.cpp
//  StarForYou
//
//  Created by 任杰 on 14/10/30.
//
//

#include "MenuScene.h"
#include "MenuLayer.h"
#include "Audio.h"

bool MenuScene::init(){
    if(!Scene::init()){
        return false;
    }
    Audio::getInstance()->playBGM();
    this->addChild(MenuLayer::create());
    return true;
}
