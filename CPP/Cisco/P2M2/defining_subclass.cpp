#include <iostream>
using namespace std;
// 

class Super {
    private:
        int storage;
    public:
        void put(int val){
            storage = val;
        }
        int get(){
            return storage;
        }
};
// When we ommit the visibility_specifier, the compiler assumes that we're going to apply a
// "private inheritance", which means that all public superclass components turn into private acess
// and private supercless components wont be acessible. It consequently means that you're not allowed
// to use the latter inside the subclass.

class Sub: public Super { };
// Class SubClass : visibility_specifier SuperClass { };

int main(){
    Sub object;

    object.put(100);
    object.put(object.get() + 1);
    cout << object.get() << endl;
}