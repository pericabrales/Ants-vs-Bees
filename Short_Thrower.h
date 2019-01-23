#include <iostream>

using namespace std;

class Short_Thrower:public Ant{
	private:

	public:
		Short_Thrower();
		virtual int action();
		virtual string get_type();
		Short_Thrower(const Short_Thrower&);
		const Short_Thrower& operator=(const Short_Thrower&);
};
