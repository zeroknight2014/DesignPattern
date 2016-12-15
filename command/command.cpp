//
// Created by zeroknight on 2016/12/15.
//

#include "command.h"

int main()
{
    Invoker* i = new Invoker();
    Command* c1 = new Command1(); Command* c2 = new Command2();
    Receiver* r1 = new Receiver1(); Receiver* r2 = new Receiver2();
    c1->setReceiver(r1); c2->setReceiver(r2);
    i->runCommand(c1); i->runCommand(c2);
    return 0;
}