//
// Created by zeroknight on 2016/11/19.
//
/*
 * 抽象工厂模式的有点：
 *      1. 每个工厂可以生产多个对象，实际工作中，
 *      2. 把有一些有联系或者相近的产品，放到一个工厂去生产，便于管理
 */

#ifndef DESIGNPATTERN_ABSTRACTFACTORY_H
#define DESIGNPATTERN_ABSTRACTFACTORY_H

class Product{
public:
    virtual void show() = 0;
};

class ProductA: public Product{
public:
    virtual void show() = 0;
};

class ProductB: public Product{
public:
    virtual void show() = 0;
};

class ProductA1: public ProductA{
public:
    void show();
};

class ProductA2: public ProductA{
public:
    void show();
};

class ProductB1: public ProductB{
public:
    void show();
};

class ProductB2: public ProductB{
public:
    void show();
};


class Factory{
public:
    virtual ProductA* CreateProductA() = 0;
    virtual ProductB* CreateProductB() = 0;
};

//生成A1,B1
class Factory1: public Factory{
public:
    ProductA* CreateProductA();
    ProductB* CreateProductB();
};

//生成A2,B2
class Factory2: public Factory{
public:
    ProductA* CreateProductA();
    ProductB* CreateProductB();
};

//生成A1, B2
class Factory3: public Factory{
public:
    ProductA* CreateProductA();
    ProductB* CreateProductB();
};

#endif //DESIGNPATTERN_ABSTRACTFACTORY_H
