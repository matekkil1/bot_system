#ifndef BOTBRAIN_H
#define BOTBRAIN_H
#include "State.h"

class BotBrain
{
    public:
        BotBrain();
        virtual ~BotBrain();
        int hfo; // how far opponent is
        bool irta; // if ready to attack
    protected:

    private:
        bool IfOponnentNear(int range, int hfo); // ion
        bool IfAttack(int hp, bool ion);

       // bool If
};

#endif // BOTBRAIN_H
