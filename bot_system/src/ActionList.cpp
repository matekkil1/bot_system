#include "ActionList.h"

ActionList::ActionList(int howmanyactions)
{
    actionlist = new Action[howmanyactions];
}

ActionList::~ActionList()
{
    //dtor
}

void ActionList::AssignActions(Action action,int i)
{
        this->actionlist[i] = action;
}
