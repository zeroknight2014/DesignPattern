//
// Created by zeroknight on 2016/12/8.
//
/*
 * 用双端队列实现栈和队列
 * 标准接口：pop和push
 * 两种实现方式：一种是将适配的对象作为成员；一种是将适配的对象类作为父类，采用多继承实现
 * 上述两种实现，俗称为：对象适配器，类适配器；
 */

#ifndef DESIGNPATTERN_ADAPTER_H
#define DESIGNPATTERN_ADAPTER_H

#include <iostream>
using namespace std;

//双端队列
class Deque
{
public:
    void push_back(int x) { cout<<"Deque push_back"<<endl; }
    void push_front(int x) { cout<<"Deque push_front"<<endl; }
    void pop_back() { cout<<"Deque pop_back"<<endl; }
    void pop_front() { cout<<"Deque pop_front"<<endl; }
};

//顺序容器
//在这里其实这个就是适配器，用于我们封装想要的接口形式
class Sequence{
public:
    virtual void push(int x) = 0;
    virtual void pop() = 0;
};

//栈
class Stack: public Sequence
{
public:
    void push(int x) {deque->push_back(x);};
    void pop() {deque->pop_back();};
private:
    Deque* deque;
};

//队列
class Queue: public Sequence
{
public:
    void push(int x) {deque->push_back(x);};
    void pop() {deque->pop_front();};
private:
    Deque* deque;
};

//栈2
class Stack2: public Sequence, public Deque
{
public:
    void push(int x) {this->push_back(x);};
    void pop() {this->pop_back();};
};

//队列2
class Queue2: public Sequence, public Deque
{
public:
    void push(int x) {this->push_back(x);};
    void pop() {this->pop_front();};
};


#endif //DESIGNPATTERN_ADAPTER_H
