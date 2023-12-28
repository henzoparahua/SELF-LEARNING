#include <string>
#include <iostream>

using namespace std;

int main (){
    string pet = "Lassie";
    string pet_two("Roberto");

    string good = "Jekyll", bad = "Hyde";

//   String Operator '+' -- Concatenating
    cout << good + " & " + bad << endl;
    cout << bad + " & " + good << endl;
  // it cannot concatenate literals. Any variable with a literal can be concatenate.]
    string s;
    s = "A" + s;
    s = s + "C";
    s = "B" + s;
    cout << s << endl;
  // r: BAC -- the order seems to work here as it is B A C (fifo);

// String Operator '+='

    string the_question = "To be ";
    the_question += "or not to be";
    cout<<the_question<<endl;

// String Operator '=='

    string secret  = "banana";
    string password = "banana";

    if (secret == password)
        cout << "Opa ta livre pode passar" << endl;
    else 
    cout<< "vissi"<<endl;

// Other common operators > < >= <= !=
 if (secret == password)
    cout << "\"" << secret << "\" == \"" << password << "\"" << endl;
  else if (secret > password)
    cout << "\"" << secret << "\" > \"" << password << "\"" << endl;
  else
    cout << "\"" << password << "\" > \"" << secret << "\"" << endl;
}