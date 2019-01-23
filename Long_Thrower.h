#include <iostream>
using namespace std;

class Long_Thrower:public Ant{
	private:

	public:
		Long_Thrower();
		virtual int action();
		virtual string get_type();
		Long_Thrower(const Long_Thrower&);
		const Long_Thrower& operator=(const Long_Thrower&);
};
