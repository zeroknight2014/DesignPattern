//
// Created by zeroknight on 2016/12/14.
//

#ifndef DESIGNPATTERN_PROXY_H
#define DESIGNPATTERN_PROXY_H

#include <iostream>
using namespace std;

//游戏玩家
class GamePlayer
{
public:
    void login(){cout<<"login game."<<endl;}
};

//游戏代练
class GameProxyPlayer
{
private:
    GamePlayer* m_g;
public:
    GameProxyPlayer(GamePlayer* g) {m_g = g;}
    ~GameProxyPlayer(){ { if(m_g != NULL){ delete m_g; } } }
    void login(){ cout<<"I'm ProxyPlaer."<<endl; m_g->login(); }
};

#endif //DESIGNPATTERN_PROXY_H

//示例2，C++中智能指针的实现
template <typename T>
class smart_ptr
{
private:
    T *pointee;     //实际指针，被代理
    int count;       //引用计数器
    void dec_count()    //计数器减1
    {
        if (--count == 0)
        {
            delete pointee;
        }
    }

public:
    smart_ptr(T* p): pointee(p), count(1){}
    ~smart_ptr(){ dec_count();}
    smart_ptr(const smart_ptr &r): pointee(p), count(r.count) {++count;}
    smart_ptr& operator= (const smart_ptr &r)
    {
        ++count;
        dec_count();
        pointee = r.pointee;
        count = r.count;
        return *this;
    }
    //重载箭头操作符和解引用操作符，未提供指针的检查
    T *operator->(){return pointee;};
    const T *operator->() const{return pointee;}
    T &operator*(){return *pointee;}
    const T &operator*()const {return *pointee;}
    int get_refcount() {return count;};     //获得引用计数器值
};

#endif //DESIGNPATTERN_PROXY_H
