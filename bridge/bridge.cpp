//
// Created by zeroknight on 2016/12/8.
//

#include "bridge.h"

int main()
{
    Phone* p = new AndroidPhone(new MusicApp());
    Phone* p2 = new ApplePhone(new MusicApp2());
    p->run();
    p2->run();
    return 0;
}