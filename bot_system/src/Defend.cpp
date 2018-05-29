#include "Defend.h"

Defend::Defend(Action * entryaction, Action * exitaction, ActionList  *actionlist)
:State(entryaction, exitaction, actionlist)
{
    //ctor
}

Defend::~Defend()
{
    //dtor
}
