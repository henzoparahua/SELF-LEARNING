#include <iostream>
using namespace std;

//  Of course we can learn about it from reading the function body
//  but that isn't a good idea. There are two important arguments
//  worth considering:
//

//  The function may be very long and very complex - reading it may
//  be time consuming and you may overlook some of the throw statements
//

//  The source code of the function may be inacessible - it may happen
//  if you use a ready-made library, written by other authors, when you've
//  compiled (binary) files containing only executable code and header files
//  specifying function's headers but not the bodies.
//

//  Knowing whether a certain functions throws an exception or not can be
//  very valuable to the compiler. As you already know, a function's epilogue
//  can be much more complex when an exception is thrown somewhere inside
//  functions's body. It means that function which announces loudly that isn't
//  going to throw exception can be compiled in more compact and economical way.
//

//  In older C++ versions, a function which throws an exception, may (but doesn't
//  have to) specify the types of the entities being thrown. Moreover, it is also
//  allowed to demonstrate the fact that none of the exceptions is thrown outside it.  
//  The mentioned syntax is encoded as prt of a function's header. This means that it
//  could be used even when the function's body is inaccessible or hidden.
// 


//  There's more than one form of specification - the simplest looks like this:
//  throw(x)
//  This means that the function throws one kind of exception, of type x, for example:
//  void the_fun() throw(string);
//  The more complex form looks like this:
//  throw(x1, x1, ..., xn);
//  This means that the function throws n different exceptions of types x1, x2, ... xn
//  respectively for example:
//  int do_it(int i) throw(int, string, class);
//  This function may throw exceptions of type int, string and class.
//  The last form look like this:
//  throw()
//  And means "the function trhows no exceptions at all"


//  Note: Don't be surprised if your compiler warns you that the described syntax
//  is obsoleted. It's normal and expected. It's also the reason to restrain from
//  using it in your programs


class Class {
public:
	string msg;
	Class(string txt) : msg(txt) {}
};

void thrower() throw(Class)
{
    cout << "Thrower" << endl;
	throw Class("object");
}

void putter() throw()
{
    cout << "Putter" << endl;
}

int main()
{
    try {
        putter();
        thrower();
    }
    catch(Class &exc) {
	   cout << "Caught!" << endl;
    }
}