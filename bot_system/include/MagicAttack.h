#ifndef MAGICATTACK_H
#define MAGICATTACK_H

#include <Attack.h>

class MagicAttack : public Attack
{
    public:
        MagicAttack(Action * entryaction, Action * exitaction, ActionList  *actionlist);
        virtual ~MagicAttack();

    protected:

    private:
    int mana_decrease;
};

#endif // MAGICATTACK_H
