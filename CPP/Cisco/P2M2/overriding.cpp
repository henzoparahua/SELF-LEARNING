#include <iostream>
// When a subclass declares a method of the name previously known in its superclass,
// the original methods are overriden. This mean that the subclass hides the previous
// meaning of a method identifier and any invocation encoded within the subclass will
// refer to the newer method.
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


    void latido_chato();
    void miado_infernal(){
        cout << "MEEEEEEEEEEEEEEEEEOWN"<<endl;
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

// The effects of the overriding may be reversed (or voided) if you use static_cast 
// operator in reverse. In other words, we are trying to treat a pointer to a subclass 
// (Molusgao or Minmim) as a pointer to its superclass (Pet) this is called uppercasting.

    static_cast<Molusgao *> (a_pet1) -> latido_chato();
    static_cast<Minmim *> (a_pet2) -> miado_infernal();

    static_cast<Pet *> (a_pet2) -> miado_infernal();
    
}