//
// Created by zeroknight on 2016/11/19.
//


#include <iostream>
#include "abstractfactory.h"

void ProductA1::show() {
    std::cout<<"This's ProductA1."<<std::endl;
}

void ProductA2::show() {
    std::cout<<"This's ProductA2."<<std::endl;
}

void ProductB1::show() {
    std::cout<<"This's ProductB1."<<std::endl;
}

void ProductB2::show() {
    std::cout<<"This's ProductB2."<<std::endl;
}

ProductA* Factory1::CreateProductA(){
    return new ProductA1();
}

ProductB* Factory1::CreateProductB(){
    return new ProductB1();
}

ProductA* Factory2::CreateProductA(){
    return new ProductA2();
}

ProductB* Factory2::CreateProductB(){
    return new ProductB2();
}

ProductA* Factory3::CreateProductA(){
    return new ProductA1();
}

ProductB* Factory3::CreateProductB(){
    return new ProductB2();
}

int main(){
    Factory* fa = new Factory1();
    Product* productA1 = fa->CreateProductA();
    Product* productB1 = fa->CreateProductB();
    productA1->show();
    productB1->show();
    fa = new Factory2();
    Product* productA2 = fa->CreateProductA();
    Product* productB2 = fa->CreateProductB();
    productA2->show();
    productB2->show();
    fa = new Factory3();
    Product* productA1_3 = fa->CreateProductA();
    Product* productB2_3 = fa->CreateProductB();
    productA1_3->show();
    productB2_3->show();
    return 0;
}
