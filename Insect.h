#include <iostream>

using namespace std;

class Insect{
	protected:
		int armor;
		int food_cost;
	public:
		Insect();
		//getters
		int get_armor();
		int get_food_cost();
		//setters
		void set_armor(int);
		void set_food_cost(int);
		virtual int action() = 0;
};
