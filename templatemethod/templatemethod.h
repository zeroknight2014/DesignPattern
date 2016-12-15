//
// Created by zeroknight on 2016/12/14.
//

#ifndef DESIGNPATTERN_TEMPLATEMETHOD_H
#define DESIGNPATTERN_TEMPLATEMETHOD_H

#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start(){};
    virtual void stop(){};
    virtual void alarm(){};
    virtual void engieBoom(){};
    void run(){
        start();
        engieBoom();
        alarm();
        stop();
    }
};

class BMWCar: public Car
{
public:
    void start(){ cout<<"BMW start."<<endl; };
    void stop(){ cout<<"BMW stop."<<endl; };
    void alarm(){ cout<<"BMW alarm."<<endl; };
    void engieBoom(){ cout<<"BMW engieBoom."<<endl; };
};

class AUDICar: public Car
{
public:
    void start(){ cout<<"AUDI start."<<endl; };
    void stop(){ cout<<"AUDI stop."<<endl; };
    void alarm(){ cout<<"AUDI alarm."<<endl; };
    void engieBoom(){ cout<<"AUDI engieBoom."<<endl; };
};


#endif //DESIGNPATTERN_TEMPLATEMETHOD_H
