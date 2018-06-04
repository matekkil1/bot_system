#ifndef EQUALSCONDITION_H
#define EQUALSCONDITION_H

#include <Condition.h>


class EqualsCondition : public Condition
{
    public:
        EqualsCondition();
        virtual ~EqualsCondition();
        bool CheckCondition(int,int);
    protected:

    private:
};

#endif // EQUALSCONDITION_H
