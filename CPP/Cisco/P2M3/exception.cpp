#include <iostream>
#include <exception>
using namespace std;

//  The exception class is a base (or a root) for all other predefined
//  exceptions. It contains the called what(), which is designed to provide
//  the so-called "C"-style string (a character sequence terminated with a
//  null character) describing the nater of the exception.

//  Note that the exact form of this message is implementation-dependent
//  and different compilers may name the same events in different ways

//  The example illustrates the functioning of that mechanism. We've tried
//  to perform illegal typecasting and the exception object caught by the
//  catch statement to demonstrate the message we may get.

class A {
public:
    virtual void f () { }
};
class AA : public A {
public:
    void aa() {};
};

int main()
{
    A a;
    try {
        dynamic_cast<AA &>(a).aa();
    } catch (exception ex) {
        cout << "[" << ex.what() << "]" << endl;
    }
}

//  The local_error class is directly derived from the exception class
//  It's designed to represent all the exceptions caused by a violation
//  of the rules imposed by the logic of algorithm/program. It may (but
//  doesn't always) mean that exceptions of this kind are preventable, they
//  wont happen if all the processed data is valid. It also means that this
//  kind of exception may be predicted staticcaly by analysing the structure
//  of the source code.