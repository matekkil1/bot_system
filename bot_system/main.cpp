#include <iostream>
#include "Attack.h"
#include "StateMachine.h"
#include "MakeActionList.h"
#include "Condition.h"
#include "EqualsCondition.h"
#include "GreaterThanCondition.h"
#include "ActionList.h"

using namespace std;

int main()
{
    int a=5;
    int b=5;
    int c=4;
    int d=7;
    Action * wsk1;
    Action akcja;
    wsk1 = &akcja;
    akcja.aaction = "bla bla";
    Action * wsk2;
    Action akcja2;
    wsk2 = &akcja2;


    akcja2.aaction = "cokolwiek";



    EqualsCondition *wsk3;
    EqualsCondition cond;
    wsk3 = &cond;

    GreaterThanCondition * wsk4;
    GreaterThanCondition cond2;
    wsk4 = &cond2;
    Condition *tab[2];

    tab[0] = wsk3;
    tab[1] = wsk4;

    //Condition * w_tab;
    //w_tab = &tab;

    cout<<tab[0]->CheckCondition(a,b)<<endl;
    cout<<tab[0]->conditionValue;


    cout<<tab[1]->CheckCondition(d,c);
    cout<<tab[1]->conditionValue<<endl<<endl<<endl;
    ActionList * w_lista;
    ActionList listaakcji(1);
    w_lista = &listaakcji;




    Attack * w_attack;
    Defend * w_defend;
    Attack atack(wsk1,wsk2,w_lista);
    w_attack = &atack;
    atack.sth="from";
    Defend defend(wsk2,wsk1,w_lista);
    w_defend = & defend;

    Transition * w_trans;
    Transition trans(2,tab,w_attack,w_defend);
    w_trans=&trans;
    cout<<endl<<endl<<trans.IsTriggered();
    cout<<(trans.currentState)->sth;





    cout << "Hello world!" << endl;
    return 0;
}
