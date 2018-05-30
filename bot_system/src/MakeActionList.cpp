#include "MakeActionList.h"

MakeActionList::MakeActionList()
{
    //ctor
}

MakeActionList::~MakeActionList()
{
    //dtor
}

void MakeActionList::CreateStateActionLists()
{
    Action dodgeaction;
    Action handattackaction;
    Action runaction;
    Action shieldefendaction;
    Action swordattackaction;
    Action bowattackaction;
    Action jumpaction;
    Action crawlaction;
    Action handdefendaction;

    ActionList arrowattackactionlist(1);
    arrowattackactionlist.AssignActions(bowattackaction,0);

    ActionList attackactionlist(1);
    attackactionlist.AssignActions(handattackaction,0);

    ActionList defendactionlist(1);
    defendactionlist.AssignActions(handattackaction,0);

    ActionList dodgeactionlist(1);
    dodgeactionlist.AssignActions(dodgeaction,0);

    ActionList escapeactionlist(1);
    escapeactionlist.AssignActions(runaction,0);

    ActionList grapleattackactionlist(1);
    grapleattackactionlist.AssignActions(crawlaction,0);

    ActionList idleactionlist(1);
    idleactionlist.AssignActions(jumpaction,0);

    ActionList magicattackactionlist(1);
    magicattackactionlist.AssignActions(handattackaction,0);

    ActionList searchactionlist(1);
    searchactionlist.AssignActions(runaction,0);




}

void MakeActionList::CreateTransitionActionLists()
{

}
