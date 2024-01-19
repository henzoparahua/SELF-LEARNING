#include <iostream>
using namespace std;

//  Class friendship, sharing information between classes:
//  Rules for classes:
//  -> a class may be a friend of many classes
//  -> a class may have many friends
//  -> my friend's friend isn't my friend
//  -> frienship isn't inherited - the subclass has to define its own friendship.

//  Function friendship
//  Rules for functions:
//  ->  a friendship declaration must contain a complete prototype of the friend function
//      (including return type); a function with the same name, but incompatible in the 
//      sense of the parameters' conformance will not be recognized as a friend.
//  ->  A class may have many friend functions
//  ->  a function may be a friend of many classes
//  ->  a class may recognize as friends both global and member functions.

class A;

class C {
public:
	void dec(A &a);
};

class A {
friend class B;
friend void C::dec(A&);
friend void do_it(A&);
private:
	int field;
protected:
	void print() 
	{ 
		cout << "It's a secret, that field = " << field << endl; 
	}
};

void C::dec(A &a) 
{ 
	a.field--; 
}

class B {
public:
	void do_it(A &a) 
	{ 
		a.print(); 
	}
};

void do_it(A &a) 
{
	a.field = 99;
}

int main() 
{
	A a; B b; C c;
	
	do_it(a);
	b.do_it(a);
}