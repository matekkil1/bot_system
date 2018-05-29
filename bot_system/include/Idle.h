#ifndef IDLE_H
#define IDLE_H

#include <State.h>


class Idle : public State
{
    public:
        Idle(Action * entryaction, Action * exitaction, ActionList  *actionlist);
        virtual ~Idle();

    protected:

    private:
};

#endif // IDLE_H
