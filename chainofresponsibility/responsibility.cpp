//
// Created by zeroknight on 2016/12/8.
//
#include "responsibility.h"

int main()
{
    Dealer1* d1 = new Dealer1();
    Dealer2* d2 = new Dealer2();
    Dealer3* d3 = new Dealer3();
    d1->setDealer(d2);
    d2->setDealer(d3);
    Requester* r = new Requester();
    r->requestForDeal(d1, 3);
    return 0;
}
