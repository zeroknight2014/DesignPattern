//
// Created by zeroknight on 2016/12/15.
//

#ifndef DESIGNPATTERN_ITERATOR_H
#define DESIGNPATTERN_ITERATOR_H

#include <iostream>
#include <vector>
using namespace std;

template <class Item>
class Iterator
{
public:
    virtual void first() = 0;
    virtual void next() = 0;
    virtual Item* currentItem() = 0;
    virtual bool isDone() = 0;
    virtual ~Iterator(){};
};

template<class Item>
class ConcreteAggregate;

template <class Item>
class ConcreteIterator: public Iterator <Item>
{
private:
    ConcreteAggregate<Item> *aggr;
    int cur;
public:
    ConcreteIterator(ConcreteAggregate<Item> *a):aggr(a), cur(0){}
    virtual void first() {cur=0;}
    virtual void next() {if(cur < aggr->getLen()){ cur++;}}
    virtual Item* currentItem()
    {
        if(cur < aggr->getLen())
            return &(*aggr)[cur];
        else
            return NULL;
    }
    virtual bool isDone() {return (cur>=aggr->getLen());}
};

template<class Item>
class Aggregate
{
public:
    virtual Iterator<Item>* createIterator()=0;
    virtual ~Aggregate(){}
};

template<class Item>
class ConcreteAggregate:public Aggregate<Item>
{
    vector<Item> data;
public:
    ConcreteAggregate() { data.push_back(1); data.push_back(2); data.push_back(3); }
    virtual Iterator<Item>* createIterator() { return new ConcreteIterator<Item>(this); }
    Item& operator[](int index) { return data[index]; }
    int getLen() { return data.size(); }
};

#endif //DESIGNPATTERN_ITERATOR_H
