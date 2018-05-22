#include "State.h"

State::State(int howmanystates)
{
        ActionEnum *action = new ActionEnum[howmanystates];
        actionlist = action;
}

State::~State()
{
    //dtor
}

Display getStateAction()
{
//    return display;
}
        Display getEntryAction();
        Display getExitAction();
        Display getTransitions();
