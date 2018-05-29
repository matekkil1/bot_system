#include "Idle.h"

Idle::Idle(Action * entryaction, Action * exitaction, ActionList  *actionlist)
:State(entryaction, exitaction, actionlist)
{
    //ctor
}

Idle::~Idle()
{
    //dtor
}
