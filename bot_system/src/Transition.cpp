#include "Transition.h"

Transition::Transition()
{
    //ctor
}

Transition::~Transition()
{
    //dtor
}
 string Transition::getTargetState()
 {
     return nextState;
 }

string Transition::getAction()
{
    return someAction;
}
