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

using namespace std;

class StateMachine
{
    public:
        StateMachine();
        virtual ~StateMachine();
        string statelist[7];
        State * slist[7];
        Transition * tlist[5];
        string initial;
        State *initialState();
        State *currentState();

    protected:

    private:
};

#endif // STATEMACHINE_H
