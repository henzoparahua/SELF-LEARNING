#include <iostream>
using namespace std;

class Class{
    public:
        Class(){
            cout << "Objeto ta feito chefão" << endl;
        }
        ~Class(){
            cout << "Objeto foi de caixa, campeão." << endl;
        }
        void mostra_valor (){
            cout << "Value = " << ++value << endl;
        }
        int value;
};

int main(){
    Class *ptr = new Class;

    ptr -> value = 1;
    ptr -> mostra_valor();
    delete ptr;
}