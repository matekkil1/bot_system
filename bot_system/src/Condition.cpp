#include "Condition.h"

Condition::Condition()
{

}

Condition::~Condition()
{
    //dtor
}
bool Condition::CheckCondition(int c, int d)
{   a=c;
    b=d;
    return true;
}
bool Condition::ConditionValue()
{
    if (conditionValue==true) return true;
    else return false;
}
