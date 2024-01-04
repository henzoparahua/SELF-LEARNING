#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "abc";
    cout<<s.compare(1,1,"bc") + s.compare(2, 1, s, 2, 2)<<endl;
    // string.compare(start, length, other string, os start, os length)
    // * remember: its starts from 0 as likely as an array.
}