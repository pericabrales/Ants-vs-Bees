#include <iostream>
using namespace std;

class Ninja:public Ant{
	private:

	public:
		Ninja();
		virtual int action();
		virtual string get_type();
		Ninja(const Ninja&);
		const Ninja& operator=(const Ninja&);
};
