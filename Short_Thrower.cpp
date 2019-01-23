#include <iostream>
#include "Insect.h"
#include "Ant.h"
#include "Short_Thrower.h"
using namespace std;
/*********************************************************************
** Function: short_thrower
** Description: constructor
** Parameters: none
** Pre-Conditions: populate variables
** Post-Conditions: variables populated
*********************************************************************/
Short_Thrower::Short_Thrower():Ant(){
	armor = 1;
	food_cost = 3;
	type = "short";
}

/*********************************************************************
** Function: action
** Description: do one damage no more than 2 spaces away
** Parameters: none
** Pre-Conditions: bee is no more than 2 spaces away
** Post-Conditions: return 1
*********************************************************************/
//inflicts damage on each bee that is closest, but no more than 2 spaces away
int Short_Thrower::action(){
	return 1;
}

/*********************************************************************
** Function: get_type
** Description: returns type
** Parameters: none
** Pre-Conditions: user wants type
** Post-Conditions: type returned
*********************************************************************/
string Short_Thrower::get_type(){
	return type;
}

/*********************************************************************
** Function: Short_Thrower
** Description: copy constructor
** Parameters: short thrower object
** Pre-Conditions: user wants to have the object just created be the same as another object
** Post-Conditions: objects have same variables
*********************************************************************/
Short_Thrower::Short_Thrower(const Short_Thrower& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
}

/*********************************************************************
** Function: Short_Thrower
** Description: Assignment operator overload
** Parameters: short thrower object
** Pre-Conditions: user wants to have object equal another object
** Post-Conditions: objects have same variables
*********************************************************************/
const Short_Thrower& Short_Thrower::operator=(const Short_Thrower& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
	return *this;
}
