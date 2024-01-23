#include <iostream>
using namespace std;

//  The explicit keyword maybe placed in front of a class's constructor declaration.
//  It protects the constructor from being used in any context requiring the use of
//  implicit conversions. This constructor may only be used in an explicit way; hence
//  the keyword is used when a programmer wants to avoid any side effects that may 
//  result from the reckless use of the selected constructors, or indeed of all cons
//  tructors.
//
//  There are two very similart classes named A and B, they're both dummies
//  they do nothing at all, but they're suitable for our didatic. As you can
//  see, they're almost identical. The only difference comes from the constructor
//  declaration: the A class makes use of the explicit keyword while the B doesn't.

class A {
public:
    explicit A (int) {}
};

class B {
public:
    B(int){}
};

int main(){
// A a = 1;
    A a(1);
    B b = 1;
}