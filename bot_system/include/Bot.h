#ifndef BOT_H
#define BOT_H

#include "BotBrain.h"

enum Weapontype{axe,sword,bow,shield,null};
class Bot
{
    public:
        Bot();
        virtual ~Bot();

    protected:

    private:
        int hp;
        int mana;
        int lvl;
        int max_hp;
        int max_mana;
        Weapontype weapon;
};

#endif // BOT_H
