//
// Created by zeroknight on 2016/12/15.
//

#include "memento.h"

int main (int argc, char *argv[])
{
    Originator originator;
    originator.setState("State1");
    cout<<"Original state:"<<originator.getState()<<endl;
    Caretaker caretaker;
    caretaker.setMemento(originator.createMemento());
    originator.setState("State2");
    cout<<"State after change:"<<originator.getState()<<endl;
    originator.restoreMemento(caretaker.getMemento());
    cout<<"State after recovery:"<<originator.getState()<<endl;
}