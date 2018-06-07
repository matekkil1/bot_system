#include "Transition.h"
#include <iostream>
Transition::Transition(int b,Condition **tab, State *CurrentState, State *NextState)
{   a=b;
    currentState = CurrentState;
    nextState = NextState;
    ConditionList = new Condition * [b];
    ConditionList = tab;

}

Transition::~Transition()
{
    delete ConditionList;

}
 State* Transition::getTargetState()
 {
     return nextState;
 }

Action* Transition::getAction()
{
    return someAction;
}

bool Transition::IsTriggered()
{
    for(int i=0; i<a; i++)
    {
        if (ConditionList[i]->conditionValue==false)
        {
            return false;
        }
    }
    return true;
}

