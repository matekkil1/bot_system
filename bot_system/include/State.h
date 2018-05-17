#ifndef STATE_H
#define STATE_H

#include "Action.h"
class State
{
    public:
        State();
        virtual ~State();

    protected:
         int walk_peace; // in %

    private:

        int crouch_level; // in %
};

#endif // STATE_H
