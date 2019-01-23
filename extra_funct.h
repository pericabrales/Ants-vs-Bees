#include <iostream>
#include <vector>
#include <string>
#include "Insect.h"
#include "Ant.h"
#include "Bee.h"
#include "Harvester.h"
#include "Thrower.h"
#include "Fire.h"
#include "Long_Thrower.h"
#include "Short_Thrower.h"
#include "Wall.h"
#include "Ninja.h"
#include "Bodyguard.h"

using namespace std;

/*********************************************************************
** Function: spaces_avail
** Description: finds how many and which spaces that has available to put an ant on
** Parameters: ant array
** Pre-Conditions: user wants to buy a non bodyguard ant
** Post-Conditions: the spaces open are printed out and the number of open spaces returned
*********************************************************************/
int spaces_avail(Ant **a){

	cout<<"You have spaces: ";
	//check how many spaces are open
	int open = 0;
	for(int i = 0; i < 10; i++){
		//((*a)[i]).print();
		if(((*a)[i]).get_armor() == 0){
			cout<<i<<" ,";
			open++;
		}
	}
	cout<<" open."<<endl;
	
	return open;
}

/*********************************************************************
** Function: buy_harvester
** Description: a harvester can be bought and put on a space
** Parameters: int, ant array
** Pre-Conditions: user wants to buy a harvester ant
** Post-Conditions: harvester ant is bought and added to the array and the board
*********************************************************************/
//user wants to buy a harvester ant
void buy_harvester(int &f, Ant **a){
	Harvester h;

	if(f - h.get_food_cost() > 0){
		cout<<"What place would you like to put your Harvester on? (Left to right)"<<endl;
		
		//print out what spaces are available to put a 
		int open = spaces_avail(a);
	
		bool found = false;
		if(open > 0){
			do{
				int p = 0;
				cin>>p;

				//checking that its here
				for(int i = 0; i < 10; i++){
					if(((*a)[i]).get_armor() == 0 && i == p){
						found = true;
					}
				}
	
				if(found == true){
					((*a)[p]) = h;
					//((*a)[p]).print();
					f = f-h.get_food_cost();
				}

				else{
					cout<<"That is not a valid space. enter again."<<endl;
				}

			}while(found == false);
		}

		else{
			cout<<"There are no more spaces to place an ant. Your turn has ended."<<endl;
		}		
	}

	else{
		cout<<"You can't buy a Harvester ant because you do not have enough food."<<endl;
	}	

	cin.ignore();
}

/*********************************************************************
** Function: buy_thrower
** Description: a thrower can be bought and put on a space
** Parameters: int, ant array
** Pre-Conditions: user wants to buy a thrower ant
** Post-Conditions: thrower ant is bought and added to the array and the board
*********************************************************************/
//user wants to buy a thrower ant
void buy_thrower(int &f, Ant **a){
	Thrower t;

	if(f - t.get_food_cost() > 0){
		cout<<"What place would you like to put your Thrower ant on? (Left to right)"<<endl;
		
		//print out what spaces are available to put a 
		int open = spaces_avail(a);
	
		bool found = false;
		if(open > 0){
			do{
				int p = 0;
				cin>>p;

				//checking that its here
				for(int i = 0; i < 10; i++){
					if(((*a)[i]).get_armor() == 0 && i == p){
						found = true;
					}
				}
	
				if(found == true){
					((*a)[p]) = t;
					//((*a)[p]).print();
					f = f-t.get_food_cost();
				}

				else{
					cout<<"That is not a valid space. enter again."<<endl;
				}

			}while(found == false);
		}

		else{
			cout<<"There are no more spaces to place an ant. Your turn has ended."<<endl;
		}		
	}

	else{
		cout<<"You can't buy a Thrower ant because you do not have enough food."<<endl;
	}	

	cin.ignore();
}

