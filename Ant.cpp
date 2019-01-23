#include <iostream>
#include "Insect.h"
#include "Ant.h"
using namespace std;

/*********************************************************************
** Function: Ant
** Description: constructor
** Parameters: none
** Pre-Conditions: make a anT object
** Post-Conditions: ant object created
*********************************************************************/
Ant::Ant():Insect(){
	armor = 0;
	food_cost = 0;	
	has_guard = false;
	type = "ant";
}

/*********************************************************************
** Function: action
** Description: returns 1 damage since most ants do that
** Parameters: none
** Pre-Conditions: ant needs to fight
** Post-Conditions: damage is dealt
*********************************************************************/
int Ant::action(){
	//random stuff
	return 1;
}

/*********************************************************************
** Function: print
** Description: prits out ant variables
** Parameters: none
** Pre-Conditions: want to print variables
** Post-Conditions: variables printed
*********************************************************************/
void Ant::print(){
	cout<<"Armor: "<<armor<<endl;
	cout<<"Food cost: "<<food_cost<<endl;
}

/*********************************************************************
** Function: get_guard
** Description: sees if the ant has a guard with it
** Parameters: none
** Pre-Conditions: make sure an ant has or doesnt have a guard
** Post-Conditions: returns true/false depending if it has or not
*********************************************************************/
//seeing if the ant has a guard with it
bool Ant::get_guard(){
	return has_guard;
}

/*********************************************************************
** Function: set_guard
** Description: changes whether or not it has a guard
** Parameters: bool
** Pre-Conditions: gets a guard, or a guard dies
** Post-Conditions: has_guard is changed
*********************************************************************/
//now setting the guard to whatever
void Ant::set_guard(bool b){
	has_guard = b;
}

/*********************************************************************
** Function: get_type
** Description: returns type
** Parameters: none
** Pre-Conditions: user wants type
** Post-Conditions: returns type
*********************************************************************/
//return the type. type will not be changed
string Ant::get_type(){
	return type;
}

/*********************************************************************
** Function: Ant
** Description: copy constructor
** Parameters: Ant object
** Pre-Conditions: user wants to have the object just created be the same as another object
** Post-Conditions: objects have same variables
*********************************************************************/
Ant::Ant(const Ant& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
}

/*********************************************************************
** Function: Ant
** Description: Assignment operator overload
** Parameters: Ant object
** Pre-Conditions: user wants to have object equal another object
** Post-Conditions: objects have same variables
*********************************************************************/
const Ant& Ant::operator=(const Ant& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
	return *this;
}
