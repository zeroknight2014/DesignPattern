//
// Created by zeroknight on 2016/12/5.
//

#ifndef DESIGNPATTERN_BUILDER_H
#define DESIGNPATTERN_BUILDER_H

//将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示。

class Builder{
public:
    virtual void BuildHead(){};
    virtual void BuildBody(){};
    virtual void BuildLeftArm(){};
    virtual void BuildRightArm(){};
    virtual void BuildLeftLeg(){};
    virtual void BuildRightLeg(){};
};

class FatBuilder: public Builder{
public:
    void BuildHead();
    void BuildBody();
    void BuildLeftArm();
    void BuildRightArm();
    void BuildLeftLeg();
    void BuildRightLeg();
};

class Director{
private:
    Builder* m_builder;
public:
    Director(Builder* b);

    void Create();
};

#endif //DESIGNPATTERN_BUILDER_H
