#include "State.h"

State::State(Action * entryaction, Action * exitaction;)
{
      //  ActionEnum *action = new ActionEnum[howmanyactions];
//        actionlist = action;
}

State::~State()
{
    //dtor
}

ActionList State::getStateActionlist();
{
   return this->actionlist;
}
Action State::getEntryAction()
{
    return entryaction;
}
Action State::getExitAction()
{
    return this->exitaction;
}
      //  Display getTransitions();
