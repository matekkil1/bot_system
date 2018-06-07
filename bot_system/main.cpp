#include <iostream>
#include "Attack.h"
#include "StateMachine.h"
#include "MakeActionList.h"
#include "Condition.h"
#include "EqualsCondition.h"
#include "GreaterThanCondition.h"
#include "ActionList.h"
#include "Test01.h"
#include "Test02.h"
#include "Test03.h"
using namespace std;

int main()
{
    Test03 test;
    test.FunTest03();
    Test01 testone;
    testone.FunTest01();

    Test02 testtwo;
    testtwo.FunTest02();
}
