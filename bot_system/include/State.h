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
        Action * entryaction;
        string sth;
        Action * exitaction;
        ActionList  *actionlist;
        State(Action * entryaction, Action * exitaction, ActionList  *actionlist);

        virtual ~State();
    protected:
         int walk_peace; // in %

    private:

        int crouch_level; // in %
        ActionList* getStateActionlist();
        Action* getEntryAction();
        Action* getExitAction();
        //Transition getTransitions();
};

#endif // STATE_H
