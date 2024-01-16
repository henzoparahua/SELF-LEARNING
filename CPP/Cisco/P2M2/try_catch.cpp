#include <iostream>
using namespace std;

//  Using try catch statement we can "try" some risky activities and "catch" 
//  errors that appear during execution.

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

    try {
	Mamute *mamute = dynamic_cast<Mamute *> (pet);
	if (mamute != nullptr)
		mamute -> laufen();
    } catch (...)  {}

    try {
	Rinoceronte *rinoceronte = dynamic_cast<Rinoceronte *> (pet);
	if (rinoceronte != nullptr)
		rinoceronte -> ejecutar();
    } catch (...)  {}
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