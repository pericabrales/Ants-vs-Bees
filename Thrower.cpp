#include <iostream>
#include "Insect.h"
#include "Ant.h"
#include "Thrower.h"
using namespace std;

/*********************************************************************
** Function: Thrower
** Description: constructor
** Parameters: none
** Pre-Conditions: populates variables with desired ones
** Post-Conditions: object created
*********************************************************************/
Thrower::Thrower():Ant(){
	armor = 1;
	food_cost = 4;
	type = "thrower";
}

/*********************************************************************
** Function: action
** Description: returns 1 because it inflicts 1 damage
** Parameters: none
** Pre-Conditions: bee is one space in front of bee
** Post-Conditions: bee gets hit with 1 damage
*********************************************************************/
//inlicts 1 damage to the bee in front of it
int Thrower::action(){
	return 1;
}

/*********************************************************************
** Function: get_type
** Description: returns type of the object
** Parameters: none
** Pre-Conditions: user wants type of the object
** Post-Conditions: gets type of the object
*********************************************************************/
string Thrower::get_type(){
	return type;
}

/*********************************************************************
** Function: Thrower
** Description: copy constructor
** Parameters: thrower object
** Pre-Conditions: user wants an object just created to be like another object
** Post-Conditions: both objects have same variables
*********************************************************************/
Thrower::Thrower(const Thrower& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
}

/*********************************************************************
** Function: thrower
** Description: Assignment operator overload
** Parameters: throwe object
** Pre-Conditions: user wants object to be same as other thrower object
** Post-Conditions: both objects have same variables
*********************************************************************/
const Thrower& Thrower::operator=(const Thrower& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
	return *this;
}
