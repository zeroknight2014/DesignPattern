//
// Created by zeroknight on 2016/12/15.
//

#ifndef DESIGNPATTERN_MEMENTO_H
#define DESIGNPATTERN_MEMENTO_H

#include <iostream>
#include <string>
using namespace std;

class Memento
{
private:
    string state;
public:
    Memento() { state = ""; }
    Memento(string state){ this->state = state; }
    string getState() { return state; }
    void setState(string state) { this->state = state; }
};


class Originator {
private :
    string state;
public:
    Originator(){state = "";}
    string getState() { return state; }
    void setState(string state) { this->state = state; }
    Memento createMemento(){ return Memento(this->state); }
    void restoreMemento(Memento memento){ this->setState(memento.getState()); }
};

class Caretaker {
private:
    Memento memento;
public:
    Memento getMemento() { return memento; }
    void setMemento(Memento memento) { this->memento = memento; }
};

#endif //DESIGNPATTERN_MEMENTO_H
