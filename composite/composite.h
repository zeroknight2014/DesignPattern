//
// Created by zeroknight on 2016/12/9.
//

#ifndef DESIGNPATTERN_COMPOSITE_H
#define DESIGNPATTERN_COMPOSITE_H

#include <iostream>
#include <list>
using namespace std;

//公司； 整体和部分之间的共性
class Company
{
protected:
    string m_name;
public:
    Company(string name) { m_name = name;};
    virtual void Add(Company* c) {};
    virtual void Show(int depth) {};
};

//具体公司； 整体部分, 公司可能有总公司，有分公司，有业务部门等
class ConcreteCompany: public Company
{
private:
    list<Company*> m_listCompany;
public:
    ConcreteCompany(string name):Company(name) {};
    void Add(Company* c) { m_listCompany.push_back(c);}; //添加整体
    void Show(int depth)
    {
        for(int i = 0; i < depth; i++)
            cout<<"-"<<endl;
        cout<<m_name<<endl;
        list<Company*>::iterator iter = m_listCompany.begin();
        for(; iter != m_listCompany.end(); iter++) //显示子整体的部分
        {
            (*iter)->Show(depth+1);
        }
    }
};

//具体部门，财务部
class FinanceDepartment: public Company
{
public:
    FinanceDepartment(string name): Company(name){};
    virtual void Show(int depth) //只需显示，无需Add，因为属于部分模块
    {
        for(int i = 0; i < depth; i++)
            cout<<"-"<<endl;
        cout<<m_name<<endl;
    }
};

//具体部门，人力资源部
class HRDepartment: public Company
{
public:
    HRDepartment(string name): Company(name) {};
    virtual void Show(int depth)
    {
        for(int i = 0; i < depth; i++)
            cout<<"-"<<endl;
        cout<<m_name<<endl;
    }
};

#endif //DESIGNPATTERN_COMPOSITE_H
