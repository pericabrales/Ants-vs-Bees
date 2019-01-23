#include <iostream>
#include "Insect.h"
#include "Ant.h"
#include "Ninja.h"
using namespace std;

/*********************************************************************
** Function: Ninja
** Description: constructor
** Parameters: none
** Pre-Conditions: make a ninja object
** Post-Conditions: ninja object created
*********************************************************************/
Ninja::Ninja():Ant(){
	armor = 1;
	food_cost = 6;
	type = "ninja";
}

/*********************************************************************
** Function: action
** Description: returns 1 damage
** Parameters: none
** Pre-Conditions: bee passes through ninja
** Post-Conditions: bee gets 1 damage
*********************************************************************/
//Bees pass the ninja and occur 1 damage
int Ninja::action(){
	return 1;
}

/*********************************************************************
** Function: get_type
** Description: return type
** Parameters: none
** Pre-Conditions: user wants type
** Post-Conditions: returns type
*********************************************************************/
string Ninja::get_type(){
	return type;
}

/*********************************************************************
** Function: Ninja
** Description: copy constructor
** Parameters: ninja object
** Pre-Conditions: user wants to have the object just created be the same as another object
** Post-Conditions: objects have same variables
*********************************************************************/
Ninja::Ninja(const Ninja& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
}

/*********************************************************************
** Function: ninja
** Description: Assignment operator overload
** Parameters: ninja object
** Pre-Conditions: user wants to have object equal another object
** Post-Conditions: objects have same variables
*********************************************************************/
const Ninja& Ninja::operator=(const Ninja& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
	return *this;
}
