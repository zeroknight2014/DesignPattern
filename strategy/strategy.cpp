//
// Created by zeroknight on 2016/12/14.
//

#include "strategy.h"


int main()
{
    //直接通过参数指定，传入一个特定算法的指针。
    Cache* c = new Cache(new CAlgorithmFIFO());
    c->Replace();
    //也是直接通过参数指定，只不过不是传入指针，而是一个标签。这样客户只要知道算法的相应标签即可，而不需要知道算法的具体定义。
    Cache2* c2 = new Cache2(LRU);
    c->Replace();
    //利用模板实现。算法通过模板的实参指定。
    Cache3<CAlgorithmRondom> c3;
    c3.Replace();
    return 0;
}