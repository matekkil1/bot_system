#ifndef ATTACK_H
#define ATTACK_H

#include <State.h>


class Attack : public State
{
    public:
        Attack(int);
        virtual ~Attack();
        void Show();
    protected:
    private:
        int attack_peace;
        int range;
};

#endif // ATTACK_H