/*********************************************************************
** Function: buy_fire
** Description: a fire can be bought and put on a space
** Parameters: int, ant array
** Pre-Conditions: user wants to buy a fire ant
** Post-Conditions: fire ant is bought and added to the array and the board
*********************************************************************/
//user wants to buy a fire ant
void buy_fire(int &f, Ant **a){
	Fire fi;

	if(f - fi.get_food_cost() > 0){
		cout<<"What place would you like to put your Fire ant on? (Left to right)"<<endl;
		
		//print out what spaces are available to put a 
		int open = spaces_avail(a);
	
		bool found = false;
		if(open > 0){
			do{
				int p = 0;
				cin>>p;

				//checking that its here
				for(int i = 0; i < 10; i++){
					if(((*a)[i]).get_armor() == 0 && i == p){
						found = true;
					}
				}
	
				if(found == true){
					((*a)[p]) = fi;
					//((*a)[p]).print();
					f = f-fi.get_food_cost();
				}

				else{
					cout<<"That is not a valid space. enter again."<<endl;
				}

			}while(found == false);
		}

		else{
			cout<<"There are no more spaces to place an ant. Your turn has ended."<<endl;
		}		
	}

	else{
		cout<<"You can't buy a Fire ant because you do not have enough food."<<endl;
	}	

	cin.ignore();
}

/*********************************************************************
** Function: buy_long
** Description: a long thrower can be bought and put on a space
** Parameters: int, ant array
** Pre-Conditions: user wants to buy a long thrower ant
** Post-Conditions: long thrower ant is bought and added to the array and the board
*********************************************************************/
//user wants to buy a long thrower
void buy_long(int &f, Ant **a){
	Long_Thrower l;;

	if(f - l.get_food_cost() > 0){
		cout<<"What place would you like to put your Long Thrower on? (Left to right)"<<endl;
		
		//print out what spaces are available to put a 
		int open = spaces_avail(a);
	
		bool found = false;
		if(open > 0){
			do{
				int p = 0;
				cin>>p;

				//checking that its here
				for(int i = 0; i < 10; i++){
					if(((*a)[i]).get_armor() == 0 && i == p){
						found = true;
					}
				}
	
				if(found == true){
					((*a)[p]) = l;
					//((*a)[p]).print();
					f = f-l.get_food_cost();
				}

				else{
					cout<<"That is not a valid space. enter again."<<endl;
				}

			}while(found == false);
		}

		else{
			cout<<"There are no more spaces to place an ant. Your turn has ended."<<endl;
		}		
	}

	else{
		cout<<"You can't buy a Long Thrower ant because you do not have enough food."<<endl;
	}	

	cin.ignore();
}

/*********************************************************************
** Function: buy_short
** Description: a short thrower can be bought and put on a space
** Parameters: int, ant array
** Pre-Conditions: user wants to buy a short thrower ant
** Post-Conditions: short thrower ant is bought and added to the array and the board
*********************************************************************/
//user wants to buy a shrot thrower
void buy_short(int &f, Ant **a){
	Short_Thrower s ;

	if(f - s.get_food_cost() > 0){
		cout<<"What place would you like to put your Short Thrower on? (Left to right)"<<endl;
		
		//print out what spaces are available to put a 
		int open = spaces_avail(a);
	
		bool found = false;
		if(open > 0){
			do{
				int p = 0;
				cin>>p;

				//checking that its here
				for(int i = 0; i < 10; i++){
					if(((*a)[i]).get_armor() == 0 && i == p){
						found = true;
					}
				}
	
				if(found == true){
					((*a)[p]) = s;
					//((*a)[p]).print();
					f = f - s.get_food_cost();
				}

				else{
					cout<<"That is not a valid space. enter again."<<endl;
				}

			}while(found == false);
		}

		else{
			cout<<"There are no more spaces to place an ant. Your turn has ended."<<endl;
		}		
	}

	else{
		cout<<"You can't buy a Short Thrower ant because you do not have enough food."<<endl;
	}	

	cin.ignore();
}

/*********************************************************************
** Function: buy_wall
** Description: a wall can be bought and put on a space
** Parameters: int, ant array
** Pre-Conditions: user wants to buy a wall ant
** Post-Conditions: wall ant is bought and added to the array and the board
*********************************************************************/
//user wants to buy a Wall
void buy_wall(int &f, Ant **a){
	Wall w;

	if(f - w.get_food_cost() > 0){
		cout<<"What place would you like to put your Wall ant on? (Left to right)"<<endl;
		
		//print out what spaces are available to put a 
		int open = spaces_avail(a);
	
		bool found = false;
		if(open > 0){
			do{
				int p = 0;
				cin>>p;

				//checking that its here
				for(int i = 0; i < 10; i++){
					if(((*a)[i]).get_armor() == 0 && i == p){
						found = true;
					}
				}
	
				if(found == true){
					((*a)[p]) = w;
					//((*a)[p]).print();
					f = f - w.get_food_cost();
				}

				else{
					cout<<"That is not a valid space. enter again."<<endl;
				}

			}while(found == false);
		}

		else{
			cout<<"There are no more spaces to place an ant. Your turn has ended."<<endl;
		}		
	}

	else{
		cout<<"You can't buy a Wall ant because you do not have enough food."<<endl;
	}	

	cin.ignore();
}

