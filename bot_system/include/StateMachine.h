#ifndef STATEMACHINE_H
#define STATEMACHINE_H
#include <iostream>
#include "State.h"
#include "Transition.h"
#include "ArrowAttack.h"
#include "Dodge.h"
#include "Escape.h"
#include "GrappleAttack.h"
#include "Idle.h"
#include "MagicAttack.h"
#include "Search.h"
#include "ActionList.h"

using namespace std;

class StateMachine
{
    public:
        StateMachine(int ,State **,int ,Transition **,State *);
        virtual ~StateMachine();
        bool GoStateMachine();
    protected:

    private:
        int states_number;
        int transitions_number;
        State ** slist;
        Transition ** tlist;
        State *initialState;
        State *currentState;

};

#endif // STATEMACHINE_H
