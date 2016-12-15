//
// Created by zeroknight on 2016/12/14.
//

#include "decorator.h"

int main()
{
    Person* p = new Person();
    Singer* s = new Singer();
    Actor* a = new Actor();

    s->Decorator(p);
    a->Decorator(s);
    p->Show();
    a->Show();
    a->Show();
    return 0;
}