/*********************************************************************
** Function: buy_ninja
** Description: a ninja can be bought and put on a space
** Parameters: int, ant array
** Pre-Conditions: user wants to buy a ninja ant
** Post-Conditions: ninja ant is bought and added to the array and the board
*********************************************************************/
//user wants to buy a ninja ant
void buy_ninja(int &f, Ant **a){
	Ninja n;

	if(f - n.get_food_cost() > 0){
		cout<<"What place would you like to put your Ninja ant on? (Left to right)"<<endl;
		
		//print out what spaces are available to put a 
		int open = spaces_avail(a);
	
		bool found = false;
		if(open > 0){
			do{
				int p = 0;
				cin>>p;

				//checking that its here
				for(int i = 0; i < 10; i++){
					if(((*a)[i]).get_armor() == 0 && i == p){
						found = true;
					}
				}
	
				if(found == true){
					((*a)[p]) = n;
					//((*a)[p]).print();
					f = f - n.get_food_cost();
				}

				else{
					cout<<"That is not a valid space. enter again."<<endl;
				}

			}while(found == false);
		}

		else{
			cout<<"There are no more spaces to place an ant. Your turn has ended."<<endl;
		}		
	}

	else{
		cout<<"You can't buy a Ninja ant because you do not have enough food."<<endl;
	}	

	cin.ignore();
}

int bodyguard_space(Ant **a){
	int ant = 0;
	cout<<"You have spaces: ";
	for(int i = 0; i < 10; i++){
		if(((*a)[i]).get_armor() != 0 && ((*a)[i]).get_guard() == false){
			ant++;
			cout<<i<<" ";
		}
	}

	cout<<" with ants on them."<<endl;

	return ant;
}

/*********************************************************************
** Function: buy_guard
** Description: buy a bodyguard
** Parameters: int, ant array, vector
** Pre-Conditions: user wants to buy a bodyguard
** Post-Conditions: if there are spaces with ants on them, a bodyguard is placed with it
*********************************************************************/
//user wants to buy a bodyguard ant
void buy_guard(int &f, Ant **a, vector<Bodyguard> &guard){
	Bodyguard b;

	if(f - b.get_food_cost() > 0){
		cout<<"What place would you like to put your Bodyguard on? (Left to right)"<<endl;
		
		//print out what spaces are available to put a 
		int ant = bodyguard_space(a);
	
		bool found = false;
		if(ant > 0){

			do{
				int p = 0;
				cin>>p;

				//checking that its here
				for(int i = 0; i < 10; i++){
					if(((*a)[i]).get_armor() != 0 && i == p && ((*a)[i]).get_guard() == false){
						found = true;
						((*a)[i]).set_guard(true);
					}
				}
	
				if(found == true){
					guard.push_back(b);
					b.set_place(p);
					f = f-b.get_food_cost();
				}

				else{
					cout<<"That is not a valid space. enter again."<<endl;
				}

			}while(found == false);
		}

		else{
			cout<<"There are no more spaces to place an ant. Your turn has ended."<<endl;
		}		
	}

	else{
		cout<<"You can't buy a Bodyguard ant because you do not have enough food."<<endl;
	}	

	cin.ignore();
}

