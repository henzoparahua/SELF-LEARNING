#include <iostream>

using namespace std;

class Class {
    // All variables, including object, brought to life in the "ordinary" way live in a 
    // separate area of memory called the stack. It's a region which grows while you keep 
    // pushing up new variables. But, when the keyword NEW is used, the variable is created
    // in a specific memory region claimed to be the "Heap". In contrary to the stack, it is
    // almost fully under your control.
    // 
    public:
        Class(){
            cout << "Objeto ta feito chefia"<<endl;
        }
        ~Class(){
            cout<< "Objeto foi de caixa" << endl;
        }
        int value;
        int static cho;
};
int main(){
    Class *ptr = new Class();
    // in order to acess any object created by the keyword 
    // new (its in the heap) you must use the arrow operator ->
    ptr -> value = 0;
    cout <<"Acessando valor: "<< ++(ptr -> value) << endl;
    cout << "Ai quando deletado:\n";
    
    delete ptr;
}