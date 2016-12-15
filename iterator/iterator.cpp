//
// Created by zeroknight on 2016/12/15.
//

#include "iterator.h"

int main()
{
    Aggregate<int> *aggr =new ConcreteAggregate<int>();
    Iterator<int> *it=aggr->createIterator();

    for(it->first();!it->isDone();it->next())
    {
        cout<<*(it->currentItem())<<endl;
    }
    delete it;
    delete aggr;
    return 0;
}