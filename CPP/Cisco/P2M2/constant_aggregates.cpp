#include <iostream>
using namespace std;

//  Aggregates (strucutres and arrays as well as arrays of structures and structures
//  of arrays) may be declared as const too, although the effect are somewhat different.
//

//  A const class field must be initialized inside an initialization list within any
//  of the class constructors. Any other assignment will be rejected.
class Class {
private:
	const int field;
public:
	Class(int n) : field(n) { };
	Class(Class &c) : field(0) { };
	Class() : field(1) { };

//  Constant Member Functions
//  This is a promise that the function won't modify the state of the object.
//  The syntax of the declaration is different, placing the const after the parameters.
//  The compiler will try to force the program to keep the promise. You shouldn't modify 
//  any of the class variables or invoke non-const functions inside the get function.
//  

    int get() const 
    {
        return field;
    }
};


//  As you may ask yourself, constant constructors are allowed to affect the content of an object
//  but invoking any object's member function or directly modifying any object's field is prohibited.

int fun(const int n)
{
    return n*n;
}

int main ()
{
    const int points[5] = {1, 2, 3, 4, 5 };
    const struct { int key; } data = { 10 };
//  Points and data are read-only variables and you mustn't modify them. 

//  Constant Pointers is allowed although the syntaxz used for 
//  these declarations may be a bit surprising

    int arr[5] = {1, 2, 3, 4, 5};
    int * const iptr = arr + 2;
//  As you notice, the const keyword is placed after the * and before the variable name.
//  The iptr mustn't be modified. This means we cant do something like --iptr;
//  The entities pointed to by the const pointer may be modified with no restrictions
//  The following line will be accepted and succesfully performed.
*iptr = 0;
    cout << fun(3) << endl;
}