/*********************************************************************
** Function: buy_ants
** Description: user can pick which ant they want to buy
** Parameters: int, ant array, vector
** Pre-Conditions: game starts and board is printed out
** Post-Conditions: ant is added to the board
*********************************************************************/
//user can buy ants up to what they have in the food bank
void buy_ants(int &f, Ant **a, vector<Bodyguard> &guard){
	bool cont = true;
	string pick = "";
	int start = f;
	cout<<"You have "<<f<<" food in your food bank."<<endl;
	do{
		cont = true;
		cout<<"Which ant would you like to buy and place:"<<endl;
		cout<<"(1) Harvester, (2)Thrower, (3)Fire, (4)Long Thrower, (5)Short Thrower, (6)Wall, (7)Ninja, (8)Bodyguard, (9)Stop Buying"<<endl;
		getline(cin, pick);
		
		//Harvester
		if(pick == "1"){
			buy_harvester(f, a);
		}
		//Thrower
		else if(pick == "2"){
			buy_thrower(f, a);
		}
		//Fire
		else if(pick == "3"){
			buy_fire(f, a);
		}
		//Long Thrower
		else if(pick == "4"){
			buy_long(f, a);
		}
		//Short Thrower
		else if(pick == "5"){
			buy_short(f, a);
		}
		//Wall
		else if(pick == "6"){
			buy_wall(f, a);
		}
		//Ninja
		else if(pick == "7"){
			buy_ninja(f, a);
		}
		//Bodyguard
		//FIGURING WHAT TO DO HERE WITH THE ARRAY
		else if(pick == "8"){
			buy_guard(f, a, guard);
		}

		else if(pick == "9"){
			cont = true;
		}

		else{
			cout<<"You didn't choose a valid ant type. Try again."<<endl;
			cont = false;
		}

		//if they return the same number as they started, meaning they can't buy it
		if(start == f && pick != "9"){
			cont = false;
		}

		cout<<"You now have "<<f<<" in the bank"<<endl;
	}while(cont == false);

	//cout<<"Did we pass this"<<endl;
}

/*********************************************************************
** Function: print_board
** Description: prints out the physical board
** Parameters: ant array, vector, vector
** Pre-Conditions: turn has started
** Post-Conditions: board is printed out
*********************************************************************/
//printing out a physical board
void print_board(Ant **a, vector<Bee> &b, vector<Bodyguard> &guard){
	//printing out the legit board
	for(int i = -1; i < 11; i++){
		if(i == -1){
			cout<<"Q ";
		}

		else if(i > -1 && i < 10){
			if(((*a)[i]).get_guard() == true){
				cout<<"| AG |";
			}
			if(((*a)[i]).get_armor() != 0){
				cout<<"| A |";
			}
			/*else if(b.size() > 0 && b[i].get_place() == i){
				cout<<"| B |";
			}*/
			else{
				cout<<"|   |";
			}
		}

		else if(i == 10){
			cout<<" BH";
		}
	}

	cout<<endl;

	//printing out numbers
	for(int i = -1; i < 11; i++){
		if(i > -1 && i < 10){
			cout<<"    "<<i;
		}
	}

	cout<<endl;

	//I want to print bodyguards
	/*for(int i = 0; i < guard.size(); i++){
		for(int j = 0; j < 10; i++){
			if(i > -1 && i < 10){
				if(guard[j].get_place() == i){
					cout<<" G"<<endl;
					
				}

				else{
					cout<<"    ";
				}	
			}
		}
	}*/

	cout<<endl;
}

/*********************************************************************
** Function: ant_die
** Description: ant dies
** Parameters: ant array, int
** Pre-Conditions: ant has died
** Post-Conditions: ant is taken off the board
*********************************************************************/
//here is where an ant gets taken off the board if it dies
Ant* ant_die(Ant **a, int place){
	Ant *temp = new Ant[10];

	for(int i = 0; i < 10; i++){
		if(i == place){
			cout<<"The ant at space "<<i<<" has died."<<endl;
			Ant an;
			temp[i] = an;
		}

		else{
			temp[i] = (*a)[i];
		}

		//temp[i].print();
	}	

	return temp;
}

/*********************************************************************
** Function: guard_attack
** Description: bees attack a bodyguard
** Parameters: vector, bodyguard object, bee object, int, ant array
** Pre-Conditions: a bodyguard is on the ant that blocks the bee's path
** Post-Conditions: bodyguard is attacked/killed
*********************************************************************/
//here is where the bodyguard gets deleted if he dies
//his action will return his armor left over. If == 0, then bodyguard dies
void guard_attack(vector<Bodyguard> &guard, Bodyguard g, Bee &be, int place, Ant **a){
	//bodyguard is able to get hit
	if(g.get_armor() > 0){
		g.set_armor(g.get_armor() - g.action());
		cout<<"The bodyguard at space "<<place<<" has been hit."<<endl;
	}

	//if the guard is dead, pop him off the vector
	if(g.get_armor() == 0){
		cout<<"The bodyguard at space "<<place<<" has died"<<endl;
		
		//should erase the place I want
		guard.erase(guard.begin()+(place-1));
		((*a)[place]).set_guard(false);
	}
}

