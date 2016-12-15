//
// Created by zeroknight on 2016/12/14.
//

#ifndef DESIGNPATTERN_FLYWEIGHT_H
#define DESIGNPATTERN_FLYWEIGHT_H

#include <iostream>
#include <map>
using namespace std;

class StudentInfo
{
private:
    int m_id;
    string m_name;
public:
    StudentInfo(int id, string name){ m_id = id, m_name = name;}
    void printName() {cout<<m_name<<endl;}
};

class StudentFactory
{
public:
    StudentInfo* CreateStudentInfo(int id, string name)
    {
        return new StudentInfo(id, name);
    }
};

class StudentPool: public StudentFactory
{
private:
     map<int, StudentInfo*> m_pool;
public:
    bool contain(int key)
    {
        if(m_pool.find(key) == m_pool.end())
        {
            return false;
        }
        return true;
    }
    void put(int id, StudentInfo* s)
    {
        m_pool.insert(pair<int, StudentInfo*>(id, s));
    }
    StudentInfo* getStudentInfo(int key){
        if(contain(key)){
            return m_pool[key];
        }
        return NULL;
    }
};

#endif //DESIGNPATTERN_FLYWEIGHT_H
