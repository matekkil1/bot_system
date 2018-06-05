#include "Test02.h"


Test02::Test02()
{
    //ctor
}

Test02::~Test02()
{
    //dtor
}

void Test02::FunTest02()
{   string text =" Spodziewany wynik to: ";
    double t[4][4]={{5,5,4,7}, {6,7,4,3}, {4,4,2.3,9}, {1,1,4,4}};
    double tcheck[4][5]={{1,1,1,1,1}, {0,0,0,0,0}, {1,1,1,1,1}, {0,0,0,0,0}};

    for(int i=0;i<4;i++)
    {
    int a=t[i][0];
    int b=t[i][1];
    int d=t[i][2];
    int c=t[i][3];

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
    wsk3->CheckCondition(a,b);

    GreaterThanCondition * wsk4;
    GreaterThanCondition cond2;
    wsk4 = &cond2;
    wsk4->CheckCondition(c,d);

    Condition *tab[2];

    tab[0] = wsk3;
    tab[1] = wsk4;


    ActionList * w_list;
    ActionList loa(1);  //list of actions
    w_list = &loa;

    Attack * w_attack;
    Defend * w_defend;
    Dodge* w_dodge;

    Escape * w_escape;



    Attack atack(wsk1,wsk2,w_list);
    w_attack = &atack;

    Defend defend(wsk2,wsk1,w_list);
    w_defend = & defend;

    Dodge dodge(wsk5,wsk6,w_list);
    w_dodge = &dodge;

    Escape escape(wsk7,wsk8,w_list);
    w_escape = &escape;


    Transition* tran01;
    Transition* tran02;
    Transition* tran03;
    Transition* tran04;
    Transition* tran05;
    Transition tran_n01(2,tab,w_attack,w_defend);
    Transition tran_n02(2,tab,w_attack,w_dodge);
    Transition tran_n03(2,tab,w_dodge,w_escape);
    Transition tran_n04(2,tab,w_attack,w_escape);
    Transition tran_n05(2,tab,w_escape,w_defend);

    cout<<tran_n01.IsTriggered();
    cout<<tran_n02.IsTriggered();
    cout<<tran_n03.IsTriggered();
    cout<<tran_n04.IsTriggered();
    cout<<tran_n05.IsTriggered()<<text;
    for(int k=0;k<5;k++) cout<<tcheck[i][k];
    cout<<endl<<endl;







    }
}
