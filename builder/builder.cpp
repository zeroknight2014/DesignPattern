//
// Created by zeroknight on 2016/12/5.
//

#include <iostream>
#include "builder.h"

using namespace std;
Director::Director(Builder* b){
    m_builder = b;
}

void Director::Create(){
    m_builder->BuildHead();
    m_builder->BuildBody();
    m_builder->BuildLeftArm();
    m_builder->BuildRightArm();
    m_builder->BuildLeftLeg();
    m_builder->BuildRightLeg();
}

void FatBuilder::BuildHead(){
    cout<<"build fat head"<<endl;
}

void FatBuilder::BuildBody(){
    cout<<"build fat body"<<endl;
}

void FatBuilder::BuildLeftArm(){
    cout<<"build fat left arm"<<endl;
}

void FatBuilder::BuildRightArm(){
    cout<<"build fat rught arm"<<endl;
}

void FatBuilder::BuildLeftLeg(){
    cout<<"build fat left leg"<<endl;
}

void FatBuilder::BuildRightLeg(){
    cout<<"build fat right leg"<<endl;
}


int main(){
    FatBuilder* f = new FatBuilder();
    Director* d = new Director(f);
    d->Create();
}