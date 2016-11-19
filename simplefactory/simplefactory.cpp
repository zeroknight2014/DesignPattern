//
// Created by zeroknight on 2016/11/19.
//
#include <iostream>
#include "simplefactory.h"

void ProductA::show() {
    std::cout<<"This's ProductA."<<std::endl;
}

void ProductB::show() {
    std::cout<<"This's ProductB."<<std::endl;
}

void ProductC::show() {
    std::cout<<"This's ProductC."<<std::endl;
}

Product* Factory::CreateProduct(ProductType type) {
    switch (type) {
        case TypeA: return new ProductA();
        case TypeB: return new ProductB();
        case TypeC: return new ProductC();
        default: return NULL;
    }
}

Product* Factory2::CreateProduct(ProductType type){
    switch (type) {
        case TypeA: return new ProductA();
        case TypeB: return new ProductB();
        case TypeC: return new ProductC();
        default: return NULL;
    }
}

int main(){
    Product* productA = Factory::CreateProduct(TypeA);
    productA->show();
    Product* productB = Factory::CreateProduct(TypeB);
    productB->show();
    Product* productC = Factory::CreateProduct(TypeC);
    productC->show();
    //Factory2
    Factory2* f = new Factory2();
    Product* productA2 = f->CreateProduct(TypeA);
    productA2->show();
    Product* productB2 = f->CreateProduct(TypeA);
    productB2->show();
    Product* productC2 = f->CreateProduct(TypeA);
    productC2->show();
    return 0;
}