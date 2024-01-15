#include <iostream>
using namespace std;

// Polymorphism: Its a method to redefine the behaviour of a superclass 
// (but only the one that explicitly agrees to be treated in this way)
// without touching its implementation
// the workd "polymorphism" means that one and same class may show many
// ("poly" - like in "polygamy") forms ("morphs") not defined by the 
// class itself but by its subclasses.
// Another definition says that polymorphism is the ability to realize
// class behavour in multiple ways. Both definitions are ambiguous and
// could be used to explain the true nature of the phenomenon.
// 

// There is also another keyword here called "virtual";
// This word means that the method won't be overriden within
// any of the possible subclasses. It also mean that the method
// will be redefined (replaced) at the level of the original class.
//
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
    virtual void latido_chato(){
        cout << "auauauau" << endl;
    }
    virtual void miado_infernal(){
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
    Pet *a_pet1, *a_pet2;
    Minmim *a_cat;
    Molusgao *a_dog;

    a_pet1 = a_cat = new Minmim("Minmin");
    a_pet2 = a_dog = new Molusgao("Molusgao");
    a_pet1 -> miado_infernal();
    a_cat -> miado_infernal();
    static_cast<Pet *> (a_cat) -> miado_infernal();
    a_pet2 -> miado_infernal();
    a_dog -> miado_infernal();
    static_cast<Pet *>(a_dog) -> miado_infernal();
    
}