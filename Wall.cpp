#include <iostream>
#include "Insect.h"
#include "Ant.h"
#include "Wall.h"

using namespace std;

/*********************************************************************
** Function: Wall
** Description: the constructor of the wall class
** Parameters: none
** Pre-Conditions: user has to make a wall ant
** Post-Conditions: wall ant is created with specific variabled
*********************************************************************/
Wall::Wall():Ant(){
	armor = 4;
	food_cost = 4;
	type = "wall";
}

/*********************************************************************
** Function: action
** Description: returns 0 becuase the wall does no damage
** Parameters: none
** Pre-Conditions: wall is placed on the board
** Post-Conditions: wall does nothing but take damage for a while
*********************************************************************/
//occupies a space to block the bees, and can't attack
int Wall::action(){
	return 0;
}

/*********************************************************************
** Function: get_type
** Description: returns the type
** Parameters: none
** Pre-Conditions: want to get the type
** Post-Conditions: returns type
*********************************************************************/
string Wall::get_type(){
	return type;
}

/*********************************************************************
** Function: wall
** Description: copy constructor
** Parameters: wall abject
** Pre-Conditions: make a wall object be the same as another wall object upon creation
** Post-Conditions: wall objects have same variables
*********************************************************************/
Wall::Wall(const Wall& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
}

/*********************************************************************
** Function: wall
** Description: assignment operator overload
** Parameters: wall object
** Pre-Conditions: want to have a wall object be the same as another object
** Post-Conditions: wall objects the same
*********************************************************************/
const Wall& Wall::operator=(const Wall& copy){
	armor = copy.armor;
	food_cost = copy.food_cost;
	type = copy.type;
	return *this;
}
