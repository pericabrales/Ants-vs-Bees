#include <iostream>
#include "Insect.h"
#include "Ant.h"
#include "Fire.h"
using namespace std;

/*********************************************************************
** Function: fire
** Description: constructor
** Parameters: none
** Pre-Conditions: make a fire object
** Post-Conditions: fire object created
*********************************************************************/
Fire::Fire():Ant(){
	armor = 1;
	food_cost = 4;
	type = "fire";
}

/*********************************************************************
** Function: action
** Description: returns 3
** Parameters: none
** Pre-Conditions: ant has died by a bee
** Post-Conditions: gives bee 3 damage
*********************************************************************/
//if the ant has died, it reduces all of the bee's armor that killed it to 0 
int Fire::action(){
	return 3;
}

/*********************************************************************
** Function: get_type
** Description: returns type
** Parameters: none
** Pre-Conditions: user wants type
** Post-Conditions: returns type
*********************************************************************/
string Fire::get_type(){
	return type;
}

/*********************************************************************
** Function: Fire
** Description: copy constructor
** Parameters: fire object
** Pre-Conditions: user wants to have the object just created be the same as another object
** Post-Conditions: objects have same variables
*********************************************************************/
Fire::Fire(const Fire& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
}

/*********************************************************************
** Function: Fire
** Description: Assignment operator overload
** Parameters: Fire object
** Pre-Conditions: user wants to have object equal another object
** Post-Conditions: objects have same variables
*********************************************************************/
const Fire& Fire::operator=(const Fire& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
	return *this;
}
