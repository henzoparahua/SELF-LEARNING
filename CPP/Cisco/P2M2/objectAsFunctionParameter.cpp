#include <iostream>

using namespace std;

class Pet {
protected:
	string name;
public:
	void name_me(string name)
	{ 
		this -> name = name; 
	}
	void make_sound()
	{ 
		cout << name << " says: no comments" << endl; 
	}
};

void play_with_pet_by_pointer(string name, Pet *pet)
{
	pet -> name_me(name);
	pet -> make_sound();
}

void play_with_pet_by_reference(string name, Pet &pet)
{
	pet.name_me(name);
	pet.make_sound();
}

int main()
{
	Pet *p1  = new Pet();
	Pet  p2;

	play_with_pet_by_pointer("anonymous", p1);
	play_with_pet_by_reference("no_name", p2);
	play_with_pet_by_pointer("no_name", &p2);
	play_with_pet_by_reference("anonymous", *p1);
}