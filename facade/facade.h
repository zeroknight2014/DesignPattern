//
// Created by zeroknight on 2016/12/9.
//

#ifndef DESIGNPATTERN_FACADE_H
#define DESIGNPATTERN_FACADE_H

#include <iostream>
using namespace std;

//包裹
class Package
{
private:
    int weight;
    int address;
public:
    Package(int w, int a) {weight = w; address = a;};
    int getWeight() { return weight;};
    int getAddress() { return address;};
};

//快递
class Express
{
public:
    void calculateCost(Package* p) { p->getWeight(); cout<<"calculate cost ."<<endl;};
    void sendPackage(Package* p) { p->getAddress(); cout<<"send package."<<endl;};
};

//寄快递的人
class People
{
public:
    void send(Package* p, Express* e) { e->calculateCost(p); e->sendPackage(p);};
};

#endif //DESIGNPATTERN_FACADE_H
