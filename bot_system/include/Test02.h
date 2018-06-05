#ifndef TEST02_H
#define TEST02_H
#include <iostream>
#include "Action.h"
#include "Condition.h"
#include "State.h"
#include "EqualsCondition.h"
#include "GreaterThanCondition.h"
#include "Attack.h"
#include "Defend.h"
#include "Dodge.h"
#include "Escape.h"
#include "StateMachine.h"
#include <iostream>
using namespace std;

class Test02
{
    public:
        Test02();
        virtual ~Test02();
        void FunTest02();
    protected:

    private:
};

#endif // TEST02_H
