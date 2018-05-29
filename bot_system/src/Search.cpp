#include "Search.h"

Search::Search(Action * entryaction, Action * exitaction, ActionList  *actionlist)
:State(entryaction, exitaction, actionlist)
{
    //ctor
}

Search::~Search()
{
    //dtor
}
