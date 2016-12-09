//
// Created by zeroknight on 2016/12/9.
//

#include "facade.h"

int main(){
    Express* e = new Express();
    Package* p = new Package(5, 0);
    People* someone = new People();
    someone->send(p, e);
    return 0;
}