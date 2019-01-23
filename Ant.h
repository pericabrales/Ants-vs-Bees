#include <iostream>

using namespace std;

class Ant:public Insect{
	protected:
		bool has_guard;
		string type;
		int place;
	public:
		Ant();
		//other functs
		//don't need to have one for the ant parent class
		virtual int action();
		void print();
		bool get_guard();
		void set_guard(bool);
		virtual string get_type();
		//copy constructor
		Ant(const Ant&);
		//AOO
		const Ant& operator=(const Ant&);
};
