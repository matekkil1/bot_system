#ifndef MAKEACTIONLIST_H
#define MAKEACTIONLIST_H
#include "ActionList.h"

class MakeActionList
{
    public:
        MakeActionList();
        virtual ~MakeActionList();
        void CreateStateActionLists();       //for specific states in a  machine
        void CreateTransitionActionLists();

    protected:

    private:
};

#endif // MAKEACTIONLIST_H
