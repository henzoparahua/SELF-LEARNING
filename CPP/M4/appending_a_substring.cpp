#include <iostream>
#include <string>

using namespace std;

int main(){
    string thestring = "content";
    string newstring;

    newstring.append(thestring);
    newstring.append(thestring, 0, 3);
    newstring.append(2, '!');
    cout<<newstring<<endl;
}