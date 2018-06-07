#include "Test01.h"
#include <iostream>
#include "Action.h"
#include "Condition.h"
#include "State.h"
#include "EqualsCondition.h"
#include "GreaterThanCondition.h"
#include "Attack.h"
#include "Defend.h"
using namespace std;
Test01::Test01()
{
    //ctor
}

Test01::~Test01()
{
    //dtor
}
void Test01::FunTest01()
{   string text =" Spodziewany wynik to: ";
    double t[4][4]={{5,5,4,7}, {6,7,4,3}, {4,4,2.3,9}, {1,1,4,4}};
    double tcheck[4][4]={{1,1,1,1}, {0,0,0,0}, {1,1,1,1}, {1,1,0,0}}; // przewidywane wartosci

    Action * wsk1;
    Action akcja;
    wsk1 = &akcja;
    Action * wsk2;
    Action akcja2;
    wsk2 = &akcja2;
    EqualsCondition *wsk3;
    EqualsCondition cond;
    wsk3 = &cond;

    GreaterThanCondition * wsk4;
    GreaterThanCondition cond2;
    wsk4 = &cond2;
    Condition *tab[2];

    cout<<"Test funkcjonalnosci klasy Condition"<<endl;
    for(int i=0;i<4;i++)
    {

    int a=t[i][0];
    int b=t[i][1];
    int c=t[i][2];
    int d=t[i][3];
    int val[4];


    tab[0] = wsk3;
    tab[1] = wsk4;

    val[0]=tab[0]->CheckCondition(a,b);
    val[1]=tab[0]->conditionValue;
    val[2]=tab[1]->CheckCondition(d,c);
    val[3]=tab[1]->conditionValue;

    cout<<tab[0]->CheckCondition(a,b);
    cout<<tab[0]->conditionValue;
    cout<<tab[1]->CheckCondition(d,c);
    cout<<tab[1]->conditionValue<<text;
    for(int k=0;k<4;k++) cout<< val[k];
    cout<<endl;




   /* ActionList * w_lista;
    ActionList listaakcji(1);
    w_lista = &listaakcji;
    Attack * w_attack;
    Defend * w_defend;
    Attack atack(wsk1,wsk2,w_lista);
    w_attack = &atack;
    ;
    Defend defend(wsk2,wsk1,w_lista);
    w_defend = & defend;*/
    }
    cout<<endl;
}
