//
// Created by zeroknight on 2016/12/14.
//

#ifndef DESIGNPATTERN_STRATEGY_H
#define DESIGNPATTERN_STRATEGY_H

#include <iostream>
using namespace std;

class CAlgorithm
{
public:
    virtual void Replace() = 0;
};

class CAlgorithmFIFO: public CAlgorithm
{
public:
    void Replace() { cout<<"Least Recently Used replace algorithm FIFO."<<endl; };
};

class CAlgorithmLRU: public CAlgorithm
{
public:
    void Replace() { cout<<"Least Recently Used replace algorithm LRU."<<endl; };
};

class CAlgorithmRondom: public CAlgorithm
{
public:
    void Replace() { cout<<"Least Recently Used replace algorithm Rondom."<<endl; };
};

class Cache
{
private:
    CAlgorithm* m_a;
public:
    Cache(CAlgorithm* a) {m_a = a;}
    ~Cache(){ if(m_a != NULL){ delete m_a; } }
    void Replace() {m_a->Replace();}
};

enum RA{
    FIFO, LRU, RONDOM
};

class Cache2
{
private:
    CAlgorithm* m_a;
public:
    Cache2(RA type) {
        switch (type){
            case FIFO:  m_a = new CAlgorithmFIFO();
                break;
            case LRU: m_a = new CAlgorithmLRU();
                break;
            case RONDOM: m_a = new CAlgorithmRondom();
                break;
            default: m_a = NULL;
        }

    }
    ~Cache2(){ if(m_a != NULL){ delete m_a; } }
    void Replace() {m_a->Replace();}
};

template <class RA>
class Cache3
{
private:
    RA m_ra;
public:
    Cache3(){};
    ~Cache3(){};
    void Replace() {m_ra.Replace();};
};

#endif //DESIGNPATTERN_STRATEGY_H
