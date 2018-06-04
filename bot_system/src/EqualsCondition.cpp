#include "EqualsCondition.h"

EqualsCondition::EqualsCondition()
{
    //ctor
}

EqualsCondition::~EqualsCondition()
{
    //dtor
}
bool EqualsCondition::CheckCondition(int c,int d)
{   this->a =c;
    this->b =d;
    if(a==b)
        {conditionValue= true;
        return true;
        }
    else
    {
        conditionValue=false;
        return false;
    }
}
