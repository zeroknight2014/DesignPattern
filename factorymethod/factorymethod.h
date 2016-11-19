//
// Created by zeroknight on 2016/11/19.
//
/*
 * 工厂方法模式基于简单工厂模式抽象而来，其优点：
 *      1.弥补了简单工厂模式违背开闭原则的缺点
 *      2.将每个对象的创建交由工厂的子类来做，每个子工厂生产一个对象
 * 有此带来的问题：
 *      1. 每增加一个对象，就要增加一个工厂，代码极速膨胀
 *      2. 对象越多，越难管理
 *      3. 生成的对象的产品级别只有一层，无法适应多层级的对象继承
 *      4. 类似对象的产品也要生成一个工厂，比较麻烦
 * 有此进一步产生了抽象工厂模式，每个工厂可以生产多个对象，实际工作中，
 * 把有一些有联系或者相近的产品，放到一个工厂去生产，没有必要单独再开一个工厂了
 */


#ifndef DESIGNPATTERN_FACTORYMETHOD_H
#define DESIGNPATTERN_FACTORYMETHOD_H

class Product{
public:
    virtual void show() = 0;
};

class ProductA: public Product{
public:
    void show();
};

class ProductB: public Product{
public:
    void show();
};

class ProductC: public Product{
public:
    void show();
};

class Factory{
public:
    virtual Product* CreateProduct() = 0;
};

class FactoryA: public Factory{
public:
    Product* CreateProduct();
};

class FactoryB: public Factory{
public:
    Product* CreateProduct();
};

class FactoryC: public Factory{
public:
    Product* CreateProduct();
};


#endif //DESIGNPATTERN_FACTORYMETHOD_H
