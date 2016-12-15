//
// Created by zeroknight on 2016/12/15.
//

#ifndef DESIGNPATTERN_MEDIATOR_H
#define DESIGNPATTERN_MEDIATOR_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Colleage
{
private:
    string name;
    string content;
public:
    Colleage(string n):name(n){};
    void set_name(string name) { this->name = name; }
    string get_name() { return this->name; }
    void set_content(string content) { this->content = content; }
    string get_content()
    {
        if(content.size() != 0)
            return content;
        else
            return "Get it.";
    }
    virtual void talk(){};
};

class Monitor: public Colleage
{
public:
    Monitor(string n):Colleage(n){};
    virtual void talk() { cout<<"Monitor "<<get_name()<<" says: "<<get_content()<<endl; }
};

class Secretary: public Colleage
{
public:
    Secretary(string n):Colleage(n){};
    virtual void talk()
    { cout<<"Secretary "<<get_name()<<" says: "<<get_content()<<endl; }
};

class StudentA: public Colleage
{
public:
    StudentA(string n):Colleage(n){};
    virtual void talk() { cout<<"StudentA "<<get_name()<<" says: "<<get_content()<<endl; }
};

class StudentB: public Colleage
{
public:
    StudentB(string n = ""):Colleage(n){};
    virtual void talk() { cout<<"StudentB "<<get_name()<<" says: "<<get_content()<<endl; }
};

class Mediator
{
public:
    vector<Colleage*> studentList;
    virtual void add_student(Colleage *student) { studentList.push_back(student); }
    virtual void notify(Colleage *student) {};
};

class QQMediator: public Mediator
{
public:
    virtual void notify(Colleage *student)
    {
        student->talk();
        for(int i = 0 ; i < studentList.size() ; ++i)
        {
            if(student != studentList[i])
            {
                studentList[i]->talk();
            }
        }
    }
};

#endif //DESIGNPATTERN_MEDIATOR_H
