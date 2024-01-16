#include <iostream>
using namespace std;

//  dynamic_cast operator

//  We've added two additional levels to the tree. The lowest level consists of
//  two braches containing very specific species: Mamute and Rinoceronte. These 'dogs' 
//  bark in their native language, if we take a look at their make_sound methods, and
//  notice two new methods;
//  It invokes the make_sound method; the method is marked as virtual, so we expect the "national"
//  objects will be able to make their native sounds.
//  
//

class Pet {
protected:
	string name;
public:
	Pet(string name) : name(name){}
	virtual void make_sound()
	{ 
		cout << name << " is silent :(" << endl; 
	}
};

class Molusgao : public Pet {
public:
	Molusgao(string name) : Pet(name) {}
	void make_sound()
	{ 
		cout << name << " says: AUAUAUAUAU!" << endl; 
	}
};

class Mamute : public Molusgao {
public:
	Mamute(string name) : Molusgao(name) {}
	void make_sound()
	{ 
		cout << name << " says: nnhhuuuuaaa!" << endl; 
	}
	void laufen(){
		cout << name << "runs (rinoceronte) !" << endl;
	}
};

class Rinoceronte : public Molusgao {
public:
	Rinoceronte(string name) : Molusgao(name) {}
	void make_sound()
	{ 
		cout << name << " says: vuuuuuumpryyy !" << endl; 
	}
	void ejecutar(){
		cout << name << " runs (rinoceronte) !" << endl;
	}
};

void play_with_pet(Pet *pet)
{
	pet -> make_sound();
	Mamute *mamute = dynamic_cast<Mamute *> (pet);
	if (mamute != nullptr)
		mamute -> laufen();

// if the dynamic cast is used the following way:
	Rinoceronte *rinoceronte = dynamic_cast<Rinoceronte *> (pet);
	if (rinoceronte != nullptr)
		rinoceronte -> ejecutar();
// then the conversion of the pointer_to_object to the type of pointer_type is possible,
// so, the result of this conversion is a new pointer which is fully usable. Otherwise,
// the result of the conversion is equal to noneptr.
// So, looking again into this sentence of code:
// if the pet pointer identifies an object of Rinoceronte class or any of its subclasses,
// we make use of the converted pointer stored in the mamute variable, otherwise, nothing 
// would happen.
//

// So, what happened?
// the main function invokes the play_with_pet in a slightly different way
// the form of the dynamic_cast utilization takes the following form:
// dynamic_cast<pointer_type> (pointer_to_object)
// and returns a newly transformed (converted) reference which result may be
// used like an ordinary l-value (a value which can be put on the left side of = operator)
// we don't need to assign it to a variable if we want to make use of it; this is exactly
// what we did inside the modified function.
}

int main()
{
	Pet *pet					= new Pet("creature");
	Molusgao *dog				= new Molusgao("molusgao");
	Mamute *mamute				= new Mamute ("mamute");
	Rinoceronte *rinoceronte	= new Rinoceronte("rinoceronte");

	play_with_pet(pet);
	play_with_pet(dog);
	play_with_pet(mamute);
	play_with_pet(rinoceronte);
}