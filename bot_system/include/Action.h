#ifndef ACTION_H
#define ACTION_H
#include <iostream>
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

class Action
{
    public:
        Action();
        virtual ~Action();
        ActionEnum action;
        std::string aaction;
    protected:

    private:

};

#endif // ACTION_H
