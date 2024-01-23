#include <iostream>
using namespace std;

//  The throw statement is obligated to throw a value, e.g. an object
//  - it can't throw nothing (sounds reasonable, doesn't it?).
//  now we're going to prove that throw is able to throw any object of
//  any accessible class. We also know that the type of the object thrown
//  may be used to choose the catch which will be responsible for handling
//  the exception. 
//

class Class {
public:
    string msg;
    Class (string txt) : msg(txt)
    {
        cout << "Object [" << msg << "] constructed" << endl;
    }
    ~Class()
    {
        cout << "Object [" << msg << "] destructed" << endl;
    }
    void hello()
    {
        cout << "Object [" << msg << "] says: hello" << endl;
    }
};

void do_calculations(int i)
{
    if(i == 0)
        throw Class("exception 1");
    Class object("object");
    if(i == 1)
        throw Class("exception 2");
    object.hello();
    if(i == 2)
        throw Class("exception 3");
}

int main()
{
    for(int i = 0; i < 3; i++) {
        try {
            cout << "-------" << endl;
            do_calculations(i);
        } catch (Class &exc) {
            cout << "Caught!" << endl;
            cout << exc.msg << endl;
        }
    }
}