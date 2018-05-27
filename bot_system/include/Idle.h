#ifndef IDLE_H
#define IDLE_H

#include <State.h>


class Idle : public State
{
    public:
        Idle(int howmanyactions);
        virtual ~Idle();

    protected:

    private:
};

#endif // IDLE_H
