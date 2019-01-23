#include <iostream>

using namespace std;

class Wall:public Ant{
	private:
	
	public:
		Wall();
		virtual int action();
		virtual string get_type();
		Wall(const Wall&);
		const Wall& operator=(const Wall&);
};
