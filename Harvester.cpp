#include <iostream>
#include "Insect.h"
#include "Ant.h"
#include "Harvester.h"
using namespace std;

/*********************************************************************
** Function: Harvester
** Description: constructor
** Parameters: none
** Pre-Conditions: make a Harvester object
** Post-Conditions: harvester object created
*********************************************************************/
Harvester::Harvester():Ant(){
	armor = 1;
	food_cost = 2;
	type = "harvester";
}

/*********************************************************************
** Function: action
** Description: returns 1 food for the food bank
** Parameters: none
** Pre-Conditions: user adds a harvest ant to the board
** Post-Conditions: 1 food added to food bank
*********************************************************************/
//adds 1 food to the food bank
int Harvester::action(){
	return 1;
}

/*********************************************************************
** Function: get_type
** Description: returns type
** Parameters: none
** Pre-Conditions: user wants type
** Post-Conditions: returns type
*********************************************************************/
string Harvester::get_type(){
	return type;
}

/*********************************************************************
** Function: Harvester
** Description: copy constructor
** Parameters: Harvester object
** Pre-Conditions: user wants to have the object just created be the same as another object
** Post-Conditions: objects have same variables
*********************************************************************/
Harvester::Harvester(const Harvester& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
}

/*********************************************************************
** Function: Harvester
** Description: Assignment operator overload
** Parameters: Harvester object
** Pre-Conditions: user wants to have object equal another object
** Post-Conditions: objects have same variables
*********************************************************************/
const Harvester& Harvester::operator=(const Harvester& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
	return *this;
}
