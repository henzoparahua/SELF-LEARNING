#include <iostream>
using namespace std;

// And yes, you can also make a private static variable inside a class.
class Class {
	static int Counter;
public:
	Class() { 
		++Counter; 
	};

	~Class() 
	{ 
		--Counter;
		if(Counter == 0) 
			cout << "PIZZA MOUZARELLA" << endl; 
	};

	void ManyMan() 
	{ 
		cout << Counter << " GO!GO!ZEPPELI" << endl; 
	}
};

int Class::Counter = 0;

int main()
{
	Class a;
	Class b;

	b.ManyMan();

	Class c;
	Class d;

	d.ManyMan();
}