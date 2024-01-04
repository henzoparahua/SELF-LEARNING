#include <iostream>

int main (){
    int *p;
    // point 0 is assigned as null but this can also sometimes causes misundertandings and mistakes
    p = 0;
    p = nullptr;

    int i = 0;
    p = &i;
    std::cout << p << std::endl;

    // Dereferencing is an operation by which the pointer variable becomes synonymus with the value it points to

    int ivar = 2, *ptr = &ivar;
    std::cout << *ptr;
}