#include <iostream>
using namespace std;

class Thrower:public Ant{
	private:

	public:
		Thrower();
		virtual int action();
		virtual string get_type();
		Thrower(const Thrower&);
		const Thrower& operator=(const Thrower&);
};
