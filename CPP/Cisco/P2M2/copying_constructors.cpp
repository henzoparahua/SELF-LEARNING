#include <iostream>
using namespace std;

//  Copying constructors is a specific form of a constructor designed to make
//  more or less literal copy of an object. You can recognize this constructor
//  by its distinguishable header.

//  Assuming that a class is called A, its copy will be declared as A (A &)
//  This means that the constructor expect one parameter to be a reference
//  to an object whose content is intended to be copied to the newly created
//  object. There is no obligation to declare your copying constructor within
//  any of the classes.
//  If there's no explicit copying constructor in some class, an implicit 
//  constructor will be used instead. The implicit constructor simply clones
//  (*bit by bit*) the source object producing a twin copy of it.

class Class {
    int *data;
public:
    Class(int value) {

//  Also, its a good time to show a mistake you can commit while coding.

//  When you use new, you alocate a place in the memory for a class
//  and in this case, this data shares the same place in the memory for
//  all objects created from it. But, its good to know that objects can
//  share things in common by allocating in a memory place.

        data = new int;
        *data = value;
    }
    void increment() { 
        (*data)++; 
    }
    int value() { return *data; }
};

int main( void ){
    Class o1(123);
    Class o2 = o1;

//  But we can still take the value from o2 and o1 (they share) 
//  sand assign in other memory place by doing this.
    Class o3(o2.value());
//  It's not pratical and not safe, but yeah you can do it.


    o1.increment();
    cout << o1.value() << endl;
    cout << o2.value() << endl;
    cout << o3.value() << endl;
}