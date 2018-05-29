#include "Dodge.h"

Dodge::Dodge(Action * entryaction, Action * exitaction, ActionList  *actionlist)
:Defend(entryaction, exitaction, actionlist)
{
    //ctor
}

Dodge::~Dodge()
{
    //dtor
}
