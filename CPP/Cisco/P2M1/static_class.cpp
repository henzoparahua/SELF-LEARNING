#include <iostream>
using namespace std;
// Unique traits of the static class variables predestine them 
// to be used as counters of instances of particular class
class Class{
public:
    static int Counter;
    
    Class(){
        ++Counter;
    };
    ~Class(){
        --Counter;
        if(Counter == 0){
            cout << "PIZZA MOUZARELLA" << endl;
        }
    };
    void ManyMan(){
        cout << Counter << " instances, GO!GO! ZEPPELI!" << endl;
    }
};
int Class::Counter = 0;

int main (){
    Class a;
    Class b;

    cout << Class::Counter << " instances so far"<< endl;
    Class c;
    Class d;

    d.ManyMan();
}