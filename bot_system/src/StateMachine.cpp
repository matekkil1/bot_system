#include "StateMachine.h"

StateMachine::StateMachine(int states_Number,State **stab,int transitions_Number,Transition **ttab,State *Initialstate)
{
states_number=states_Number;
transitions_number=transitions_Number;

tlist = new Transition * [transitions_number];
tlist = ttab;
slist = new State * [states_number];
slist = stab;

initialState=Initialstate;
currentState = initialState;
}

StateMachine::~StateMachine()
{
    delete tlist;
    delete slist;
}
bool StateMachine::GoStateMachine()
{
    for (int i=0; i<transitions_number;i++)
    {
       if( ( ((tlist[i])->IsTriggered()) == true ) && (((tlist[i])->currentState)== currentState) )
       {
           currentState=(tlist[i]->getTargetState());
           return true;
       }
       tlist[i]->getAction();
       currentState->actionList;
    }

    return false;
}

State * StateMachine::GetCurrentState()
{
    return currentState;
}
