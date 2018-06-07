#ifndef TRANSITION_H
#define TRANSITION_H
#include <iostream>
#include "World.h"
#include "MakeActionList.h"
#include "Condition.h"
#include "State.h"
#include "Action.h"


class Transition
{
    public:

        Transition(int , Condition **, State*, State*);
        virtual ~Transition();
        State* getTargetState();
        Action *someAction;         // This is not private because not every Transition must have Actions to do ! (depend on the statemachine)
        Action* getAction();        // This is not private because not every Transition must have Actions to do ! (depend on the statemachine)
        bool IsTriggered();
        State *currentState;

    protected:

    private:
        int a; // number of Conditions
        Condition ** ConditionList;
        State *nextState;

};

#endif // TRANSITION_H
