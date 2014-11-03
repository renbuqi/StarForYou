//
//  Audio.h
//  StarForYou
//
//  Created by 任杰 on 14/10/30.
//
//

#ifndef __StarForYou__Audio__
#define __StarForYou__Audio__

#include <stdio.h>
class Audio{
public:
    static Audio* getInstance();
    void playBGM();
    void playReadyGo();
    void playPop();
    void prepare();
    void playCombo(int size);
private:
    static Audio* m_instance;
};

#endif /* defined(__StarForYou__Audio__) */
