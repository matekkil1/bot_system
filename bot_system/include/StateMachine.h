#ifndef STATEMACHINE_H
#define STATEMACHINE_H
#include <iostream>
#include "State.h"
using namespace std;
class StateMachine
{
    public:
        StateMachine();
        virtual ~StateMachine();

        string statelist[10];
        State initialState(int);
        State *currentState;

    protected:

    private:
};

#endif // STATEMACHINE_H
