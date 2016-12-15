//
// Created by zeroknight on 2016/12/15.
//

#ifndef DESIGNPATTERN_COMMAND_H
#define DESIGNPATTERN_COMMAND_H

#include <iostream>
using namespace std;

//命令接收者
class Receiver
{
public:
    virtual void doCommand() {cout<<"by Receiver."<<endl;}
};

class Receiver1: public Receiver
{
public:
    void doCommand() { cout<<" by Receiver1."<<endl; }
};

class Receiver2: public Receiver
{
public:
    void doCommand() { cout<<" by Receiver2."<<endl; }
};

class Command
{
protected:
    Receiver* m_r;
public:
    Command(Receiver* r){m_r = r;}
    Command() {}
    void setReceiver(Receiver* r) {m_r = r;}
    virtual void run() { cout<<"run command."<<endl; }
};

class Command1: public Command
{
public:
    Command1() {}
    Command1(Receiver* r): Command(r) {}
    void run() { cout<<"run command 1"; m_r->doCommand(); }
};

class Command2: public Command
{
public:
    Command2() {}
    Command2(Receiver* r): Command(r) {}
    void run() { cout<<"run command 2"; m_r->doCommand();}
};

//命令发起者
class Invoker
{
public:
    void runCommand(Command* c) { c->run();}
};


#endif //DESIGNPATTERN_COMMAND_H
