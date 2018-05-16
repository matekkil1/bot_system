#ifndef BOT_H
#define BOT_H

#include "BotBrain.h"
#include "State.h"
#include "World.h"

enum Weapontype{axe,sword,bow,shield,null};
class Bot
{
    public:
        Bot();
        virtual ~Bot();
        BotBrain brain;
        void Think(BotBrain brain);
    protected:
        int hp;
        int range;
        int mana;
        int lvl;
        int potion_amount;
    private:

        int max_hp;
        int max_mana;
        int max_potion_amount;
        Weapontype weapon;
        State *state;

};

#endif // BOT_H
