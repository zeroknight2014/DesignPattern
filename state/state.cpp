//
// Created by zeroknight on 2016/12/16.
//

#include "state.h"

int main()
{
    //非状态模式
    SiegeTank* tank = new SiegeTank();
    tank->attack();
    cout<<"You should attack now!"<<endl;
    tank->setState(ATTACKING); tank->attack(); tank->move();
    cout<<"You should move now!"<<endl;
    tank->setState(MOVING); tank->attack(); tank->move();
    //状态模式
    CSiegeTank* tank2 = new CSiegeTank();
    cout<<"Tank2, you should attack now!"<<endl;
    tank2->move(); tank2->attack();
    tank2->enterAttackingMode(); tank2->attack(); tank2->move();
    tank2->enterMovingMode(); tank2->attack(); tank2->move();

    return 0;
}