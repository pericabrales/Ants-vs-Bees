#include <iostream>
#include "Insect.h"
#include "Bee.h"
using namespace std;

/*********************************************************************
** Function: Bee
** Description: constructor
** Parameters: none
** Pre-Conditions: make a bee object
** Post-Conditions: bee object created
*********************************************************************/
Bee::Bee():Insect(){
	armor = 3;
	//because board array is 0-9, start it at 10, which is off the board, and then subract every time it moves on the board
	place = 10;
}

/*********************************************************************
** Function: get_place
** Description: returns place of the bee
** Parameters: none
** Pre-Conditions: user/game wants to know where the bee is
** Post-Conditions: returns the place of the bee
*********************************************************************/
int Bee::get_place(){
	return place;
}

/*********************************************************************
** Function: set_place
** Description: changes the bee place to the given number
** Parameters: int
** Pre-Conditions: user/game wants to change the position of the bee 
** Post-Conditions: place of the bee is changed
*********************************************************************/
void Bee::set_place(int a){
	place = a;
}

/*********************************************************************
** Function: action
** Description: returns 1 damage
** Parameters: none
** Pre-Conditions: comes across an ant
** Post-Conditions: does 1 damage
*********************************************************************/
int Bee::action(){
	//basically it does 1 damage
	return 1;
}
