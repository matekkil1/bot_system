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
    //dtor
}
bool StateMachine::GoStateMachine()
{
    for (int i=0; i<transitions_number;i++)
    {
       if( ( ((tlist[i])->IsTriggered()) == true ) && (((tlist[i])->currentState)== currentState) )
       {
           currentState=(tlist[i]->getTargetState());
           break;
       }
       tlist[i]->getAction();
       currentState->actionlist;
    }

    return true;
}
