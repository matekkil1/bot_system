#ifndef CONDITION_H
#define CONDITION_H


class Condition
{
    public:
        Condition();
        virtual ~Condition();
        virtual bool CheckCondition(int,int);
        double a,b;
        bool conditionValue;
        virtual bool ConditionValue();

    protected:

    private:

};

#endif // CONDITION_H
