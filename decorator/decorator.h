//
// Created by zeroknight on 2016/12/14.
//

#ifndef DESIGNPATTERN_DECORATOR_H
#define DESIGNPATTERN_DECORATOR_H

#include <iostream>
using namespace std;

class Person
{
public:
    virtual void Show() { cout<<" show."<<endl; }
};

class Singer: public Person
{
protected:
    Person* m_p;
public:
    void Decorator(Person* p) { m_p = p;}
    void Show() {cout<<"Singer "; m_p->Show();}
};

class Actor: public Person
{
protected:
    Person* m_p;
public:
    void Decorator(Person* p) { m_p = p;}
    void Show() {cout<<"Actor "; m_p->Show();}
};


#endif //DESIGNPATTERN_DECORATOR_H
