//
// Created by zeroknight on 2016/11/18.
//

#ifndef DESIGNPATTERN_SINGLETON_H
#define DESIGNPATTERN_SINGLETON_H

//未完成：
//将复制构造函数和=操作符都设为私有
//考虑如何更好的去优化这个单例的析构（可以尝试用内部类去进行析构）


//饿汉式单例, 在类被加载时，就会实例化一个对象
class HungrySingleton {
private:
    static HungrySingleton *instance;

    HungrySingleton() {};
public:
    static HungrySingleton *getInstance();
};

//懒汉式单例, 在调用取得实例方法时，才会实例化一个对象
class Singleton {
private:
    static Singleton *instance;

    Singleton() {};
public:
    static Singleton *getInstance();

    static Singleton *getInstance2();

    static Singleton *getInstance3();

    static void destroyInstance();
};

#endif //DESIGNPATTERN_SINGLETON_H
