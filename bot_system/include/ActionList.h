#ifndef ACTIONLIST_H
#define ACTIONLIST_H
#include "Action.h"

class ActionList
{
    public:
        ActionList(int);
        virtual ~ActionList();
        //void AssignActions(Action,int);



    protected:

    private:
    Action * actionlist;
    int howmanyactions;
    void AssignActions(Action, int);
};

#endif // ACTIONLIST_H
