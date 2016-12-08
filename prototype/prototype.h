//
// Created by zeroknight on 2016/12/5.
//

//当类中包含多个子类时，需要注意对对应子类对象的深拷贝

#ifndef DESIGNPATTERN_PROTOTYPE_H
#define DESIGNPATTERN_PROTOTYPE_H

class Product{
private:
    char* name;
public:
    Product();
    ~Product();
    Product(const char* s);
    Product(const Product &p);
    Product* Clone();
    void Show();
};


#endif //DESIGNPATTERN_PROTOTYPE_H
