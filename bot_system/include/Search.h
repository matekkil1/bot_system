#ifndef SEARCH_H
#define SEARCH_H

#include <State.h>

class Search : public State
{
    public:
        Search(Action * entryaction, Action * exitaction, ActionList  *actionlist);
        virtual ~Search();

    protected:

    private:
    int searching_peace;

};

#endif // SEARCH_H
