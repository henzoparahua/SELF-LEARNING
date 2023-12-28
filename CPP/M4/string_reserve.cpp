#include <iostream>
#include <string>

using namespace std;

// we can control the size of memory a string uses with the reserve function.
// it can shrink buffers as well as expand them.
// thecontent of the string isnt changed, it is immune to the effect of the function.
// as it is, it may not b e strict and may round the value of the parameter to fit.

void info(string& s){
    cout << "content = \""<< s<<"\" ";
    cout << "capacity = "<<s.capacity()<< endl << endl;
}

int main (){
    string str = "content";
    info(str);
    str.reserve(100);
    info(str);
    str.reserve(0);
    info(str);
}