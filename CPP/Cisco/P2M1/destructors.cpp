#include <iostream>

using namespace std;

// Destructors are a special function which will always be named with ~Name
// a class cannot have more than one destructor and it must be a parameter-less function.
// a destructor also shouldnt be invoked explicitly.
class Class {
    public:
        Class(int val){
            value = new int[val];
            cout << "Allocation (" << val << ") done." << endl;
        }
        ~Class(){
            delete [] value;
            cout << "Deletion done." << endl;
        }
        int *value;
};
void make_a_leak(){
    Class object(1000);
}
int main (){
    make_a_leak();
}