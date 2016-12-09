//
// Created by zeroknight on 2016/12/8.
//

#ifndef DESIGNPATTERN_BRIDGE_H
#define DESIGNPATTERN_BRIDGE_H

#include <iostream>
using namespace std;

class Software
{
public:
    virtual void run() = 0;
};

class MusicApp: public Software
{
public:
    void run() { cout<<"I'm Music App for Android."<<endl;};
};

class MusicApp2: public Software
{
public:
    void run() { cout<<"I'm Music App for IOS."<<endl;};
};

class Phone
{
protected:
    Software* s;
public:
    virtual void run() = 0;
};

class AndroidPhone: public Phone
{
public:
    AndroidPhone(Software* soft){ s = soft; };
    void run() {s->run();};
};

class ApplePhone: public Phone
{
public:
    ApplePhone(Software* soft){ s = soft; };
    void run() {s->run();};
};


#endif //DESIGNPATTERN_BRIDGE_H
