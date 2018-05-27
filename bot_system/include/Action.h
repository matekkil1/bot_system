#ifndef ACTION_H
#define ACTION_H
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
    protected:

    private:
        ActionEnum action;
};

#endif // ACTION_H
