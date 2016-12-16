//
// Created by zeroknight on 2016/12/16.
//

#ifndef DESIGNPATTERN_OBSERVER_H
#define DESIGNPATTERN_OBSERVER_H

#include <iostream>
#include <vector>
using namespace std;

//老板秘书
class Secretary;

//公司同事,
class Staff
{
private:
    string name;
    Secretary* sec;
public:
    Staff(string name) {this->name = name;}
    void Update() {cout<<"The boss is comming, I should work now!"<<endl;}
};

class Secretary
{
private:
    vector<Staff> * s_vector;
public:
    Secretary() { s_vector = new vector<Staff>;}
    void AddObserver(Staff s)
    {
        s_vector->push_back(s);
    }
    void Notify()
    {
        vector<Staff>::iterator p;
        for(p = s_vector->begin(); p != s_vector->end(); p++)
        {
            (*p).Update();
        }
    }
};

#endif //DESIGNPATTERN_OBSERVER_H
