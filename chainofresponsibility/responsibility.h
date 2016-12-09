//
// Created by zeroknight on 2016/12/8.
//

#ifndef DESIGNPATTERN_RESPONSIBILITY_H
#define DESIGNPATTERN_RESPONSIBILITY_H

#include <iostream>
using namespace std;

class Dealer
{
protected:
    Dealer* next_dealer;
public:
    virtual void dealWithThings(int condition) = 0;
    void setDealer(Dealer* d) { next_dealer = d; }
};

class Dealer1: public Dealer
{
public:
    void dealWithThings(int condition) {if(condition == 1){ cout<<"Dealer1."<<endl; }else{ next_dealer->dealWithThings(condition); }}
};

class Dealer2: public Dealer
{
public:
    void dealWithThings(int condition) {if(condition == 2){ cout<<"Dealer2."<<endl; }else{ next_dealer->dealWithThings(condition); }}
};

class Dealer3: public Dealer
{
public:
    void dealWithThings(int condition) { if(condition == 3){ cout<<"Dealer3."<<endl; }else{ next_dealer->dealWithThings(condition); } }
};

class Requester
{
public:
    void requestForDeal(Dealer* d, int condition) { d->dealWithThings(condition); }
};


#endif //DESIGNPATTERN_RESPONSIBILITY_H
