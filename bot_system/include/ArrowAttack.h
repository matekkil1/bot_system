#ifndef ARROWATTACK_H
#define ARROWATTACK_H

#include <Attack.h>


class ArrowAttack : public Attack
{
    public:
        ArrowAttack(Action * entryaction, Action * exitaction, ActionList  *actionlist);
        virtual ~ArrowAttack();

    protected:

    private:
};

#endif // ARROWATTACK_H
