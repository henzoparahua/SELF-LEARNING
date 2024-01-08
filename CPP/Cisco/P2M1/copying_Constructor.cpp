#include <iostream>
using namespace std;


// There is a special kind of constructor intended to copy one object into another.
// These types of constructors have one parameter refeernced to an object of same class
// it is used to copy all important data from the source object to the newly created object.

// It is known as Copying Constructor and are implicitly invoked when a declaration of an object
// is followed by an initiator. It may also be invoked if the declaration specifies a constructor 
// suitable for the declaration.

class Class1{
public:
    Class1(int val){
        this -> value = val;
    }
    Class1(Class1 const &source){
        value = source.value + 100;
    }
    int value;
};
class Class2{
public:
    Class2(int val){
        this -> value = val;
    }
    int value;
};


int main (){
    Class1 object11(100), object12 = object11;
    Class2 object21(200), object22 = object21;

    cout << object12.value << "\n";
    cout << object22.value << "\n";
}