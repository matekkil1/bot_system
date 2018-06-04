#include "GreaterThanCondition.h"

GreaterThanCondition::GreaterThanCondition()
{
    //ctor
}

GreaterThanCondition::~GreaterThanCondition()
{
    //dtor
}

bool GreaterThanCondition::CheckCondition(int c, int d)
{   a=c;
    b=d;
    if (a>b)
    {
        conditionValue=true;
        return true;
    }
    else
    {
        conditionValue=false;
        return false;
    }
}
