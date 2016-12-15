//
// Created by zeroknight on 2016/12/14.
//
#include "flyweight.h"

int main()
{
    StudentPool* pool = new StudentPool();
    StudentFactory* factory = new StudentFactory();
    StudentInfo* s1 = factory->CreateStudentInfo(1, "liu");
    StudentInfo* s2 = factory->CreateStudentInfo(11, "chen");
    StudentInfo* s3 = factory->CreateStudentInfo(13, "test");
    pool->put(1, s1);
    pool->put(2, s2);
    pool->put(5, s3);

    if(pool->contain(3)) {
        cout << "contain 3." << endl;
    }
    else if(pool->contain(5)){
            cout<<"contain 5."<<endl;
    }

    StudentInfo* s4 = pool->getStudentInfo(1);
    s4->printName();
    return 0;
}
