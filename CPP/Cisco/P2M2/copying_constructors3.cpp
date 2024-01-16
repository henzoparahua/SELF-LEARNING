#include <iostream>
using namespace std;

//  As you may know, the mechanism of passing parameters by value assumes that a function
//  operates on the copy of an actual parameter. This is clear when we think about simple
//  parameters as int or floats, but it becomes even more complex when the parameter is an
//  object.
//

class Dummy {
public:
	Dummy(int value) {}
	Dummy(Dummy &source)
    { 
		cout << "Hi from the copy constructor!" << endl;
	}
};

void do_something(Dummy ob)
{
	cout << "I'm here!" << endl;
}

int main()
{
	Dummy o1(123);

	do_something(o1);
}