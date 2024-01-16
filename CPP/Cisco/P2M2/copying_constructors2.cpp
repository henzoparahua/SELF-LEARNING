#include <iostream>
using namespace std;

//  Ok, now lets assume that we don't want to share data among this class.
//  So, we can consider adding an explicit copying constructor to our class.
//  This constructor will be responsible for making a copy of its own, don't forget
//  that no automatic activities will be performed if the class auready equipped with
//  a copying constructor.
//

class Class {
	int *data;
public:
	Class(int value)
	{
		 data = new int;
		*data = value;
	}
	Class(Class &source)
	{ 
		 data = new int;
		*data = source.value();
	}
	void increment()
	{
		(*data)++;
	}
	int value()
	{ 
		return *data; 
	}
};

int main()
{
	Class o1(123);
	Class o2 = o1;
	Class o3(o2);

	o1.increment();
	cout << o1.value() << endl;
	cout << o2.value() << endl;
	cout << o3.value() << endl;
}