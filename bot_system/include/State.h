#ifndef STATE_H
#define STATE_H
#include "Display.h"
#include "Action.h"
enum ActionEnum {
HandAttack,
SwordAttack,
BowAttack,
Jump,
Run,
Dodge,
Crawl,
HandDefend,
GetHit,
ShieldDefend
};
class State
{
    public:
        int howmanystates;
        ActionEnum* actionlist;
        Display display;
        Action action;
        State(int);
        virtual ~State();
    protected:
         int walk_peace; // in %

    private:

        int crouch_level; // in %
        Display getStateAction();
        Display getEntryAction();
        Display getExitAction();
        Display getTransitions();
};

#endif // STATE_H
