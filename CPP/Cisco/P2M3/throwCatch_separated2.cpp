#include <iostream>
using namespace std;

//  the function consists in three phases:
//  Prologue (when all automatic variables/objects are created)
//  Epilogue (when the previously created entities are destroyed)

//  We know a function won't return after the footsteps but
//  in some measure will go for shortcuts ommiting normal completion
//  but it doesn't mean that the epilogue is ommited. All desired
//  changes cleaning will be done giving the program a chance to retrieve
//  its normal operation in the nearest future.

class Class {
public:
	Class()
	{ 
		cout << "Object constructed" << endl; 
	}
	~Class()
	{ 
		cout << "Object destructed" << endl; 
	}
	void hello()
	{
		cout << "Object says: hello" << endl; 
	}
};	

void do_calculations(int i)
{
	if(i == 0) 
		throw string("fatal 1");
	Class object;
	if(i == 1)
		throw string("fatal 2");
	object.hello();
	if(i == 2)
		throw string("fatal 3");
}

int main()
{
    for(int i = 0; i < 3; i++)
    {
		try {
		   cout << "-------" << endl;	
		   do_calculations(i);
		}
		catch (string &exc) {
		   cout << exc << endl;
		}
    }	
}