#include <iostream>

using namespace std;

class SuperA {
protected:
	int pink;
public:
	void put(int val)
	{ 
		pink = val; 
	}
	int get() 
	{ 
		return pink; 
	}
};

class SuperB {
protected:
	int ward;
public:
	void insert(int val) 
	{ 
		ward = val; 
	}
	int takeout()
	{ 
		return ward; 
	}
};

class Sub : public SuperA, public SuperB {
public:
	void print()
	{ 
		cout << "soltou pinks = " << pink << endl; 
		cout << "wardou a brush = " << ward << endl;
	}
};

int main()
{
	Sub object;

	object.put(1);
	object.insert(2);
	object.put(object.get() + object.takeout());
	object.insert(object.get() + object.takeout());
	object.print();
}