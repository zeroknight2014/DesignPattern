//
// Created by zeroknight on 2016/11/17.
//
#include <iostream>
#include "singleton.h"


HungrySingleton *HungrySingleton::instance = new HungrySingleton();
HungrySingleton *HungrySingleton::getInstance(){
 return instance;
}


Singleton *Singleton::instance = NULL;

//通用写法，但是多线程时，有问题
Singleton *Singleton::getInstance() {
    if (instance == NULL)
        instance = new Singleton();
    return instance;
}

//多线程时，性能不是很好，每次判断都会锁定，造成大量线程阻塞
Singleton *Singleton::getInstance2() {
//    lock();
    if (instance == NULL){
        instance = new Singleton();
    }
//    unlock();
    return instance;
}

//增强版，多线程时，减少逻辑判断导致的线程阻塞
Singleton *Singleton::getInstance3() {
    if (instance == NULL){
//        lock();
        if (instance == NULL) {
            instance = new Singleton();
        }
//        unlock();

    }
    return instance;
}

int main() {
    HungrySingleton *mHSingleton1 = HungrySingleton::getInstance();
    HungrySingleton *mHSingleton2 = HungrySingleton::getInstance();
    if (mHSingleton1 == mHSingleton2) {
        std::cout << "HungrySingleton1 = HungrySingleton2!" << std::endl;
    }
    Singleton *mSingleton1 = Singleton::getInstance();
    Singleton *mSingleton2 = Singleton::getInstance();
    if (mSingleton1 == mSingleton2) {
        std::cout << "singleton1 = singleton2!" << std::endl;
    }
    return 0;
}
