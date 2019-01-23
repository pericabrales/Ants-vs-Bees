#include <iostream>
using namespace std;

class Harvester:public Ant{
	private:
		
	public:
		Harvester();
		virtual int action();
		virtual string get_type();
		Harvester(const Harvester&);
		const Harvester& operator=(const Harvester&);
};
