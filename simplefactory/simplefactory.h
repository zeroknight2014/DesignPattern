//
// Created by zeroknight on 2016/11/19.
//
/*
 * 为什么要对对象的创建new方式进行封装？
 * 1. 要new一个实体对象是件很谨慎的事情（不是指值对象），不要随便new。
 * 最好不要自己new，让别人去new，传给你去调用。这样new错了也是别人的事，换而言之你的模块是好质量的，禁得起推敲的。
 * 那么都不愿意去new，谁去new？让专门的一个工厂去new。
 * 2. 可以让你应对这种情况。你哪天心情好把类名改了。或者把构造函数参数改了(增加或减少参数)。
 * 而你代码中又有N处new了这个类。如果你又没用工厂。那你惨了。一个一个找来改吧。千万不要漏噢
 */

/*
 * 简单工厂模式的作用：
 *      1.隐藏对象创建的细节，可以去快速产生大量对象
 *      2.不用去new的时候还要了解对象的构造和析构
 * 简单工厂模式的缺点：
 *      1. 每增加一个对象时，需要去增加ProductType，修改工程的创建对象逻辑流程，不符合开闭原则
 * 于是，进一步抽象后，就有了工程方法模式factorymethod
 */

#ifndef DESIGNPATTERN_SIMPLEFACTORY_H
#define DESIGNPATTERN_SIMPLEFACTORY_H

enum ProductType {
    TypeA, TypeB, TypeC
};

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
    static Product* CreateProduct(ProductType type);
};

class Factory2{
public:
    Product* CreateProduct(ProductType type);
};


#endif //DESIGNPATTERN_SIMPLEFACTORY_H
