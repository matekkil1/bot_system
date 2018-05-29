#ifndef DEFEND_H
#define DEFEND_H

#include <State.h>

class Defend : public State
{
    public:
        Defend(Action * entryaction, Action * exitaction, ActionList  *actionlist);
        virtual ~Defend();

    protected:

    private:
};

#endif // DEFEND_H
