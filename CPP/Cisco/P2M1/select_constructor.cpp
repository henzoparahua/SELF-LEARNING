#include <iostream>
using namespace std;

// it is also possible to have multiple constructors and select by the parameter which to use.
class Class{
public:
    Class(){
        cout<<"Construtor selecionado é #1" <<endl;
    }
    Class(int value){
        this -> value = value;
        cout << "Objeto construido é #2"<< endl;
    }
    ~Class(){
        cout << "Objeto foi de baise como alguns diriam. Seu valor era de: " << value << endl;
    }
    void incnPrint(){
        cout << "Valor é de: [ " << ++value << " ]" << endl;
    }
    int value;
};

int main (){
    Class *ptr1 = new Class, *ptr2 = new Class(2);
    ptr1 -> value = 1;
    ptr1 -> incnPrint();
    ptr2 -> incnPrint();
    delete ptr2;
    delete ptr1;
       
}