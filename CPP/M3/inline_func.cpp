#include <iostream>
using namespace std;

inline int function (int param){ return param * 2; }

int main(){
    int var = 1;
    var = function(var);
    var = function(var);
    var = function(var);
    cout << var;
}