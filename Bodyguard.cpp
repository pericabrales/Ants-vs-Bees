#include <iostream>
#include "Insect.h"
#include "Ant.h"
#include "Bodyguard.h"

using namespace std;

/*********************************************************************
** Function: bodyguard
** Description: constructor
** Parameters: none
** Pre-Conditions: make a bodyguard object
** Post-Conditions: bodyguard object created
*********************************************************************/
Bodyguard::Bodyguard():Ant(){
	armor = 2;
	food_cost = 4;
	place = -1;
	type = "guard";

}

/*********************************************************************
** Function: get_place
** Description: returns the place that the bodyguard is at
** Parameters: none
** Pre-Conditions: user wants to know what space the bodyguard is at
** Post-Conditions: returns place
*********************************************************************/
int Bodyguard::get_place(){
	return place;
}

/*********************************************************************
** Function: set_place
** Description: sets the place of the bodyguard to given number
** Parameters: int
** Pre-Conditions: user wants to set a bodyguard to a certain ant position 
** Post-Conditions: place is changed
*********************************************************************/
void Bodyguard::set_place(int p){
	place = p;
}

/*********************************************************************
** Function: action
** Description: returns 1 damage
** Parameters: none
** Pre-Conditions: the bodyguard is hit by a bee
** Post-Conditions: bodyguard gets 1 damage to itself
*********************************************************************/
int Bodyguard::action(){
	return 1;
}

/*********************************************************************
** Function: get_type
** Description: returns type
** Parameters: none
** Pre-Conditions: user wants type
** Post-Conditions: returns type
*********************************************************************/
string Bodyguard::get_type(){
	return type;
}

/*********************************************************************
** Function: Bodyguard
** Description: copy constructor
** Parameters: bodyguard object
** Pre-Conditions: user wants to have the object just created be the same as another object
** Post-Conditions: objects have same variables
*********************************************************************/
Bodyguard::Bodyguard(const Bodyguard& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
}

/*********************************************************************
** Function:Bodyguard
** Description: Assignment operator overload
** Parameters: bodyguard object
** Pre-Conditions: user wants to have object equal another object
** Post-Conditions: objects have same variables
*********************************************************************/
const Bodyguard& Bodyguard::operator=(const Bodyguard& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
	return *this;
}
