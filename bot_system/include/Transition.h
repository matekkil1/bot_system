#ifndef TRANSITION_H
#define TRANSITION_H
#include <iostream>
#include "World.h"
#include "MakeActionList.h"
using namespace std;

class Transition
{
    public:
        Transition();
        virtual ~Transition();
        string nextState;
        string currentState;
        string someAction;
       // bool IfConditionsOk(World *world);
        bool isTriggered(World *world);
        string getTargetState();
        string getAction();
    protected:

    private:
};

#endif // TRANSITION_H
