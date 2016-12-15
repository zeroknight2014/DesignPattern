//
// Created by zeroknight on 2016/12/14.
//

#include "proxy.h"

int main()
{
    GamePlayer* g = new GamePlayer();
    GameProxyPlayer* pg = new GameProxyPlayer(g);
    pg->login();
    return 0;
}