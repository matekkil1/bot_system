#ifndef GRAPPLEATTACK_H
#define GRAPPLEATTACK_H

#include <Attack.h>


class GrappleAttack : public Attack
{
    public:
        GrappleAttack(int howmanystates);
        virtual ~GrappleAttack();

    protected:

    private:
        int speed_decrease; // in %

};

#endif // GRAPPLEATTACK_H
