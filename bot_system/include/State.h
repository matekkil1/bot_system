#ifndef STATE_H
#define STATE_H
#include "Display.h"
#include "Action.h"
#include "ActionList.h"
using namespace std;

class State
{
    public:
        int howmanyactions;
        Action * entryAction;
        Action * exitAction;
        ActionList  *actionList;
        State(Action * entryaction, Action * exitaction, ActionList  *actionlist);
        ActionList* getStateActionlist();
        Action* getEntryAction();
        Action* getExitAction();

        virtual ~State();
    protected:


    private:

        int crouch_level; // in %
        int walk_peace; // in %
};

#endif // STATE_H
