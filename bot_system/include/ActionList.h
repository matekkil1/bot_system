#ifndef ACTIONLIST_H
#define ACTIONLIST_H
#include "Action.h"

class ActionList
{
    public:
        ActionList(int howmanyactions);
        virtual ~ActionList();

    protected:

    private:
        int howmanyactions;
        Action * actionlist;
};

#endif // ACTIONLIST_H
