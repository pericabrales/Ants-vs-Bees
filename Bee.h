#include <iostream>
using namespace std;

class Bee:public Insect{
	private:
		int place;
	
	public:
		Bee();
		//getters
		int get_place();
		//setters
		void set_place(int);
		//other functs
		virtual int action();
};
