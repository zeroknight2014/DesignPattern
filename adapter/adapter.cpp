//
// Created by zeroknight on 2016/12/8.
//
#include "adapter.h"

int main(){
    Sequence* s1 = new Stack();
    Sequence* s2 = new Queue();
    s1->push(1); s1->pop();
    s2->push(2); s2->pop();
    Sequence* s3 = new Stack2();
    Sequence* s4 = new Queue2();
    s3->push(3); s3->pop();
    s4->push(4); s4->pop();
    return 0;
}
