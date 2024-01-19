#include <iostream>
using namespace std;

//  Aggregates (strucutres and arrays as well as arrays of structures and structures
//  of arrays) may be declared as const too, although the effect are somewhat different.
//
//

int main ()
{
    const int points[5] = {1, 2, 3, 4, 5 , 6};
    const struct { int key; } data = { 10 };
//  Points and data are read-only variables and you mustn't modify them. 

//  Constant Pointers is allowed although the syntaxz used for 
//  these declarations may be a bit surprising

    int arr[5] = {1, 2, 3, 4, 5, 6};
    int * const iptr = arr + 2;
//  As you notice, the const keyword is placed after the * and before the variable name.
//  The iptr mustn't be modified. This means we cant do something like --iptr;
//  The entities pointed to by the const pointer may be modified with no restrictions
//  The following line will be accepted and succesfully performed.
*iptr = 0;
}