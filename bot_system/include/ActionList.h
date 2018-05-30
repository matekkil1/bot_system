#ifndef ACTIONLIST_H
#define ACTIONLIST_H
#include "Action.h"

class ActionList
{
    public:
        ActionList(int);
        virtual ~ActionList();
        //void AssignActions(Action,int);
        int howmanyactions;
        Action * actionlist;
        void AssignActions(Action, int);
    protected:

    private:



};

#endif // ACTIONLIST_H
