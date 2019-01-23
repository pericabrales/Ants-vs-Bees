#include <iostream>
#include "Insect.h"
#include "Ant.h"
#include "Long_Thrower.h"
using namespace std;

/*********************************************************************
** Function: long thrower
** Description: constructor
** Parameters: none
** Pre-Conditions: make a long thrower object
** Post-Conditions: long thrower object created
*********************************************************************/
Long_Thrower::Long_Thrower():Ant(){
	armor = 1;
	food_cost = 3;
	type = "long";
}

/*********************************************************************
** Function: action
** Description: returns 1
** Parameters: none
** Pre-Conditions: bee is at least 4 spaces away
** Post-Conditions: returns 1 damage
*********************************************************************/
//inflicts 1 paint on the bee that is closest to it, but at least 4 spaces away
int Long_Thrower::action(){
	return 1;
}

/*********************************************************************
** Function: get_type
** Description: returns type
** Parameters: none
** Pre-Conditions: user wants type
** Post-Conditions: returns type
*********************************************************************/
string Long_Thrower::get_type(){
	return type;
}

/*********************************************************************
** Function: long_Thrower
** Description: copy constructor
** Parameters: short thrower object
** Pre-Conditions: user wants to have the object just created be the same as another object
** Post-Conditions: objects have same variables
*********************************************************************/
Long_Thrower::Long_Thrower(const Long_Thrower& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
}

/*********************************************************************
** Function: long_Thrower
** Description: Assignment operator overload
** Parameters: short thrower object
** Pre-Conditions: user wants to have object equal another object
** Post-Conditions: objects have same variables
*********************************************************************/
const Long_Thrower& Long_Thrower::operator=(const Long_Thrower& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
	return *this;
}
