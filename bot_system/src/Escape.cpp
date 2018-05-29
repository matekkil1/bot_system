#include "Escape.h"

Escape::Escape(Action * entryaction, Action * exitaction, ActionList  *actionlist)
:State(entryaction, exitaction, actionlist)
{
    //ctor
}

Escape::~Escape()
{
    //dtor
}
