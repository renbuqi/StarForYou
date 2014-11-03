//
//  Chinese.cpp
//  StarForYou
//
//  Created by 任杰 on 14/10/30.
//
//

#include "Chinese.h"
string ChineseWord(const char* wordId)
{
    auto txt_map = txt_vec.at(0).asValueMap();
    string ret = txt_map.at(wordId).asString();
    return ret;
}
