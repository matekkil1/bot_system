#include "Test03.h"

Test03::Test03()
{
    //ctor
}

Test03::~Test03()
{
    //dtor
}

 void Test03::FunTest03()
 {
    string text =" Spodziewany wynik to: ";
    double t[4][4]={{5,5,4,7}, {3,7,4,3}, {4,4,2.3,9}, {1,1,4,4}};

    Action * wsk1;
    Action akcja;
    wsk1 = &akcja;

    Action * wsk2;
    Action akcja2;
    wsk2 = &akcja2;

    Action * wsk5;
    Action akcja5;
    wsk5 = &akcja5;

    Action * wsk6;
    Action akcja6;
    wsk6 = &akcja6;

    Action * wsk8;
    Action akcja8;
    wsk8 = &akcja8;

    Action * wsk7;
    Action akcja7;
    wsk7 = &akcja7;

    EqualsCondition *wsk3;
    EqualsCondition cond;
    wsk3 = &cond;

    GreaterThanCondition * wsk4;
    GreaterThanCondition cond2;
    wsk4 = &cond2;

    EqualsCondition *wsk9;
    EqualsCondition cond3;
    wsk9 = &cond3;

    ActionList * w_list;
    ActionList loa(1);  //list of actions
    w_list = &loa;

    Attack * w_attack;
    Defend * w_defend;
    Dodge* w_dodge;
    Escape * w_escape;


    State * w_currentstate;
    StateMachine * w_machine;
    Transition* w_tran01;
    Transition* w_tran02;
    Transition* w_tran03;
    Transition* w_tran04;
    Transition* w_tran05;
    Attack atack(wsk1,wsk2,w_list);

    Defend defend(wsk2,wsk1,w_list);

    Dodge dodge(wsk5,wsk6,w_list);

    Escape escape(wsk7,wsk8,w_list);

    w_attack = &atack;
    w_defend = & defend;
    w_dodge = &dodge;
    w_escape = &escape;
    State *stab[4];

    Condition *tab[2];

    tab[0] = wsk3;
    tab[1] = wsk4;

    Condition *tabs[1];
    tabs[0] = wsk9;




    stab[0]=w_attack;
    stab[1]=w_defend;
    stab[2]=w_dodge;
    stab[3]=w_escape;

    Transition tran_n01(2,tab,w_attack,w_defend);
    Transition tran_n02(1,tabs,w_attack,w_dodge);
    Transition tran_n03(2,tab,w_dodge,w_escape);
    Transition tran_n04(2,tab,w_attack,w_escape);
    Transition tran_n05(2,tab,w_escape,w_defend);

    w_tran01= &tran_n01;
    w_tran02= &tran_n02;
    w_tran03= &tran_n03;
    w_tran04= &tran_n04;
    w_tran05= &tran_n05;


    Transition *ttab[5];
    ttab[0]=w_tran01;
    ttab[1]=w_tran02;
    ttab[2]=w_tran03;
    ttab[3]=w_tran04;
    ttab[4]=w_tran05;

    StateMachine machine(4,stab,5,ttab,w_attack);
    w_currentstate = machine.GetCurrentState();


    cout<<"Test funkcjonalnosci klasy StateMachine"<<endl;

    for(int i=0;i<4;i++)
    {
    int a=t[i][0];
    int b=t[i][1];
    int d=t[i][2];
    int c=t[i][3];


    wsk3->CheckCondition(a,b);
    wsk4->CheckCondition(c,d);
    wsk9->CheckCondition(a,d);

    cout<< machine.GoStateMachine();
    w_currentstate = machine.GetCurrentState();

    }
    cout<<text<<"1000"<<endl;



 }
