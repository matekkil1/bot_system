#ifndef STATEMACHINE_H
#define STATEMACHINE_H
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


class StateMachine
{
    public:
        StateMachine(int ,State **,int ,Transition **,State *);
        virtual ~StateMachine();
        bool GoStateMachine();
        State * GetCurrentState();
    protected:

    private:
        int states_number;
        int transitions_number;
        State ** slist;
        Transition ** tlist;
        State *initialState;
        State *CurrentState;

};

#endif // STATEMACHINE_H
