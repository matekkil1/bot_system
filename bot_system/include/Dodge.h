#ifndef DODGE_H
#define DODGE_H

#include <Defend.h>


class Dodge : public Defend
{
    public:
        Dodge(Action * entryaction, Action * exitaction, ActionList  *actionlist);
        virtual ~Dodge();

    protected:

    private:
};

#endif // DODGE_H
