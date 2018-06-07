#include "State.h"

State::State(Action * entryaction, Action * exitaction, ActionList  *actionlist)
{
      entryAction =entryaction;
      exitAction =exitaction;
      actionList =actionlist;
}

State::~State()
{
    //dtor
}

ActionList* State::getStateActionlist()
{
   return actionList;
}
Action* State::getEntryAction()
{
    return entryAction;
}
Action* State::getExitAction()
{
    return exitAction;
}
      //  Display getTransitions();
