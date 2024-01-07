#include <iostream>
using namespace std;
class Class_one {
    // the class is an aggregate consisting of variables (properties) and functions (methods);
    // both of them is claimed to be called "Components".
    // it is well known that if you dont put either public or private, it will be automatically private.
    public:
    void set_val(int value){
        // 
        this -> value = value;
    }
    // If you want to set a default value, you can do this:
    void set_val(){
        value = -2;
    }
    int get_val();

    private:
    int value;
};

// this is how you override a function of a class.
int Class_one::get_val()
{
    return value;
}

int main(){

    // creating an object:
    Class_one object;
    // the Object of any class has the same components defined in the class.

    // the component of any object can be avaliable if you use dot.
    object.set_val(0);
    // but as you expect, private ones wont be acessible.


}