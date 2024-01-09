#include <iostream>
using namespace std;

//  If we want to create variations of a default constructor inside a constructor, we should
//  use the syntax presented. This means that you have to list all the inner objects constructors
//  that you wish yo use instead of the default constructors.
//
//

class Element {
    int value;
public:
    Element(int value)
    { 
        this -> value = value;
        cout << "Element(" << value << ") constructed!" << endl; 
    }
    int get()
    { 
        return value; 
    }
    void put(int val)
    { 
        value = val; 
    }
};

class Collection {
    Element el1, el2;
public: 
    Collection() : el2(2), el1(1) 
    { 
        cout << "Collection constructed!" << endl; 
    }
    int get(int elno) 
    { 
        return elno == 1 ? el1.get() : el2.get(); 
    }
    void put(int elno, int val)
    { 
        if(elno == 1) 
            el1.put(val); 
        else 
            el2.put(val); 
    }
};

int main() {
    Collection coll;
}