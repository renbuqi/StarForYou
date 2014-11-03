//
//  FloatWord.h
//  StarForYou
//
//  Created by 任杰 on 14/10/30.
//
//

#ifndef __StarForYou__FloatWord__
#define __StarForYou__FloatWord__

#include <stdio.h>
#include "cocos2d.h"
using namespace cocos2d;
class FloatWord : public Node{
public:
    static FloatWord* create(const std::string& word,const int fontSize,Point begin);
    bool init(const std::string& word,const int fontSize,Point begin);
    void floatIn(const float delay,std::function<void()> callback);
    void floatOut(const float delay,std::function<void()> callback);
    void floatInOut(const float speed,const float delay,std::function<void()> callback);
    
private:
    int _fontSize;
    Point _begin;
    Label* _label;
};

#endif /* defined(__StarForYou__FloatWord__) */
