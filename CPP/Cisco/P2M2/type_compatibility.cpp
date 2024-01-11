#include <iostream>
using namespace std;

// Each new class constitutes a new type of data. This means 
// two objects may (or may not) be compatible. The object of cat
// is not compatible with the object dog class, although the 
// structure of both classes is identical. Neither of the following 
// assignments is valid and both of them will cause a compiler error.
// a_ dog = a_cat; || a_cat = a_dog;

// So, we can say that objects derived from classes which lie in 
// different branches of the inheritance tree are always incompatible.
//


class Minmim {
    public:
        void miado_infernal(){
            cout << "WWEEEEEOOWWNN! WEEEEEEEEEEEEEEOWWWWWWWNN" << endl;
        }
};
class Molusgao{
    public:
        void latido_chato(){
            cout << "HUF! HUF! HUF! HUF! HUF!" << endl;
        }
};
int main (){
    Minmim *a_cat = new Minmim();
    Molusgao *a_dog = new Molusgao();

    a_cat -> miado_infernal();
    a_dog -> latido_chato();
}