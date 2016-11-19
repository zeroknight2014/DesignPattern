//
// Created by zeroknight on 2016/11/19.
//

#include <iostream>
#include "factorymethod.h"

void ProductA::show() {
    std::cout<<"This's ProductA."<<std::endl;
}

void ProductB::show() {
    std::cout<<"This's ProductB."<<std::endl;
}

void ProductC::show() {
    std::cout<<"This's ProductC."<<std::endl;
}

Product* FactoryA::CreateProduct() {
    return new ProductA();
}

Product* FactoryB::CreateProduct() {
    return new ProductB();
}

Product* FactoryC::CreateProduct() {
    return new ProductC();
}

int main(){
    Factory* fa = new FactoryA();
    Product* productA = fa->CreateProduct();
    productA->show();
    fa = new FactoryB();
    Product* productB = fa->CreateProduct();
    productB->show();
    fa = new FactoryC();
    Product* productC = fa->CreateProduct();
    productC->show();
    return 0;
}

