//
// Created by zeroknight on 2016/12/15.
//

#include "mediator.h"

int main()
{
    QQMediator qq;
    Monitor *studentMonitor = new Monitor("Foxx");
    Secretary *studentSecretary = new Secretary("TC");
    StudentA *studentA = new StudentA("Jack");
    StudentB *studentB = new StudentB("Frank");

    qq.add_student(studentSecretary);
    qq.add_student(studentA);
    qq.add_student(studentB);

    studentMonitor->set_content("We'll have three rest days from tomorrow.");
    qq.notify(studentMonitor);
    return 0;
}