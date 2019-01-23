#include <iostream>
using namespace std;

class Bodyguard:public Ant{
	private:
		int place;
	public:
		Bodyguard();
		//getter
		int get_place();
		//setter
		void set_place(int);
		virtual int action();
		virtual string get_type();
		Bodyguard(const Bodyguard&);
		const Bodyguard& operator=(const Bodyguard&);
};