/*********************************************************************
** Function: bee_attack
** Description: bee's now attack and get hurt based on ant type
** Parameters: ant array, vector, vector, int
** Pre-Conditions: bee cannot move, so it must attack
** Post-Conditions: bees have attacked the ant they need to attack
*********************************************************************/
//here is where we let the Bee attack
void bee_attack(Ant **a, Bee &be, vector<Bee> &b, vector<Bodyguard> &guard, int place){
	//find out if it has a bodyguard
	if(((*a)[place]).get_guard() == true){
		for(int i = 0; i < 10; i++){
			if(guard[i].get_place() == place){
				guard_attack(guard, guard[i], be, place, a);
			}
		}
	}

	//if there is just an ant on the board
	else{
		if(((*a)[place]).get_type() == "ninja"){
			be.set_armor(be.get_armor()-((*a)[place]).action());
			be.set_place(place);
			for(int i = 0; i < b.size(); i++){
				if(b[i].get_armor() == 0){
					cout<<"Bee #"<<i+1<<" has been killed."<<endl;
					b.erase(b.begin()+(i-1));
				}
			}
		}

		//other ant that needs to get hit
		else{
			cout<<"The ant at space "<<place<<" has been hit"<<endl;
			((*a)[place]).set_armor(((*a)[place]).get_armor()-be.action());
		}
		
		//if the ant has died
		if(((*a)[place]).get_armor() == 0){

			//if the ant that has died is a fire ant
			if(((*a)[place]).get_type() == "fire"){
				be.set_armor(0);
				for(int i = 0; i < b.size(); i++){
					if(b[i].get_armor() == 0){
						cout<<"Bee #"<<i+1<<" has been killed."<<endl;
						b.erase(b.begin()+(i-1));
						break;
					}
				}

				(*a) = ant_die(a, place);

			}

			else{
				(*a) = ant_die(a, place);
				//be.set_place(place);
			}
		}
	}	
}

/*********************************************************************
** Function: bee_turn
** Description: bee gets to attack, and returns whether or not bee is reached
** Parameters: ant array, vector, vector, int
** Pre-Conditions: it's the bee's turn
** Post-Conditions: bees have attacked and moved if they can
*********************************************************************/
//trying to let the Bees do their turn
bool bee_turn(Ant **a, vector<Bee> &b, vector<Bodyguard> &guard, int &bee_count){
	//maybe figure make this an if statement to stop it so it doesn't become infinate
	if(bee_count < 11){
		Bee be;
		b.push_back(be);
		bee_count++;
	}

	//add one and then let it go
	/*if(b.size() == 0){
		//see if there is an ant in front of you
		for(int i = 0; i < 1; i++){
			for(int j = 10; j > -1; j--){
				//will move bee to the next space if no ant resides there
				if(b[i].get_place()-1 == j && ((*a)[j]).get_armor() == 0){
					cout<<"Bee #"<<i+1<<" has moved to space "<<j<<endl;
					b[i].set_place(j);
					//break;
				}

				//will attack if there is an ant on the next space over
				else if(b[i].get_place()-1 == j && ((*a)[j]).get_armor() != 0){
					cout<<"Bee #"<<i+1<<" can't move because there is an ant in space "<<j<<". It must attack."<<endl;
					bee_attack(a, b[i], b, guard, j);
					//break;

				}

			}
		}
	}*/

	//when you have more bees on the board	
	for(int i = 0; i < b.size(); i++){
		for(int j = 10; j > -1; j--){
				//Bee has reached the queen bee
			if(b[i].get_place()-1 == -1){
				return true;
			}

			//will attack if an ant is on the next space
			else if((b[i].get_place()-1) == j && ((*a)[j]).get_armor() != 0){
				bee_attack(a, b[i], b, guard, j);
				break;
			}

			//if the next space from the bee is empty
			else if((b[i].get_place()-1) == j && ((*a)[j]).get_armor() == 0){
				cout<<"Bee #"<<i+1<<" has moved to space "<<j<<endl;
				b[i].set_place(j);
				break;
			}

		} 
	}

	return false;
}

