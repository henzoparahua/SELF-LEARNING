#include <iostream>

using namespace std;

class Class{
    // Static Variables exists throughout the whole life of the program, 
    // moreover its always only one component regardless of the number 
    // of instances of the class
    public: 
        static int Static;
        int notStatic;
        void print(){
            cout << "Static = " << ++Static <<
            ", notStatic = " << notStatic << endl;
        }
};

int Class::Static = 0;
int main(){
    Class instance1, instance2;
    instance1.notStatic = 10;
    instance2.notStatic = 20;

    instance1.print();
    instance2.print();
    instance1.print();
       
}