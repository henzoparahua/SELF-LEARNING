#include <iostream>
using namespace std;

class Pet {
protected:
    string name;
public:
    Pet(string n) {
        name = n;
    }
    void run() {
        cout << name << ": I'm running!!" << endl;
    }
};
class Minmim : public Pet {
public:
    Minmim(string n) : Pet(n) {};
    void miado_infernal() {
        cout << "WWEEEEEOOWWNN! WEEEEEEEEEEEEEEOWWWWWWWNN" << endl;
    }
};
class Molusgao : public Pet {
public:
    Molusgao(string n) : Pet(n) {};
    void latido_chato() {
        cout << "HUF! HUF! HUF! HUF! HUF!" << endl;
    }
};
int main() {
    Pet* a_pet1 = new Minmim("Minmin");
    Pet* a_pet2 = new Molusgao("Molusgao");

    a_pet1->run();
    a_pet2->run();

// static_cast
// this forces the compiler to assume that a_pet is (temporarily) converted into a pointer of type Minmim *
    static_cast<Minmim *> (a_pet1) -> miado_infernal();
    static_cast<Molusgao *> (a_pet2) -> latido_chato();


// static_cast<Minmim *> (a_pet2) -> latido_chato(); this doesnt work
    static_cast<Minmim *> (a_pet2) -> miado_infernal();
// This effect is caused by the fact that the compiler isn't able to check if the pointer
// being converted is compatible with the object it points to. Full pointer validity verification
// is possible when and only when the program is being executed, in other words, during runtime.
// The c++ has a second conversion operator designed especially for this case. Its name is 
// dynamic_cast, the name says that the conversion is carried out dynamically regarding the current
// state of all created objects. This means that the conversion may (or not) be successful, causing our
// program to stop if it wants any Molusgao to WWWWWWWWWEEEEEEEEEEEEEEEEEEEEEEEEEEOWN.
}