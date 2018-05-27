#include "ActionList.h"

ActionList::ActionList(int howmanyactions)
{
    actionlist = new Action[howmanyactions];
}

ActionList::~ActionList()
{
    //dtor
}
