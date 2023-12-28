#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1 = "ABCDEF";
    cout<< str1.substr(0, 1) << " " << str1.substr(2) << " " << str1.substr() << " " << str1.substr(1, 2) << endl;

    cout<<str1.size()<<endl;
}