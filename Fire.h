#include <iostream>
using namespace std;

class Fire:public Ant{
	private:

	public:
		Fire();
		virtual int action();
		virtual string get_type();
		Fire(const Fire&);
		const Fire& operator=(const Fire&);
};
