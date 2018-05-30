#include "StateMachine.h"

StateMachine::StateMachine()
{
    statelist[0]= "GrappleAttack";
    statelist[1]= "ArrowAttack";
    statelist[2]= "MagicAttack";
    statelist[3]= "Idle";
    statelist[4]= "Search";
    statelist[5]= "Dodge";
    //statelist[6]= "Jump"; DO  WYWYALENIA CHYBA
    statelist[6]= "Escape";

    Action dodgeaction;
    dodgeaction.action= Dodge;

    Action handattackaction;
    handattackaction.action= HandAttack;

    Action runaction;
    runaction.action= Run;

    Action shieldefendaction;
    shieldefendaction.action= ShieldDefend;





   /* slist[1] = new ArrowAttack(3);
    slist[6] = new Escape(2);
    slist[0] = new GrappleAttack(4);
    slist[2]= new MagicAttack(4);
    slist[4] = new Search(3);*

    //Dodge * dodge = new Dodge(4); // TUTAJ JAKIS PROBLEM NIE WIEM SKAD ???
    initial = "Idle";
    slist[3] = new Idle(2);
    //initialState = slist[3];*/

}

StateMachine::~StateMachine()
{
    //dtor
}
