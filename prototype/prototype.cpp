//
// Created by zeroknight on 2016/12/5.
//

#include <iostream>
#include <string.h>
#include "prototype.h"

using namespace std;

Product::Product(){
}

Product::~Product(){
    if(name != NULL){
        delete[] name;
    }
}

Product::Product(const char* s){
    if(s == NULL){
        name = new char[1];
        name[0] = '\0';
    }
    else{
        name = new char[strlen(s) + 1];
        strcpy(name, s);
    }
}

Product::Product(const Product &p){
    name = new char[strlen(p.name) + 1];
    strcpy(name, p.name);
}

Product* Product::Clone(){
    return new Product(*this);
}

void Product::Show(){
    cout<<"Product name: "<<name<<endl;
}

int main(){
    Product* mobile = new Product("mobile");
    Product* mobile2 = mobile->Clone();
    mobile->Show();
    mobile2->Show();
    if(mobile == mobile2){
        cout<<"Clone failed."<<endl;
    }
    else{
        cout<<"Clone success."<<endl;
    }
}