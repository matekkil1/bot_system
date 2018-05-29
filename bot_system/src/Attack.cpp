#include "Attack.h"

Attack::Attack(Action * entryaction, Action * exitaction, ActionList  *actionlist)
:State(entryaction, exitaction, actionlist)
{
    //ctor
}

Attack::~Attack()
{
    //dtor
}

void Attack::Show()
{
    std::cout<<"Cos";
}
