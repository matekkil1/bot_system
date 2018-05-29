#include "State.h"

State::State(Action * entryaction, Action * exitaction, ActionList  *actionlist)
{
      this->entryaction=entryaction;
      this->exitaction=exitaction;
      this->actionlist=actionlist;
}

State::~State()
{
    //dtor
}

ActionList* State::getStateActionlist()
{
   return this->actionlist;
}
Action* State::getEntryAction()
{
    return this->entryaction;
}
Action* State::getExitAction()
{
    return this->exitaction;
}
      //  Display getTransitions();
