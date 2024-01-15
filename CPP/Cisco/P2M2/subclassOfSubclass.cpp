#include <iostream>

using namespace std;

class Pet {
protected:
	string name;
public:
	Pet(string name)
	{ 
		this -> name = name; 
	}
	void make_sound()
	{ 
		cout << name << " is silent :(" << endl; 
	}
};

class Molusgao : public Pet {
public:
	Molusgao(string name) : Pet(name) {}
	void make_sound()
	{ 
		cout << name << " says: Woof!" << endl; 
	}
};

class Mamute : public Molusgao {
public:
	Mamute(string name) : Molusgao(name) {}
	void make_sound()
	{ 
		cout << name << " says: Wuff!" << endl; 
	}
};

class Rinoceronte : public Molusgao {
public:
	Rinoceronte(string name) : Molusgao(name) {}
	void make_sound()
	{ 
		cout << name << " says: Guau!" << endl; 
	}
};

void play_with_pet(Pet &pet)
{
	pet.make_sound();
}

int main()
{
	Pet pet("Destruidor de Mundos");
	Molusgao dog("Pitbull named Cupcake");
	Mamute mamute("MUte");
	Rinoceronte rinoceronte("Rinosessauro");

	play_with_pet(pet);
	play_with_pet(dog);
	play_with_pet(mamute);
	play_with_pet(rinoceronte);
}