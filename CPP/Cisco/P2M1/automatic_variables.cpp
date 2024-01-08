#include <iostream>

using namespace std;

void func(){
    int var = 9;
    cout << "var = " << ++var << endl;
    cout << "var = " << var++ << endl;
    cout << "var = " << var << endl;
}
int main(){
    func();
}