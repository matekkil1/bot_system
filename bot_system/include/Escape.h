#ifndef ESCAPE_H
#define ESCAPE_H

#include <State.h>


class Escape : public State
{
    public:
        Escape(Action * entryaction, Action * exitaction, ActionList  *actionlist);
        virtual ~Escape();

    protected:

    private:
        int escape_peace;
};

#endif // ESCAPE_H
