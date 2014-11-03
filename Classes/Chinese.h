//
//  Chinese.h
//  StarForYou
//
//  Created by 任杰 on 14/10/30.
//
//

#ifndef __StarForYou__Chinese__
#define __StarForYou__Chinese__

#include <stdio.h>
#include <string>
#include <cocos2d.h>
using namespace std;
using namespace cocos2d;

static ValueVector txt_vec = FileUtils::getInstance()->getValueVectorFromFile("ChineseWords.xml");

string ChineseWord(const char* wordId);

#endif /* defined(__StarForYou__Chinese__) */
