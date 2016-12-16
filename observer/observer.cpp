//
// Created by zeroknight on 2016/12/16.
//

#include "observer.h"

int main()
{
    Staff* s1 = new Staff("TheOneWhoIsPlayingGame");
    Staff* s2 = new Staff("TheOneWhoIsTalking");
    Secretary* sec = new Secretary();
    sec->AddObserver(*s1);sec->AddObserver(*s2);
    cout<<"Secretary says the boss will come soon."<<endl;
    sec->Notify();
    return 0;
}