#include <iostream>
using namespace std;
class Class{
public:
// A class named with its home class name is called a constructor.
// it is intended to construct the object during its creation.
// to initialize field values, allocate memory, create other objects, etc.

// It must not be declared using a return type, it also includes void.
    Class(){
        this -> value = -1;
    }
// But you can also overload constructor names in this way:
    Class(int val){
        this -> value = val;
    }

    void set_val(int value){
        this -> value = value;
    }
    int get_val(){
        return value;
    }
private:
    int value;

};


int main (){
    Class object;
    // you are not allowed to do the following things:
    // object.Class();
    // Class::Class();
    cout << object.get_val() << endl;
}