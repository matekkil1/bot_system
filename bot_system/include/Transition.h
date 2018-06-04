#ifndef TRANSITION_H
#define TRANSITION_H
#include <iostream>
#include "World.h"
#include "MakeActionList.h"
#include "Condition.h"
#include "State.h"
using namespace std;

class Transition
{
    public:
        int a; // number of Conditions
        Transition(int , Condition **, State*, State*);
        virtual ~Transition();
        State *currentState;
        State *nextState;
        ////string nextState;
        //string currentState;
        string someAction;
       // bool IfConditionsOk(World *world);
        //bool isTriggered(World *world);
        State* getTargetState();
        string getAction();
        Condition ** ConditionList;
        bool IsTriggered();

    protected:

    private:
};

#endif // TRANSITION_H
