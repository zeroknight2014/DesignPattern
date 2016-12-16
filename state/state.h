//
// Created by zeroknight on 2016/12/16.
//

#ifndef DESIGNPATTERN_STATE_H
#define DESIGNPATTERN_STATE_H

// 以星际争霸里的坦克作为例子
// 它不架起来的时候可以攻击，可以移动。架起来的时候攻击增强，但是不能移动：

#include <iostream>
using namespace std;

/* 1. 一般我们这么写 */

enum StateTank
{
    STOPING,    //静止模式，可以随时切换
    MOVING,     //移动模式，但不能攻击
    ATTACKING   //攻击模式，但不能移动
};

class SiegeTank
{
private:
    StateTank m_state;
public:
    SiegeTank() { m_state = STOPING;}
    void setState(StateTank s) { m_state = s;}
    void move()
    {
        if(m_state == STOPING)
        {
            cout<<"Stoping! What do you want me to do ? "<<endl;
        }
        if(m_state == MOVING)
        {
            cout<<"I'm moving , my lord!"<<endl;
        }
        if(m_state == ATTACKING)
        {
            cout<<"When attacking, can't move."<<endl;
        }
    }
    void attack()
    {
        if(m_state == STOPING)
        {
            cout<<"Stoping! What do you want me to do ? "<<endl;
        }
        if(m_state == MOVING)
        {
            cout<<"When moving, can't attack."<<endl;
        }
        if(m_state == ATTACKING)
        {
            cout<<"I'm attacking , my lord!"<<endl;
        }
    }
};

/* 然而上面的写法，如果逻辑越来越多、复杂时，以增加对象的形式降低逻辑复杂度，减少状态切换时的各种判断 */
/* 2. 状态模式这么写 */

class CStateTank
{
public:
    virtual void attack() = 0;
    virtual void move() = 0;
};

class CMovingStateTank: public CStateTank
{
    void attack() {cout<<"When moving, can't attack."<<endl;}
    void move() {cout<<"I'm moving , my lord!"<<endl;}
};

class CAttackingStateTank: public CStateTank
{
    void attack() {cout<<"I'm attacking , my lord!"<<endl;}
    void move() {cout<<"When attacking, can't move."<<endl;}
};

class CStopingStateTank: public CStateTank
{
    void attack() {cout<<"Stoping! What do you want me to do ? "<<endl;}
    void move() {cout<<"Stoping! What do you want me to do ? "<<endl;}
};


class CSiegeTank
{
private:
    CStateTank* m_state;
public:
    CSiegeTank() {m_state = new CStopingStateTank();}
    ~CSiegeTank() { if(m_state != NULL){ delete m_state;}}
    void setState(CStateTank* state) { m_state = state;}
    void enterAttackingMode() {m_state = new CAttackingStateTank();}
    void enterMovingMode() {m_state = new CMovingStateTank();}
    void enterStopingMode() {m_state = new CStopingStateTank();}
    void move() {m_state->move();}
    void attack() {m_state->attack();}
};

#endif //DESIGNPATTERN_STATE_H
