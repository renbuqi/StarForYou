//
//  Audio.cpp
//  StarForYou
//
//  Created by 任杰 on 14/10/30.
//
//

#include "Audio.h"
#include "SimpleAudioEngine.h"
Audio* Audio::m_instance = nullptr;
Audio* Audio::getInstance(){
    if(m_instance == nullptr){
        m_instance = new Audio();
    }
    return m_instance;
}

void Audio::playBGM(){
    CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic("music4.mp3",true);
}

void Audio::playReadyGo(){
    CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("readygo.wav",false);
}

void Audio::playPop(){
    CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("pop.wav",false);
}

void Audio::playCombo(int size){
    if(size < 5)
        return;
    if(size >= 10){
        CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("cheer.wav",false);
    }else if(size >= 7){
        CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("coin.mp3",false);
    }else {
        CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("beep.wav",false);
    }
}
void Audio::prepare(){
    CocosDenshion::SimpleAudioEngine::getInstance()->preloadBackgroundMusic("music4.mp3");
    CocosDenshion::SimpleAudioEngine::getInstance()->preloadEffect("readygo.wav");
    CocosDenshion::SimpleAudioEngine::getInstance()->preloadEffect("pop.wav");
    CocosDenshion::SimpleAudioEngine::getInstance()->preloadEffect("cheer.wav");
    CocosDenshion::SimpleAudioEngine::getInstance()->preloadEffect("coin.mp3");
    CocosDenshion::SimpleAudioEngine::getInstance()->preloadEffect("beep.wav");
}
