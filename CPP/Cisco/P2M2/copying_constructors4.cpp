#include <iostream>
using namespace std;

//  A class like this is an express of our will not use any constructor. Or will be partially
//  recognized - the class will be implicitly eqquiped with the so-called implicit default
//  (parameterless) constructor but the compiler will do nothing at all.

class NoConstructorsAtAll {
public:
	int   i;
	float f;
	void display()
    { 
        cout << "i=" << i << ",f=" << f << endl; 
    }
};

int main()
{
	NoConstructorsAtAll  o1;
	NoConstructorsAtAll *o2 = new NoConstructorsAtAll;

	o1.display();
	o2 -> display();
}