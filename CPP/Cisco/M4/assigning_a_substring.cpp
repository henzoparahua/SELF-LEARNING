#include <iostream>
#include <string>

using namespace std;

int main(){
    string sky;
    int num = 0, *p = &num;
    sky.assign(80, '*');
    cout<<sky<<endl;
}