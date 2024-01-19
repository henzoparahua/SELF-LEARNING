#include <iostream>
using namespace std;

//  We can say that any complex structure composed using simpler elements
//  - for example, a car is composed of an engine, transmission, suspension, etc.
//  if we imagine all these parts as classes we'll see the car class as a composion
//  that has nothing to do with inheritance.
//  Building a class is called composion. 
//  This example shows a simple dummy class consisting (composed) of  two objects of
//  two independent classes
//  

class A {
    public:
        void do_it(){
            cout << "A is doing something" << endl;
        }
};

class B {
    public:
        void do_it(){
            cout << "B is doing something" << endl;
        }
};

class Compo {
    public:
        A f1;
        B f2;
};

int main(){
    Compo co;

    co.f1.do_it();
    co.f2.do_it();
}