/*********************************************************************
** Function: ant_turn
** Description: ants try to kill the bees on their turn
** Parameters: ant array, vector, vector, int
** Pre-Conditions: its the ant's turn to attack
** Post-Conditions: all ants have done their attacks if they can
*********************************************************************/
//the ants get to try to kill the Bees
void ant_turn(Ant **a, vector<Bee> &b, vector<Bodyguard> &guard, int &f){

	int num_ants = 0;
	for(int i = 0; i < 10; i++){
		if(((*a)[i]).get_armor() == 0){
			num_ants++;
		}
	}

	if(num_ants > 0){
		for(int i = 0; i < 10; i++){

			//adds 1 to the food bank each turn
			if(((*a)[i]).get_type() == "harvester"){
				f = f+((*a)[i]).action();
				cout<<"The Harvester ant has collected 1 food, making your food bank now: "<<f<<endl;
			}

			//inflicts 1 damage to bee next to it
			else if(((*a)[i]).get_type() == "thrower"){
				for(int j = 0; j < b.size(); j++){
					if(b[j].get_place() == i+1){
						cout<<"Thrower ant at space "<<i<<" is attacking the bee next to it"<<endl;

						b[j].set_armor(b[j].get_armor()-((*a)[i]).action());
						break;
					}
				}
			}

			//inflicts 1 damage to the bee that is closest, but at least 4 spaces away
			else if(((*a)[i]).get_type() == "long"){
				for(int j = 0; j < b.size(); j++){
					if(b[j].get_place() >= i+4){
						cout<<"A Long Thrower ant at space "<<i<<" is attacking the closest bee at least 4 spaces away"<<endl;
						b[j].set_armor(b[j].get_armor()-((*a)[i]).action());
						break;
					}
				}

			}

			//inflicts 1 damage on the bee that is closest, but no more than 2 spaces away
			else if(((*a)[i]).get_type() == "short"){
				for(int j = 0; j < b.size(); j++){
					if(b[j].get_place() <= i+2){
						cout<<"A Short Thrower ant at space "<<i<<" is attacking the closest bee"<<endl;
						b[j].set_armor(b[j].get_armor()-((*a)[i]).action());
						break;
					}
				}
			}
		}
	}
}

/*********************************************************************
** Function: populate_array_start
** Description: populate ant array with ants to start with
** Parameters: ant array
** Pre-Conditions: ant array created
** Post-Conditions: ant array is populated
*********************************************************************/
void populate_array_start(Ant **a){
	Ant an;
	for(int i = 0; i < 10; i++){
		((*a)[i]) = an; 
	}	

}

/*********************************************************************
** Function: game
** Description: runs the game of ants vs bees
** Parameters: none
** Pre-Conditions: program is started
** Post-Conditions: game is played until all bees are killed, or bees reach the queen
*********************************************************************/
void game(){
	int turn = 1;
	//array for the ever changing bee array
	vector<Bee> b;
	int bee_count = 0;
	//vector for bodyguards
	vector<Bodyguard> guard;
	//array for the 10 spaces
	Ant* a = new Ant[10];
	//way to populate?
	populate_array_start(&a);
	//has the queen been reached
	bool queen = false;
	//starting food bank amount
	int food_bank = 50;

	do{
		cout<<endl;
		cout<<"Turn "<<turn<<endl;
		print_board(&a, b, guard);
	
		//user can buy ants
		buy_ants(food_bank, &a, guard);

		print_board(&a, b, guard);

		//ants have their turn
		ant_turn(&a, b, guard, food_bank);
		cout<<endl;
		
		//bees get their turn
		queen = bee_turn(&a, b, guard, bee_count);
		cout<<endl;
	
		//print_board(&a, b, guard);

		//last thing
		turn++;
	}while(bee_count < 11 || queen == false);

	if(bee_count == 11){
		cout<<"You won! All the Bees were defeated."<<endl;
	}

	else if(queen == true){
		cout<<"You lost. The Bees reached the queen."<<endl;
	}

	delete[] a;
};
