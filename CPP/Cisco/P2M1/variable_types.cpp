#include <iostream>

using namespace std;
// autmatic variables are created and destroyed, sometimes 
// repeatedly, and automatically during program execution.

// static variables exists continuosly during the whole program execution.

void func(){
    static int var = 9; 
    cout << "var = " << ++var << endl;
}
int main(){
    for(int i = 0; i < 6; i++){
        func();
    }
}