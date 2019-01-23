#include <iostream>
#include "Insect.h"

using namespace std;

/*********************************************************************
** Function: Insect
** Description: constructor
** Parameters: none
** Pre-Conditions: make a insect object
** Post-Conditions: insect object created
*********************************************************************/
Insect::Insect(){
	armor = 0;
	food_cost = 0;
}

/*********************************************************************
** Function: get_armor
** Description: returns armor
** Parameters: none
** Pre-Conditions: user wants armor amount
** Post-Conditions: returns amrmor amount
*********************************************************************/
int Insect::get_armor(){
	return armor;
}

/*********************************************************************
** Function: get_food_cost
** Description: returns food cost
** Parameters: none
** Pre-Conditions: user wants food cost
** Post-Conditions: food cost returns
*********************************************************************/
int Insect::get_food_cost(){
	return food_cost;
}

/*********************************************************************
** Function: set_armor
** Description: sets armor to a given number
** Parameters: int
** Pre-Conditions: armor amount changes 
** Post-Conditions: changes armor to given amount
*********************************************************************/
void Insect::set_armor(int a){
	armor = a;
}

/*********************************************************************
** Function: set_fod_cost
** Description: sets food cost to given int 
** Parameters: int
** Pre-Conditions: user wants to change food cost 
** Post-Conditions: changes food to the given int
*********************************************************************/
void Insect::set_food_cost(int a){
	food_cost = a;
}
