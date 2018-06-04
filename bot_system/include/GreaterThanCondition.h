#ifndef GREATERTHANCONDITION_H
#define GREATERTHANCONDITION_H

#include "Condition.h"

class GreaterThanCondition : public Condition
{
    public:
        GreaterThanCondition();
        virtual ~GreaterThanCondition();
        bool CheckCondition(int,int);

    protected:

    private:
};

#endif // GREATERTHANCONDITION_H
