#ifndef STATE_H
#define STATE_H
#include "Display.h"
#include "Action.h"
#include "ActionList.h"
class State
{
    public:
        int howmanyactions;
        Action * entryaction;
        Action * exitaction;
        //Display display;
        ActionList  *actionlist;
        State();

        virtual ~State();
    protected:
         int walk_peace; // in %

    private:

        int crouch_level; // in %
        ActionList getStateActionlist();
        Action getEntryAction();
        Action getExitAction();
        //Transition getTransitions();
};

#endif // STATE_H
