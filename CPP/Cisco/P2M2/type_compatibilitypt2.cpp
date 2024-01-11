#include <iostream>
using namespace std;

// Both Dog and Cat are now decendants *children* of the common base class Pet. We've also equipped
// all the classes with constructors enabling us to give unique names to all objects we're going to
// create in the future.
// And so we have the following conclusion:
// Objects of the superclass are compatible with objects of the subclass.
// Objects of the subclass are not compatible with objects of the superclass.
// That means that you cannot do something like a_pet -> miado_infernal();
//

class Pet{
    protected:
        string name;
    public:
        Pet(string n){
            name = n;
        }
        void run(){
            cout << name << ": I'm running!!" << endl;
        }
};
class Minmim : public Pet {
public:
    Minmim (string n) : Pet(n) {};
        void miado_infernal(){
            cout << "WWEEEEEOOWWNN! WEEEEEEEEEEEEEEOWWWWWWWNN" << endl;
        }
};
class Molusgao : public Pet{
    public:
    Molusgao (string n) : Pet(n) {};
        void latido_chato(){
            cout << "HUF! HUF! HUF! HUF! HUF!" << endl;
        }
};
int main (){
    Minmim a_cat("Minmim");
    Molusgao a_dog("Molusgao");

    a_cat.miado_infernal(); a_cat.run(); 
    a_dog.latido_chato();   a_dog.run();
}